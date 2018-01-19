#include "pstore.h"
#include "pstore.h"
#include "pstore.h"
#include <string.h>
#include <blestack/config.h>

#include "globals.h"
const uint16 ps_cleaning=0x8002;
const uint16 ps_bond=0x8003;
const uint16 ps_motorMode=0x8004;
const uint16 ps_setting = 0x8005;
const uint16 ps_time = 0x8006;
const uint16 ps_currentDay_info = 0x8007;
const uint16 ps_version = 0x8008;
const uint16 ps_error_info = 0x8009;
const uint16 ps_battery_cali = 0x800A;
const uint16 ps_motor_distance = 0x800B;
const uint16 ps_est_distance   =0x800C;

const uint16 key_wb_data_count=0x8010;
const uint16 key_wb_data_offset=0x8011;







uint8 ps_data_len;
uint8 ps_data[32];
uint32 erase_page;

uint8 wb_data_index;
uint8 wb_data_count;
uint8 wb_data[32];

uint8 ps_data_temp[2];

void ps_save_motorDistance(void)
{
	ps_save(ps_motor_distance, totalMotorDistance,8);
  
}
void ps_load_motorDistance(void)
{
  uint8 len;
  len= ps_load(ps_motor_distance, totalMotorDistance,8);
  if((len==0)||(len==0xff))
  {
    memset(totalMotorDistance,0,8);
  	ps_save_motorDistance();
  }
    
}

void ps_reset_error(void)
{
  errorInfo.error_batteryVoltage =0;
  errorInfo.error_overCurrent=0;
  errorInfo.error_motorPhases=0;
  errorInfo.error_gyroRange=0;
  errorInfo.error_overTemperature=0;
  errorInfo.error_BLEDisconnect=0;
  errorInfo.error_type = Packet_Error_NoError;
  errorInfo.year  = 0;
  errorInfo.month = 0;
  errorInfo.day   = 0;
  errorInfo.hour  = 0;
  errorInfo.minute= 0;
  errorInfo.second= 0;
  ps_save_error();


}

void ps_save_batCali(void)
{
  ps_data[0]=batCali%256;
  ps_data[1]=(batCali/256)%256;
  ps_data[2]=(batCali/256/256)%256;
  ps_data[3]=(batCali/256/256/256)%256;
  ps_save(ps_battery_cali,ps_data,4);
}

void ps_load_batCali(void)
{
uint8 len;
  len= ps_load(ps_battery_cali, ps_data,4);
  if((len==0)||(len==0xff))
  {
    batCali = 300;
  	ps_save_batCali();
  }
  else
  {
  	batCali = ps_data[0]+ps_data[1]*256+ps_data[2]*256*256+ps_data[3]*256*256*256;
  }
}


void ps_load_error(void)
{
  uint8 len;
  len = ps_load(ps_error_info,packet_data.bytes,sizeof(errorInfo));
  if((len==0)||(len==0xff))
  {
  	ps_save_error();
  }
  else
  {
  	errorInfo = packet_data.errorInfo;
  }
    
}



void ps_save_error(void)
  
{
  packet_data.errorInfo = errorInfo;
  ps_save(ps_error_info,packet_data.bytes,sizeof(errorInfo));
  
}


void ps_load_est_dis(void)
{
  uint8 len;
  len = ps_load(ps_est_distance, ps_data,32);
  if((len==0)||(len==0xff))
  {
    est_dis_facter_saved =50;
    est_dis_facter = 50;
    ps_save_est_dis();
  }
  else
  {
    est_dis_facter_saved = ps_data[0];
    est_dis_facter =est_dis_facter_saved;
  }
}
void ps_save_est_dis(void)
{
	ps_data[0]=est_dis_facter_saved;
    ps_save(ps_est_distance,ps_data,1);
}


void ps_load_version(void)
{
 uint8 len;
  len = ps_load(ps_version, ps_data,32);
  if((len==0)||(len==0xff))
  {
    
  }
  else
  {
    versionInfo.pushTracker = CURRENT_PT_VERSION;
    versionInfo.smartDrive = ps_data[1];
    versionInfo.smartDriveBluetooth = ps_data[2];
  }
}
void ps_save_version(void)
{
    ps_data[0] =CURRENT_PT_VERSION;
    ps_data[1] =versionInfo.smartDrive;
    ps_data[2]=versionInfo.smartDriveBluetooth;
    ps_save(ps_version,ps_data,3);
}

