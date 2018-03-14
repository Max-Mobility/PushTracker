#include "oled.h"
#include <string.h>
#include "i2c.h"
#include <blestack/hw.h>
#include "display_data.h"
#include "rtc.h"
#include "globals.h"
#include <stdio.h>
#include "ble.h"
#include "adc.h"

uint8 oled_i[10];
uint8 oled_d[300];

uint8 dram[DRAM_SIZE];
uint16 dram_ptr;
uint16 pos;

uint8 start_scroll;
uint8 oled_state;
enum scrolling_dir scrolling;

void set_oled_power(enum oled_on_off on_off) {
  P1_3 = on_off;
}

void set_oled_reset(enum oled_reset_on_off on_off) {
  P1_2 = on_off;
}

void set_oled_start(uint8 starty, uint8 endy) {  
  oled_i[0] =0;

  oled_i[1] =0x21;  // set start and end column address
  oled_i[2] =starty;   // start column 32  (36 with battery)
  oled_i[3] =endy;     // end column 96 (still 96 with battery)
  hardware_i2c_write(OLED_ADDRESS,4,oled_i);

  oled_i[0]=0;
  oled_i[1] =0x22;  // set start and end page address
  oled_i[2] =0;    // start page 0
  oled_i[3] =3;    // end page 3
  hardware_i2c_write(OLED_ADDRESS,4,oled_i);
}

void set_oled_page(uint8 page) {
  oled_i[0] =0;
  oled_i[1] =(0xB0|page);
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
}

void set_oled_column(uint8 column) {
  oled_i[0] =0;
  oled_i[1] =(0x10|(column>>4));
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  oled_i[0] =0;
  oled_i[1] =(0x0f&column);
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
}

void oled_init() {
  oled_i[0] =0;
  oled_i[0] =0;
  oled_i[1] =0xAE;   // set display off
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);

  oled_i[1] = 0x20;  // set memory addressing mode
  oled_i[2] = 0x01;  // 0:Horizontal, 1:Vertical, 2:Page, 3:Invalid
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  oled_i[1] =0x40;  // set display start line from 0
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  oled_i[1] =0x81;        
  oled_i[2] =0x4F;  // set contrast
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);
  oled_i[1] =0xA0;  // set seg remap seg0 to column0
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  oled_i[1] =0xA6;  // set normal display  1 for on in display panel
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);

  oled_i[1] =0xA8;  // Set Multiplex Ratio
  oled_i[2] =0x1F;  // 32 = only 32 rows
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  oled_i[1] =0xC0;  // set COM output scan direction C0=normal
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  oled_i[1] =0xD3;  // set display offset 
  oled_i[2] =0x00;  // offset=0
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  oled_i[1] =0xD5;  // set display clock divide 
  oled_i[2] =0x80;  // divide ration =1 ; oscillator frequency increase 1000b
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  oled_i[1] =0xD9;  // set precharge period
  oled_i[2] =0x1F;  // phase1 =15dclk phase2=1dclk 
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  oled_i[1] =0xDA;  // Set COM Pins Hardware Configuration
  oled_i[2] =0x12;  // A4=1 alternative COM pin configuration  A5=0 disable COM left/right remap
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);
  oled_i[1] =0xDB;  // Set Vcomh deselect level
  oled_i[2] =0x40;  // ~0.9vcc
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);
  oled_i[1] =0x8D;  // charge pump setting
  oled_i[2] =0x14;  // enable charge pump
  hardware_i2c_write(OLED_ADDRESS,3,oled_i);

  set_oled_power(oled_on);
  oled_i[1] =0xAF;   // set display on
  hardware_i2c_write(OLED_ADDRESS,2,oled_i);

  set_oled_start(START_Y, END_Y);

  start_scroll = 0;
  dram_ptr=0;
}

void display_on(enum oled_on_off on_off) {
  if(on_off) {
    oled_i[0] =0;
    oled_i[1] =0xAF;
    hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  }
  else {
    oled_i[0] =0;
    oled_i[1] =0xAE;
    hardware_i2c_write(OLED_ADDRESS,2,oled_i);
  }
}

