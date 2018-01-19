#include "rtc.h"
#include <stdio.h>
#include "i2c.h"

const uint8 rtc_address =0xD0;
uint8 reset_rtc=0;

uint8 rtc_data[9];
uint8 rtc_d_len;

uint8 handle5_counter;

void rtc_init(void)
{
  reset_rtc =0;
  set_rtc_alarm();
  clear_rtc_int();
}

void set_rtc_alarm(void)
{
  rtc_data[0]=0x0A;  //start from 0A  register address
  rtc_data[1]=0x80;  //AFE enable  0Ah
  rtc_data[2]=0xC0;  //rp4 rp5 0Bh
  rtc_data[3]=0x80;  // rp3  0Ch
  rtc_data[4]=0x00;  // rp2 0Dh 
  rtc_data[5]=0x00;  // 
  rtc_data[6]=0x00;  // 
  hardware_i2c_write (rtc_address,6,rtc_data);
  rtc_data[0]=0x0A; 
  rtc_data[1]=0x80; 
  hardware_i2c_write(rtc_address,2,rtc_data);
}

void clear_rtc_int(void)
{
  hardware_i2c_read(rtc_address,0x0F,1,rtc_data);
  rtc_data[0]=0x01 ;
  hardware_i2c_write(rtc_address,1,rtc_data);
}

void set_rtc(void)
{
  rtc_data[0]=0x01;  //start from second  register address
  uint16 year = currentTime.year;
  uint8 month = currentTime.month;
  uint8 day = currentTime.day;
  uint8 hour = currentTime.hour;
  uint8 minute = currentTime.minute;
  uint8 second = currentTime.second;

  rtc_data[1] = ((second/10) <<4) + second%10; // second
  rtc_data[2] = ((minute/10) <<4) + minute%10; // mins
  rtc_data[3] = ((hour/10) <<4) + hour%10; // hrs
  rtc_data[4] = 0x01;  // monday for testing
  rtc_data[5] = ((day/10) <<4) + day%10; // days of month
  rtc_data[6] = ((month/10) <<4) + month%10; // month
  uint16 year_temp = year-2000;
  rtc_data[7] = ((year_temp/10) <<4) + year_temp%10; // month

  hardware_i2c_write (rtc_address,8,rtc_data);
  
  check_dates();
}

void read_rtc(void)
{
  hardware_i2c_read(rtc_address,0x00,8,&rtc_data[0]);
  currentTime.second = ((rtc_data[1] & 0x70)>>4)*10 + (rtc_data[1] & 0x0F);
  currentTime.minute = ((rtc_data[2] & 0x70)>>4)*10 + (rtc_data[2] & 0x0F);
  currentTime.hour = ((rtc_data[3] & 0x30)>>4)*10 + (rtc_data[3] & 0x0F);
  currentTime.day = (((rtc_data[5] & 0x30)>>4)*10)+(rtc_data[5]& 0x0F);
  currentTime.month = (((rtc_data[6] & 0x10)>>4)*10)+(rtc_data[6]& 0x0F);
  currentTime.year = ((((rtc_data[7] & 0xF0)>>4)*10)+(rtc_data[7]& 0x0F))+2000;
  
  //dailyInfo.year=currentTime.year;
  //dailyInfo.month=currentTime.month;
  //dailyInfo.day=currentTime.day;
  
}

uint32 get_systemTime (void)
{
  uint32 _systemTime;
  read_rtc();
  _systemTime =(currentTime.hour*3600L+currentTime.minute*60L+currentTime.second)*100L+ ((rtc_data[0] & 0xF0)>>4)*10 + (rtc_data[0] & 0x0F);
  return _systemTime;
}