void saveSettings(void)
{
  memset(ps_data, 0, sizeof(SDSettings));
  memcpy(ps_data, (void*)&SDSettings, sizeof(SDSettings));
  //ps_data[0] =  SDSettings.controlMode;
  //ps_data[1] =  SDSettings.units;
  //ps_data[2] =  (uint8)(SDSettings.acceleration*100);
  //ps_data[3] =  (uint8)(SDSettings.maxSpeed*100);
  //ps_data[4] =  (uint8)(SDSettings.tapSensitivity*100);
  ps_save(ps_setting, ps_data,sizeof(SDSettings));
  uints_convert();
}
void loadSettings(void)
{
uint8 len;
  len = ps_load(ps_setting, ps_data,32);
  if((len==sizeof(SDSettings)))
  {
    memcpy((void*)&SDSettings,ps_data,sizeof(SDSettings));
    //SDSettings.controlMode = (enum DU_controlMode)ps_data[0];
    //SDSettings.units = (enum Units)ps_data[1];
    //SDSettings.acceleration = (float) ps_data[2]/100.0f;
    //SDSettings.maxSpeed= (float)ps_data[3]/100.0f;
    //SDSettings.tapSensitivity = (float)ps_data[4]/100.0f;
  }
  else
  {

  }
  uints_convert();
}



void init_flash(void)
{
  uint8 len;
  len=ps_load(ps_bond ,ps_data,32);
  if((len==0)||(len==0xff))  // error or not exist, init the bond buff
  {
    ps_data[0] =  2; // app bond index start from 2
    ps_data[1] = 0xff;
    memset(&ps_data[2],222,7); // copy some number that is not 0-7 &ff
    ps_save(ps_bond,ps_data,9);
  }
  else
  {
   if(ps_data[1]==0xff)
   {
     SD_bonded=false;
   }
   else
   {
     SD_bonded=true;
   }
    if(ps_data[2]==222)
    {
      APP_bonded=false;
    }
    else
    {
      APP_bonded=true;
    }
  }

  len = ps_load(key_wb_data_count, ps_data,32);
  if((len==0)||(len==0xff))  // error or not exist, init the bond buff
  {
    wb_data_index = 0;
    wb_data_count=0;
    ps_data[0]=wb_data_count;
    ps_data[1]=wb_data_index;
    ps_save(key_wb_data_count,ps_data,2);
  }
}

void cleaningFlash(void)
{

  
  uint8 len;
  len = ps_load(ps_cleaning, ps_data,32);
   if((len==0)||(len==0xff))
   {
    erase_page = FIRST_USER_PAGE_NUMBER;
    while(erase_page < LAST_USER_PAGE_NUMBER) 
    {
      flash_erase(erase_page);
      erase_page++;
    }
    erase_page = FIRST_USER_PAGE_NUMBER;
      ps_data_temp[0]=0x00;
      ps_save(ps_cleaning,ps_data_temp,1);
   }
  else
  {if(ps_data[0]==0x01)
    {
      erase_page = FIRST_USER_PAGE_NUMBER;
      while(erase_page < LAST_USER_PAGE_NUMBER) 
      {
        flash_erase(erase_page);
        erase_page++;
      }
      erase_page = FIRST_USER_PAGE_NUMBER;
      ps_data_temp[0]=0x00;
      ps_save(ps_cleaning,ps_data_temp,1);
    }
  }
}

void saveMotorMode(uint8 m_mode)
{
	ps_save(ps_motorMode,&m_mode,1); // 0=normal 1=accelerate
}

void loadMotorMode(void)
{
  uint8 len;
  len = ps_load(ps_motorMode,ps_data,32);
   if((len==0)||(len==0xff)) // not saved, set to default
   {
    	motorMode=motorModeNormal;
      	saveMotorMode(motorMode);
   }
    else
    {
    	if(ps_data[0]==0)  // 0=normal 1=accelerate
        	motorMode=motorModeNormal;
        else
        	motorMode=motorModeAccel;
        
    }
}

void ps_save_currentDay_info(void)
{
 	packet_data.dailyInfo.year          = dailyInfo.year;
    packet_data.dailyInfo.month         = dailyInfo.month;
    packet_data.dailyInfo.day           = dailyInfo.day;
    packet_data.dailyInfo.pushesWith    = dailyInfo.pushesWith; 
    packet_data.dailyInfo.pushesWithout = dailyInfo.pushesWithout;
    packet_data.dailyInfo.coastWith     = dailyInfo.coastWith;
    packet_data.dailyInfo.coastWithout  = dailyInfo.coastWithout;
    packet_data.dailyInfo.distance      = dailyInfo.distance;
    packet_data.dailyInfo.speed         = dailyInfo.speed;
    packet_data.dailyInfo.ptBattery     = dailyInfo.ptBattery;
    packet_data.dailyInfo.sdBattery     = dailyInfo.sdBattery;
   	ps_save(ps_currentDay_info,packet_data.bytes,sizeof(packet_data.dailyInfo));
}