void display_sleep(enum oled_sleep_on_off on_off) {
  if(oled_state!=on_off) {
    if(on_off) {
      oled_i[0] =0;
      oled_i[1] =0xAE;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      oled_i[1] =0x8D;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      oled_i[1] =0x10;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      set_oled_power(oled_off);
      oled_state = on_off;
    }
    else {
      set_oled_power(oled_on);
      oled_i[0] =0;
      oled_i[1] =0x8D;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      oled_i[1] =0x14;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      oled_i[1] =0xAF;
      hardware_i2c_write(OLED_ADDRESS,2,oled_i);
      oled_state = on_off;
    }
  }
}

void clear_dram(void) {
  memset(dram, 0x0, DRAM_SIZE);
}

void display_write(void) {
  set_oled_start(START_Y, END_Y);
  oled_d[0] =0x40;

  switch (scrolling) {
    case scroll_hor:
    case scroll_left:
    case scroll_right:
      memcpy(&oled_d[1], &dram[dram_ptr], SCREEN_BYTES);
      break;
    case scroll_ver:
    case scroll_up:
    case scroll_down:
      for(int i =0;i<SCREEN_WIDTH;i++)
      {
        for(int j=0;j<4;j++)
        {
          oled_d[i*4+j+1]=(dram[i*4+((dram_ptr/8+j)/4)*256+(dram_ptr/8+j)%4]>>(dram_ptr%8))|
            (dram[i*4+((dram_ptr/8+j+1)/4)*256+(dram_ptr/8+j+1)%4]<<(8-(dram_ptr%8)));
        }
      }
      break;
  }

  hardware_i2c_write(OLED_ADDRESS, SCREEN_BYTES + 1, oled_d);
}

void display_drive_icon(uint8 col) {
  for (int i=0; i<ICON_SIZE; i++) {
    dram[col*4 + i] = driveUnitIcon[i];
  }
}

void display_push_icon(uint8 col) {
  for (int i=0; i<ICON_SIZE; i++) {
    dram[col*4 + i] = pushIcon[i];
  }
}

void display_largeFont(char* str, uint8 len, uint8 col) {
  uint16 pos=0;
  uint16 tmp=0;
  while(pos<len) {
    tmp = str[pos]*LARGE_FONT_WIDTH*(LARGE_FONT_HEIGHT/8)-LARGE_FONT_OFFSET;
    int numBytes = LARGE_FONT_WIDTH*LARGE_FONT_HEIGHT/8;
    for (int i=0; i<numBytes; i++) {
      dram[(col+pos*LARGE_FONT_WIDTH)*4 + i] = largeFont[tmp + i];
    }
    pos++;
  }
}

void display_largeCentered(char* str, uint8 col) {
  int centerString = (strlen(str) * LARGE_FONT_WIDTH) / 2;
  int centerOffset = SCREEN_WIDTH / 2 - centerString;
  display_largeFont(str, strlen(str), centerOffset + col);  
}

void display_smallCentered(char* str, uint8 pg, uint8 col) {
  int centerString = (strlen(str) * SMALL_FONT_WIDTH) / 2;
  int centerOffset = SCREEN_WIDTH / 2 - centerString;
  display_smallFont(str, strlen(str), pg, centerOffset + col);  
}

void display_smallFont(char* str, uint8 len, uint8 pg, uint8 col) {
  uint16 pos=0;
  uint16 tmp=0;
  while(pos<len) {
    tmp = str[pos]*SMALL_FONT_WIDTH*(SMALL_FONT_HEIGHT / 8) - SMALL_FONT_OFFSET;

    for (int i =0; i<8;i++) {
      dram[(pg + (col + (pos*SMALL_FONT_WIDTH)+i)*4)] = smallFont[tmp+i*2];
      dram[(pg + (col + (pos*SMALL_FONT_WIDTH)+i)*4) + 1] = smallFont[tmp+i*2 + 1];
    }
    pos = pos + 1;
  }
}

