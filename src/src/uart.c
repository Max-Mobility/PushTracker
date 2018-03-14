#include "uart.h"
/* ==========================================================================
 * Bluegiga BLE C SDK demo project file
 * http://www.bluegiga.com/support
 * ==========================================================================
 * This is free software distributed under the terms of the MIT license
 * reproduced below.
 *
 * Copyright (c) 2014 Bluegiga Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * ========================================================================== */

#include <blestack/hw.h>
#include <blestack/util.h>
#include <blestack/task.h>
#include "ble.h"
#include "uart.h"
#include "globals.h"   // task id definitions

char dataBuffer[maxPacketSize];
char bufferToPT[maxPacketSize];

#pragma vector=URX1_VECTOR
__interrupt void uart1_rx_isr(void)
{
    uint8 data=uart_get();
  memcpy(dataBuffer, &dataBuffer[1], maxPacketSize - 1);
  dataBuffer[maxPacketSize-1] = data;
    if (data == packetStop) {
    int stopIndex = maxPacketSize - 1;
    int crcIndex = stopIndex - 1;
    int lenIndex = crcIndex - 1;
    char packet_crc = dataBuffer[crcIndex];
    char packet_length = dataBuffer[lenIndex];
    int data_index = lenIndex - packet_length;
    if (packet_length >= 0 && packet_length <= packetMaxDataSize &&(packet_crc == CRC(&dataBuffer[data_index],packet_length))) {
      int subTypeIndex = data_index - 1;
      int typeIndex = subTypeIndex - 1;
      int startIndex = typeIndex - 1;
      char packet_subType = dataBuffer[subTypeIndex];
      char packet_type = dataBuffer[typeIndex];
      char start_byte = dataBuffer[startIndex];
  
      if (start_byte == packetStart) 
        task_send_msg((enum task_id)task_id_uart, 1, data);
    }
  }
}

void uart_init(void)
{
    // Enable UART on channel 1 alternate 1, 115200,8/N/1 w/o flow control
    URX1IE = 1;         // enable receive interrupt on UART1
    PERCFG |= BIT(1); // alternative 2 USART1 I/O CFG
    // UART pins on p0.2, p0.3, p0.4, p0.5 (CTS/RTS/TXD/RXD respectively)
    //P0SEL |= BIT(2) | BIT(3) | BIT(4) | BIT(5);
    P1SEL |= BIT(6) | BIT(7); // P0_2/P0_3 not required w/o flow control
    //P2DIR |= BIT(6);    // UART1 has priority in Port0
    P2SEL |= BIT(6);
    //P2DIR |= BIT(6);
    U1BAUD = BAUD_M;    // baud mantissa
    U1GCR = BAUD_E;     // baud exponent
    U1UCR = BIT(1);     // stop bit state is high, and flow is disabled (set BIT(6) to enable)
    U1CSR = BIT(7) | BIT(6);    // set USART mode to UART, and enable
}

void uart_put(char c)
{
    /** Load data to data buffer and wait until data has been latched to send buffer
     * Note: Checking for data send has to happen after writing byte.
     * U1TX_BYTE shows only state of last written byte and at boot bit is 0.
     * Also bit-addressable reads must be used otherwise when clearing flag
     * a possible race may cause missing other bits in same register
     */
    U1DBUF = c;
    
    while (!U1TX_BYTE); // wait until transmitted
    U1TX_BYTE = 0;      // clear flag
}

void uart_write(const char *str, const int length)
{
  for (int i=0; i < length; i++)
  {
    uart_put(str[i]);
  }
}

char uart_get(void)
{
    return U1DBUF;
}

/** Task Message handler
 * ctx is context information for message, for example in UART it could be 
 * used to indicate the UART port from which the message is arriving
 *
 * event is message sent to task
 */
void uart_update(uint8 ctx, uint8 data)
{
 
    int stopIndex = maxPacketSize - 1;
    int crcIndex = stopIndex - 1;
    int lenIndex = crcIndex - 1;
    char packet_length = dataBuffer[lenIndex];
    int data_index = lenIndex - packet_length;
    int subTypeIndex = data_index - 1;
    int typeIndex = subTypeIndex - 1;
    int startIndex = typeIndex - 1;
    char packet_subType = dataBuffer[subTypeIndex];
    char packet_type = dataBuffer[typeIndex];
    char start_byte = dataBuffer[startIndex];
    if (start_byte == packetStart) {
      bufferToPT[0] = packet_type;
      bufferToPT[1] = packet_subType;
      if (packet_length)
        memcpy(&bufferToPT[2], &dataBuffer[data_index], packet_length);
      if (connected)
        gatt_local_write_attribute(BG_ATT_xgatt_speed,0,bufferToPT,packet_length+2);
      //gatt_local_write_attribute(BG_ATT_xgatt_speed,0,&data,1);
      // send bufferToPT through bluetooth here
   }
}