void ps_load_currentDay_info(void)
{
  	uint8 len;
	len = ps_load(ps_currentDay_info,packet_data.bytes,sizeof(packet_data.dailyInfo));
    if((len==0)||(len==0xff)) // not saved, set to default
    {
		dailyInfo_clear();
    }
    else
    {
      dailyInfo.year			=packet_data.dailyInfo.year;
      dailyInfo.month			=packet_data.dailyInfo.month;
      dailyInfo.day				=packet_data.dailyInfo.day;
      dailyInfo.pushesWith		=packet_data.dailyInfo.pushesWith; 
      dailyInfo.pushesWithout	=packet_data.dailyInfo.pushesWithout;
      dailyInfo.coastWith		=packet_data.dailyInfo.coastWith;
      dailyInfo.coastWithout	=packet_data.dailyInfo.coastWithout;
      dailyInfo.distance		=packet_data.dailyInfo.distance;
      dailyInfo.speed			=packet_data.dailyInfo.speed;
      dailyInfo.ptBattery 		=packet_data.dailyInfo.ptBattery;
      dailyInfo.sdBattery		=packet_data.dailyInfo.sdBattery;
    }

}

void ps_save_daily_info(void)
{
	ps_load(key_wb_data_count,ps_data,2);
  	wb_data_count =ps_data[0];
    wb_data_index=ps_data[1];
    packet_data.dailyInfo.year          = dailyInfo.year;
    packet_data.dailyInfo.month         = dailyInfo.month;
    packet_data.dailyInfo.day           = dailyInfo.day;
    packet_data.dailyInfo.pushesWith    = dailyInfo.pushesWith; 
    packet_data.dailyInfo.pushesWithout = dailyInfo.pushesWithout;
    packet_data.dailyInfo.coastWith     = dailyInfo.coastWith;
    packet_data.dailyInfo.coastWithout  = dailyInfo.coastWithout;
    packet_data.dailyInfo.distance      = dailyInfo.distance;
    packet_data.dailyInfo.speed         = dailyInfo.speed;
    packet_data.dailyInfo.ptBattery     = dailyInfo.ptBattery;
    packet_data.dailyInfo.sdBattery     = dailyInfo.sdBattery;
    

    ps_save(key_wb_data_offset+wb_data_index,packet_data.bytes,sizeof(packet_data.dailyInfo));
    wb_data_count=wb_data_count>=100? 100:wb_data_count+1;
    wb_data_index=(wb_data_index+1)%100;
    ps_data[0]=wb_data_count;
    ps_data[1]=wb_data_index;
    ps_save(key_wb_data_count,ps_data,2);
  //updated distance estimate factor
    if((dailyInfo.sdBattery>=5)&&(dailyInfo.distance>0.1f))
    {
    	est_dis_facter_current = (uint8)dailyInfo.distance*100/dailyInfo.sdBattery;
      est_dis_facter_current=Cap_est_dis_factor(est_dis_facter_current);
      est_dis_facter_saved = (uint8)((float)est_dis_facter_saved*0.6f) +(uint8)((float)est_dis_facter_current*0.4f);
      est_dis_facter_saved = Cap_est_dis_factor(est_dis_facter_saved);
      ps_save_est_dis();
      est_dis_facter = est_dis_facter_saved;
      
    }
  
  
    dailyInfo_clear();
}

void ps_save_time(void)
{
	read_rtc();
    packet_data.timeInfo.year       = currentTime.year;
    packet_data.timeInfo.month      = currentTime.month;
    packet_data.timeInfo.day        = currentTime.day;
    packet_data.timeInfo.hours      = currentTime.hour;
    packet_data.timeInfo.minutes    = currentTime.minute;
    packet_data.timeInfo.seconds    = currentTime.second;
    ps_save(ps_time, packet_data.bytes,sizeof(packet_data.timeInfo));
}

void ps_load_time(void)
{
  uint8 len;
  len = ps_load(ps_time,packet_data.bytes,sizeof(packet_data.timeInfo));
   if((len==0)||(len==0xff)) // not saved, set to default
   {
    
   }
    else
    {
      currentTime.year		= packet_data.timeInfo.year       ;
      currentTime.month		= packet_data.timeInfo.month;
      currentTime.day		= packet_data.timeInfo.day;
      currentTime.hour		= packet_data.timeInfo.hours;
      currentTime.minute	= packet_data.timeInfo.minutes;
      currentTime.second	= packet_data.timeInfo.seconds;
        
    }
}        