void display_centeredFloat( float num, uint8 col) {
  char string[6];
  if (num >= 0) {
    snprintf(string, 6, "%u.%u", (uint8)num, (uint8)(fabs(num)*10) % 10 );
  }
  else {
    if (num > -1.0f) {
      snprintf(string, 6, "-%u.%u", (uint8)num, (uint8)(fabs(num)*10) % 10 );
    }
    else {
      snprintf(string, 6, "%d.%u", (int)num, (uint8)(fabs(num)*10) % 10 );
    }
  }
  int centerString = (strlen(string) * LARGE_FONT_WIDTH) / 2;
  int centerOffset = SCREEN_WIDTH / 2 - centerString;
  display_largeFont(string, strlen(string), centerOffset + col); 
}

void display_centeredInt( int num, uint8 col) {
  char string[6];
  snprintf(string, 6, "%d", num );
  int centerString = (strlen(string) * LARGE_FONT_WIDTH) / 2;
  int centerOffset = SCREEN_WIDTH / 2 - centerString;
  display_largeFont(string, strlen(string), centerOffset + col);  
}

void display_DeviceInfo(uint8 col)
{
  char string[6];
  snprintf(string, 6, "About");
  display_largeFont(string,5,col);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_Version			(uint8 col)
{
  char string[9];
  snprintf(string, 9, "PT SD BT");
  display_smallCentered(string,0,col);
  snprintf(string, 9, "%X %X %X",versionInfo.pushTracker,(versionInfo.smartDrive),(versionInfo.smartDriveBluetooth));
  display_smallCentered(string,2,col);
}

void display_Error				(uint8 col)
{
  char string[9];
  char month[3];
  char day[3];
  char year[3];
  if(errorInfo.error_type)
  {
    snprintf(string, 9, "ERR: 00%d",(uint8)errorInfo.error_type);
    display_smallCentered(string,0,col);


    if ( errorInfo.month >= 10 )
      sprintf(month, "%d", errorInfo.month);
    else
      sprintf(month, "0%d", errorInfo.month);

    if ( errorInfo.day >= 10 )
      sprintf(day, "%d", errorInfo.day);
    else
      sprintf(day, "0%d", errorInfo.day);

    if ((errorInfo.year % 100) >= 10)
      sprintf(year, "%d", errorInfo.year % 100);
    else
      sprintf(year, "0%d", errorInfo.year % 100);


    snprintf(string, 9, "%s/%s/%s",month,day,year);
    display_smallCentered(string,2,col);
  }
  else{
    snprintf(string, 9, "NO ERROR");
    display_smallCentered(string,1,col);

  }
}

void display_ErrorType			(uint8 col)
{
  switch(errorInfo.error_type)
  {
    case   Packet_Error_BatteryVoltage:
      display_smallCentered("Voltage",0,col);
      display_smallCentered("Spike",2,col);
      break;
    case Packet_Error_OverCurrent:
      display_smallCentered("Over",0,col);
      display_smallCentered("Spike",2,col);
      break;
    case Packet_Error_MotorPhases:
      display_smallCentered("Motor",0,col);
      display_smallCentered("Sensor",2,col);
      break;
    case Packet_Error_GyroRange:
      display_smallCentered("SD Angle",0,col);
      display_smallCentered("Range",2,col);
      break;
    case 	Packet_Error_OverTemperature:
      display_smallCentered("Over",0,col);
      display_smallCentered("Heat",2,col);
      break;
    case Packet_Error_BLEDisconnect:
      display_smallCentered("PT BT",0,col);
      display_smallCentered("Disconn",2,col);
      break;
  }	
}

void display_units(uint8 col) {
  char line0[10];
  char line1[10];
  switch (SDSettings.units) {
    case Units_English:
      sprintf(line0, "mi");
      sprintf(line1, "mph");
      break;
    case Units_Metric:
      sprintf(line0, "km");
      sprintf(line1, "km/h");
      break;
    default:
      SDSettings.units = Units_English;
      sprintf(line0, "mi");
      sprintf(line1, "mph");
      break;
  }
  clear_dram();
  display_smallCentered(line0, 0, col);
  display_smallCentered(line1, 2, col);
}

void display_controlMode(uint8 col) {
  char string[10];
  switch (SDSettings.controlMode) {
    case DU_controlMode_Beginner:
      sprintf(string, "MX1");
      break;
    case DU_controlMode_Intermediate:
      sprintf(string, "MX2");
      break;
    case DU_controlMode_Advanced:
      sprintf(string, "MX2+");
      break;
    default:
      SDSettings.controlMode = DU_controlMode_Advanced;
      sprintf(string, "MX2+");
      break;
  }
  display_largeCentered(string, col);
}

void display_ezMode(uint8 col) {
  char line0[10] = "EZ-ON";
  char line2[10];
  switch (SDSettings.settingsFlags1 & (1 << SmartDrive_SettingsFlag_EZMODE)) {
    case 0:
      sprintf(line2, "No");
      break;
    case 1:
      sprintf(line2, "Yes");
      break;
    default:
      sprintf(line2, "No");
      break;
  }
  display_smallCentered(line0, 0, col);
  display_smallCentered(line2, 2, col);
}

void fillTimeString(char *hours, char* minutes, enum TimeMask timeMask) {
  sprintf(minutes, "  ");
  sprintf(hours, "  ");
  if (timeMask != TimeMask_Hour && timeMask != TimeMask_TimeAll && timeMask != TimeMask_All) {
    if (currentTime.displaySetting == TimeDisplay12) {
      uint8 _hours = currentTime.hour;
      if(_hours>12)
      {
        if ((_hours-12) >= 10)
          sprintf(hours, "%d%d", (_hours-12)/10,(_hours-12)%10);
        else
          sprintf(hours, " %d", (_hours-12)%10);
      }
      else
      {
        if (_hours >= 10)
          sprintf(hours, "%d%d", (_hours)/10,(_hours)%10);
        else if (_hours > 0)
          sprintf(hours, " %d", (_hours)%10);
        else
          sprintf(hours, "12");
      }
    }
    else {
      hours[0] = 48+currentTime.hour / 10;
      hours[1] = 48+currentTime.hour % 10;
    }
  }
  if (timeMask == TimeMask_TenMinute) {
    sprintf(minutes, " %d", currentTime.minute % 10);
  }
  else if (timeMask == TimeMask_Minute) {
    sprintf(minutes, "%d ", currentTime.minute / 10);
  }
  else if (timeMask != TimeMask_TimeAll && timeMask != TimeMask_All) {
    sprintf(minutes, "%d%d", currentTime.minute / 10, currentTime.minute % 10);
  }
};

void display_AMPM(uint8 col) {
  uint8 _hours = currentTime.hour;
  if(_hours<12)
  {
    display_smallFont("A", 1, 0,col);
  }
  else
  {
    display_smallFont("P", 1, 2,col);
  }
}
void display_OTA(uint8 col)
{
  char OTAStatus[8];
  sprintf(OTAStatus,"OTA %d%d%%", OTAProgress/10, OTAProgress%10);
  display_smallCentered(OTAStatus,0,col);
  display_batteryFilled(2, col+9, OTAProgress);
  display_smallFont(" ", 1, 2, col+52);
}

void display_time(uint8 col) {
  display_timeBlank(col, TimeMask_None);
}

void display_timeBlank(uint8 col, enum TimeMask timeMask) {
  char hours[3];
  char minutes[3];

  fillTimeString(hours, minutes, timeMask);

  if (timeMask != TimeMask_TimeAll && timeMask != TimeMask_All) {
    if (currentTime.displaySetting == TimeDisplay12) {
      display_smallFont(":", 1, 1,col+22);
      display_largeFont(hours, strlen(hours), col);
      display_largeFont(minutes, strlen(minutes), col+28);
      display_AMPM(col+56);
    }
    else {
      char string[8];
      sprintf(string, "%s:%s", hours, minutes);
      display_largeCentered(string, col);
    }
  }
}

void display_timeFormat(uint8 col) {
}

void display_date(uint8 col) {
  display_dateBlank(col, TimeMask_None);
}

void display_dateBlank(uint8 col, enum TimeMask timeMask) {
  char month[4];
  char day[3];
  char year[5];

  if ( currentTime.month >= 10 )
    sprintf(month, "%d", currentTime.month);
  else
    sprintf(month, "0%d", currentTime.month);

  if ( currentTime.day >= 10 )
    sprintf(day, "%d", currentTime.day);
  else
    sprintf(day, "0%d", currentTime.day);

  if ((currentTime.year % 100) >= 10)
    sprintf(year, "%d", currentTime.year % 100);
  else
    sprintf(year, "0%d", currentTime.year % 100);

  if (timeMask == TimeMask_Month) {
    sprintf(month, "  ");
  }
  else if (timeMask == TimeMask_Day) {
    sprintf(day, "  ");
  }
  else if (timeMask == TimeMask_TenYear) {
    year[0] = ' ';
  }
  else if (timeMask == TimeMask_Year) {
    year[1] = ' ';
  }
  char line1[8];
  sprintf(line1, "%s/%s/%s", month, day, year);
  display_smallFont(line1, strlen(line1), 1, col);
}

/*************************************/
/*     ICON DISPLAY FUNCTIONS        */
/*************************************/

void display_smallCheckIcon(int pg, int col) {
  for (int i=0; i<smallCheckIcon_WIDTH; i++) { // num cols
    dram[pg + (col + i)*4] = smallCheckIcon[i*2];
    dram[pg + (col + i)*4 + 1] = smallCheckIcon[i*2 + 1];
  }
}

void display_driveUnitIcon(uint8 col) {
  for (int i=0; i< ICON_SIZE; i++) {
    dram[col*4 + i] = driveUnitIcon[i];
  }
}

void display_maxBoldIcon(uint8 col) {
  for (int i=0; i< ICON_SIZE; i++) {
    dram[col*4 + i] = maxBoldIcon[i];
  }
}

void display_gearIcon(uint8 col) {
  for (int i=0; i< ICON_SIZE; i++) {
    dram[col*4 + i] = gearIcon[i];
  }
}

void display_distanceIcon(uint8 col) {
  for (int i=0; i< ICON_SIZE; i++) {
    dram[col*4 + i] = distanceIcon[i];
  }
}

void display_clockIcon(uint8 col) {
  for (int i=0; i< CLOCK_ICON_SIZE; i++) {
    dram[col*4 + i] = clockIcon[i];
  }
}

void display_wirelessIcon(uint8 col) {
  for (int i=0; i< WIRELESS_ICON_SIZE; i++) {
    dram[col*4 + i] = wirelessIcon[i];
  }
}

void display_phoneIcon(uint8 col) {
  for (int i=0; i<PHONE_ICON_SIZE; i++) {
    dram[col*4 + i] = phoneIcon[i];
  }
}

void display_accelIcon(uint8 col) {
  for (int i=0; i<ICON_SIZE; i++) {
    dram[col*4 + i] = accelIcon[i];
  }
}

void display_speedIcon(uint8 col) {
  for (int i=0; i<ICON_SIZE; i++) {
    dram[col*4 + i] = speedIcon[i];
  }
}

void display_exit1Icon(uint8 col) {
  for (int i=0; i<exit1Icon_SIZE; i++) {
    dram[col*4 + i] = exit1Icon[i];
  }
}

void display_exit2Icon(uint8 col) {
  for (int i=0; i<exit2Icon_SIZE; i++) {
    dram[col*4 + i] = exit2Icon[i];
  }
}

void display_coastIcon(uint8 col) {
  for (int i=0; i<coastIcon_SIZE; i++) {
    dram[col*4 +i] = coastIcon[i];
  }
}

void display_controlPanelIcon(uint8 col) {
  for (int i=0; i<controlPanelIcon_SIZE; i++) {
    dram[col*4 +i] = controlPanelIcon[i];
  }
}

void display_bluetoothIcon(uint8 pg, uint8 col) {
  for (int i=0; i<bluetoothIcon_WIDTH; i++) { // num cols
    dram[pg + (col + i)*4] = bluetoothIcon[i*2];
    dram[pg + (col + i)*4 + 1] = bluetoothIcon[i*2 + 1];
  }
}

void display_downArrowIcon(uint8 pg, uint8 col) {
  for (int i=0; i<downArrowIcon_WIDTH; i++) { // num cols
    dram[pg + (col + i)*4] = downArrowIcon[i*2];
    dram[pg + (col + i)*4 + 1] = downArrowIcon[i*2 + 1];
  }
}

void display_instructionIcon(uint8 col) {
  for (int i=0; i<instructionIcon_SIZE; i++) {
    dram[col*4 +i] = instructionIcon[i];
  }
}

void display_tapSensitivityIcon(uint8 col) {
  for (int i=0; i<tapSensitivityIcon_SIZE; i++) {
    dram[col*4 +i] = tapSensitivityIcon[i];
  }
}

void display_lowBatteryIcon(uint8 pg, uint8 col) {
  for (int i=0; i<lowBatteryIcon_WIDTH; i++) { // num cols
    dram[pg + (col + i)*4] = lowBatteryIcon[i*2];
    dram[pg + (col + i)*4 + 1] = lowBatteryIcon[i*2 + 1];
  }
}

void display_sleepIcon(uint8 col) {
  for (int i=0; i<sleepIcon_SIZE; i++) {
    dram[(col+(64-sleepIcon_WIDTH)/2)*4 +i] = sleepIcon[i];
  }
}

void display_unitsIcon(uint8 col) {
  for (int i=0; i<unitsIcon_SIZE; i++) {
    dram[col*4 +i] = unitsIcon[i];
  }
}

void display_warningIcon(uint8 col) {
  for (int i=0; i<warningIcon_SIZE; i++) {
    dram[col*4 +i] = warningIcon[i];
  }
}

void display_checkIcon(uint8 col) {
  for (int i=0; i<checkIcon_SIZE; i++) {
    dram[col*4 +i] = checkIcon[i];
  }
}

void display_xIcon(uint8 col) {
  for (int i=0; i<xIcon_SIZE; i++) {
    dram[col*4 +i] = xIcon[i];
  }
}

void display_doNotIcon(uint8 pg, uint8 col) {
  for (int i=0; i<doNotIcon_WIDTH; i++) { // num cols
    dram[pg + (col + i)*4] = doNotIcon[i*2];
    dram[pg + (col + i)*4 + 1] = doNotIcon[i*2 + 1];
  }
}

/*************************************/
/*     MENU DISPLAY FUNCTIONS        */
/*************************************/

void display_numberMenu(int col) {
  // show check mark on left
  display_smallCheckIcon(2, col);
  // show + on right
  char str[] = "+";
  uint8 len = 1;
  uint8 pg = 2;
  col = col + SCREEN_WIDTH - SMALL_FONT_WIDTH;
  uint16 pos=0;
  uint16 tmp=0;
  while(pos<len) {
    tmp = str[pos]*SMALL_FONT_WIDTH*(SMALL_FONT_HEIGHT / 8) - SMALL_FONT_OFFSET;

    for (int i =0; i<8;i++) {
      uint16 val = ((uint16)smallFont[tmp+i*2] )  + ((uint16)smallFont[tmp+i*2 + 1]<<8);
      val = val << 4;
      dram[(pg + (col + (pos*SMALL_FONT_WIDTH)+i)*4)] =  (uint8)( val & 0xFF);
      dram[(pg + (col + (pos*SMALL_FONT_WIDTH)+i)*4) + 1] =(uint8)((val >> 8)&0xff);
    }
    pos = pos + 1;
  }
  //display_smallFont(string, strlen(string), 2, col  + SCREEN_WIDTH - SMALL_FONT_WIDTH);
}

void display_optionMenu(int col) {
  // show check mark on left
  display_smallCheckIcon(2, col);
  // show down arrow on right
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setSDOptions(uint8 col) {
  display_driveUnitIcon(col);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setAccel(uint8 col) {
  display_accelIcon(col);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setMaxSpeed(uint8 col) {
  display_speedIcon(col);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setTapSensitivity(uint8 col) {
  display_tapSensitivityIcon(col);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setControlMode(uint8 col) {
  display_controlPanelIcon(col + (SCREEN_WIDTH - controlPanelIcon_WIDTH) / 2);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_sdOptions_back(uint8 col) {
  display_exit2Icon(col + (SCREEN_WIDTH - exit2Icon_WIDTH)/2);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_setUnits(uint8 col) {
  display_unitsIcon(col + (SCREEN_WIDTH - unitsIcon_WIDTH)/2);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_pairPhone(uint8 col) {
  char string[]="PT";
  display_smallFont(string,strlen(string),1,col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_bluetoothIcon(1,col+offset);
  offset += bluetoothIcon_WIDTH + 5;
  display_phoneIcon(col+offset);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_pairPhoneFailed    (uint8 col)
{
  char string[]="PT";
  display_smallFont(string,strlen(string),1,col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_doNotIcon(1,col+offset);
  offset += doNotIcon_WIDTH + 5;
  display_phoneIcon(col+offset);

}
void display_pairPhoneSuccess   (uint8 col)
{
  char string[]="PT";
  display_smallFont(string,strlen(string),1,col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_checkIcon(col+offset);
  offset += checkIcon_WIDTH + 5;
  display_phoneIcon(col+offset);

}
void display_pairSD(uint8 col) {
  char string[6];
  sprintf(string,"PT");
  display_smallFont(string,strlen(string),1, col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_bluetoothIcon(1,col+offset);
  sprintf(string, "SD");
  offset += bluetoothIcon_WIDTH+5;
  display_smallFont(string, strlen(string),1, col+offset);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}



void display_pairSDFailed  		(uint8 col)
{
  char string[6];
  sprintf(string,"PT");
  display_smallFont(string,strlen(string),1, col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_doNotIcon(1,col+offset);
  sprintf(string, "SD");
  offset += doNotIcon_WIDTH+5;
  display_smallFont(string, strlen(string),1, col+offset);

}
void display_pairSDSuccess		(uint8 col)
{
  char string[6];
  sprintf(string,"PT");
  display_smallFont(string,strlen(string),1, col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  display_checkIcon(col+offset);
  sprintf(string, "SD");
  offset += checkIcon_WIDTH+5;
  display_smallFont(string, strlen(string),1, col+offset);

}

void display_connectingPhone(uint8 col, uint8 wirelessOnOff) {
  char string[]="PT";
  display_smallFont(string,strlen(string),1,col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  if(wirelessOnOff)
    display_wirelessIcon(col+offset);
  offset += wirelessIcon_WIDTH + 5;
  display_phoneIcon(col+offset);
}

void display_connectingSD(uint8 col,uint8 wirelessOnOff) {
  char string[6];
  sprintf(string,"PT");
  display_smallFont(string,strlen(string),1, col);
  int offset = strlen(string)*SMALL_FONT_WIDTH + 5;
  if(wirelessOnOff)
    display_wirelessIcon(col+offset);
  sprintf(string, "SD");
  offset += wirelessIcon_WIDTH+5;
  display_smallFont(string, strlen(string),1, col+offset);
}

void display_setClock(uint8 col) {
  display_clockIcon(col + 20);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_exitSettings(uint8 col) {
  display_exit2Icon(col + (SCREEN_WIDTH - exit1Icon_WIDTH)/2);
  display_downArrowIcon(2, col + SCREEN_WIDTH - downArrowIcon_WIDTH);
}

void display_adc(uint16 result) {
  char string[5];
  string[0] = result/1000+48;
  result -= (string[0]-48)*1000;
  string[1] = result/100+48;
  result -= (string[1]-48)*100;
  string[2] = result/10+48;
  result -= (string[2]-48)*10;
  string[3] = result+48;
  display_largeFont(string, strlen(string), 0);
}

void display_batteryFilled(uint8 pg, uint8 col, uint8 percentFilled) {
  const int zeroPercentCol = 6; // col 6 in the image
  const int fullPercentCol = 39; // col 39 in the image
  const char topMask = 0xF8;
  const char bottomMask = 0x07;
  int stopCol = zeroPercentCol + ((fullPercentCol-zeroPercentCol)*percentFilled) / 100;
  // draw battery
  for (int i=0; i<BATTERY_ICON_SIZE/2; i++) { // num cols
    dram[pg + (col + i)*4] = batteryIcon[i*2];
    dram[pg + (col + i)*4 + 1] = batteryIcon[i*2 + 1];
    // blit percentage
    if (i <= stopCol && i >= zeroPercentCol) {
      dram[pg + (col +i)*4] |= topMask;
      dram[pg + (col +i)*4 +1 ] |= bottomMask;
    }
  }
}

void display_batteries(uint8 col) {
  char string[10];
  sprintf(string,"PT");
  display_smallFont(string, strlen(string), 0, col);
  sprintf(string,"SD");
  display_smallFont(string, strlen(string), 2, col);
  display_batteryFilled(0, col+18, battery);
  if (driveUnit_battery > 0)
    display_batteryFilled(2, col+18, driveUnit_battery);
  else {
    sprintf(string,"SD -----");
    display_smallFont(string, strlen(string), 2, col);
  }
}

void display_est_distance  (uint8 col)
{
  char string[10];
  sprintf(string,"PT");
  display_smallFont(string, strlen(string), 0, col);
  sprintf(string,"SD");
  display_smallFont(string, strlen(string), 2, col);
  display_batteryFilled(0, col+18, battery);
  float est_distance;
  est_distance = est_dis_facter*driveUnit_battery/1000.0f*uints_convertion;
  sprintf(string,".");
  display_smallFont(string, 1, 2,col+33);
  if(est_distance<10)
  {
  sprintf(string," %d", (int)(est_distance));
  }
  else
  {
  sprintf(string,"%d%d", (int)(est_distance/10.0f),(int)(est_distance) );
  }
  display_smallFont(string, 2, 2,col+18);
  sprintf(string,"%d", (int)(est_distance*10.0f) %10);
  display_smallFont(string, 1, 2,col+40);  
  //display_smallFont(string, 4, 2,col+16);
  if(SDSettings.units == Units_English)
    sprintf(string,"mi");	
  else
    sprintf(string,"km");	
  display_smallFont(string, strlen(string), 2, col+48);
     
}

void display_coastTime(uint8 col) {
  char string[6];
  if ((dailyInfo.coastWith/100) < 100) {
    snprintf(string, 5,"%d.%d", (int)(dailyInfo.coastWith/100), (int)(dailyInfo.coastWith/10) %10);
  }
  else {
    snprintf(string, 5,"%d", (int)(dailyInfo.coastWith/100));
  }
  display_largeFont(string, strlen(string), col);
  //display_centeredFloat((float)(dailyInfo.coastWith) / 100.0f, col);
  sprintf(string, "s");
  display_smallFont(string, strlen(string), 2, col + (64-strlen(string)*SMALL_FONT_WIDTH));
}

void display_distance(uint8 col)
{
  char string[6];
  snprintf(string, 5,"%d.%d", (int)(motorDistance*uints_convertion), (int)(uints_convertion*motorDistance*10.0f) %10);
  display_largeFont(string, strlen(string), col);
  if(SDSettings.units == Units_English)
    sprintf(string,"mi");	
  else
    sprintf(string,"km");	
  display_smallFont(string, strlen(string), 2, col+48);
}

void display_ble_state(uint8 bt_state, uint8 col) {
  char string[10];
  sprintf(string,"BT");
  display_smallFont(string, strlen(string), 0, col);
  switch(bt_state)
  {
    case STATE_STANDBY:
      sprintf(string,"STDBY");
      break;
    case STATE_SCANNING:
      sprintf(string,"SCAN");
      break;
    case STATE_CONNECTED:
      sprintf(string,"CXED");
      break;
    case STATE_CONNECTING_APP:
      sprintf(string,"SXING");
      break;
    case STATE_PAIRING_DU:
    case STATE_PAIRING_APP:
      sprintf(string,"PAIRING");
      break;
  }
  display_smallFont(string, strlen(string), 2, col);
}

void display_scrolling()
{
  int dram_upper_limit = 0;
  int dram_lower_limit = 0;
  int dram_increment = 0;
  switch (scrolling) {
    case scroll_hor:  // same as left
    case scroll_left:
      dram_upper_limit = 64*4;
      dram_increment = 32;
      break;
    case scroll_ver:  // same as up
    case scroll_up:
      dram_upper_limit = 32;
      dram_increment = 4;
      break;
    case scroll_right:
      dram_upper_limit = 128*64;
      dram_lower_limit = 32;
      dram_increment = -32;
      break;
    case scroll_down:
      dram_upper_limit = 32;
      dram_lower_limit = 4;
      dram_increment = -4;
      break;
  }

  if (dram_ptr >= dram_upper_limit ||
      dram_ptr < dram_lower_limit) {
    scrollingDone = 1;
    dram_ptr = 0;
  }
  else {
    dram_ptr += dram_increment;
  }
}