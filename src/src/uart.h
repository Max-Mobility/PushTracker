#ifndef UART_INCLUDE_GUARD_
#define UART_INCLUDE_GUARD_
#include <blestack/hw.h>

// task ID for data received from UART message
#define UART_RX_DATA 0

// set baud to 115200, error is 0.03%
#define BAUD_M 216
#define BAUD_E 11

/** Initialize Uart
 */
void uart_init(void);

/** Send one byte to uart polled
 */
void uart_put(char);

/** Send string to uart
 */
void uart_write(const char *, const int);

/** Receive one byte from uart */
char uart_get(void);

/** Uart task handler
  */
void uart_update(uint8 ctx, uint8 data);

#endif //UART_INCLUDE_GUARD_