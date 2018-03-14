#include "globals.h"
#include "acc.h"
#include "motor.h"
#include "ble.h"
#include "leds.h"
#include "i2c.h"
#include "ioint.h"
#include "rtc.h"
#include <blestack/gatt.h>
#include <string.h>

const uint8 __code codeSpaceData[10240];

bool timeSettingFinished = false;
bool OTAing = false;
uint8 OTAProgress = 0;
uint32 OTAReceived = 0;

bool SD_bonded=false;
bool APP_bonded=false;

uint8 power_level[3];
uint8 motorMode=0;
int16 hold=0;
uint8 sysInitDone=0;
uint8 btn_left=0;
uint8 btn_right=0;
uint8 systemSleeping = 0;
uint64 errorID = 0;
uint8 totalMotorDistance[8]; 
float motorDistance=0.0f;
uint8 est_dis_facter_saved = 50;
uint8 est_dis_facter_current = 50;
uint8 est_dis_facter = 50;

uint16 flashTime = 0;
struct CurrentTime currentTime = {
  .displaySetting = TimeDisplay12,
  .year  = 2017,
  .month = 01,
  .day   = 15,
  .hour  = 14,
  .minute= 58,
  .second= 0
};

struct ErrorInfo errorInfo = {
	.year  = 0,
  	.month = 0,
  	.day   = 0,
  	.hour  = 0,
  	.minute= 0,
  	.second= 0,
    .error_type = Packet_Error_NoError,
    .error_batteryVoltage =0,
    .error_overCurrent=0,
    .error_motorPhases=0,
    .error_gyroRange=0,
    .error_overTemperature=0,
    .error_BLEDisconnect=0
};

struct VersionInfo versionInfo={
  .pushTracker = CURRENT_PT_VERSION,
  .smartDrive =0xff,
  .smartDriveBluetooth=0xff
};

struct acc_orientation gesture={
	.acc_lockout			=	acc_NO_lockout,
  	.acc_landscape_portrait	=	acc_PO_up,
  	.acc_back_front			=	acc_front
};

struct DailyInfo dailyInfo={

  .year=2017,
  .month=01,
  .day=15,
  .pushesWith=0,
  .pushesWithout=0,
  .coastWith=0,
  .coastWithout=0,
  .distance=0,
  .speed=0,
  .ptBattery=0,
  .sdBattery=0

};

struct SD_settings SDSettings={
  .controlMode 	    = DU_controlMode_Advanced,
  .units			= Units_English,
  .settingsFlags1   = 0,
  .padding			= 0,
  .tapSensitivity	= 1.0f,
  .acceleration	    = 0.30f,
  .maxSpeed		    = 0.7f
};
bool haveRespondedToButton = false;

uint8 appInitDone = 0;
//uint8 quad_mode = 1;
uint8 quad_mode_ready = 0;

uint8 plugged;
uint8 battery=0;
uint8 driveUnit_battery=0;
uint8 scan_timeout;
uint8 mode;
uint8 flick;
uint8 displayInitDone;
uint8 displayDone;
uint8 scrollDone;
uint8 renderDone;
uint8 double_tap;
uint8 tap;
int16 standby_time;
uint8 setting_mode = 0;
uint32 pairing_time=0;

uint32 coastTime_with_total=0;
uint32 coastTime_without_total=0;
uint32 system_time_push_without=0;
uint32 system_time_pushStart_with=0;
uint32 system_time_pushEnd_with=0;
uint32 system_time=0;
uint16 coastingWithout_count=0;
uint32 journeyCoastTime=0;
uint16 journeyPushes=0;
uint8  journeyDistance=0;
uint8  journeySpeed=0;

uint8 bonding_device;

uint8 connection_lost_du;
uint8 found_app;
uint8 connection_lost_app;
uint8 found_du;
uint8 connection_lost_dg;
uint8 found_dg;
uint16 dram_counter;
uint32 state_time;
uint32 rtc_time = 0;
uint32 adc_time = 0;
uint32 adc_stable_time = 0;
uint32 quad_mode_time = 0;
bool adc_stable = false;
uint32 info_update_time = 0;
uint32 pre_info_update_time = 0;
int32 scanning_state_time;
uint8 package_id=0;
uint8 data_temp[20];
uint8 motor_speed;
uint8 setting_exit=0;
uint8 setting_next=0;
uint8 setting_done = 0;
uint8 setting_timeout = 0;

uint8 sdOptions_next=0;

uint8 pairing_start=0;
uint8 pairing_phone_failed=0;
uint8 pairing_du_failed=0;
uint8 pairing_done=0;
uint8 pairing_phone=0;
uint8 pairing_mx2plus=0;
uint8 pairing_canceled=0;
enum menu_items menu_select=menu_settingTime;
enum sdOptions_items sdOptions_select=sdOptions_setMaxSpeed;
uint8 scrollingDone=0;
union Data packet_data;
uint8 btn_left_debounce=0;
uint8 btn_right_debounce=0;


uint8 ble_buff[ble_buff_size];
uint8 ble_buff_write_index=0;
uint8 ble_buff_read_index=0;
uint8 ble_buff_freespace=ble_buff_size;
uint8 ble_buff_dataPack_count=0;
uint16 btn_right_hold_time=0;
uint16 btn_left_hold_time=0;
uint16 btn_hold_time_enterState = 0;
const uint16 btn_hold_time_chaneState = 6;
uint8 btn_left_hold=0;
uint8 btn_left_pressed=0;
uint8 virtual_btn_left_pressed=0;
uint8 btn_right_hold=0;
uint8 btn_right_pressed=0;
uint16 pushes=0;
uint16 pushesWith=0;
uint16 pushesWithout=0;
uint8 displayTimeout=0;
float motorSpeed=0.0f;
//float motorDistance=0.0f;
float dailyDistance=0.0f;
float coastTime=0.0f;

uint8 error_count_BatteryVoltage=0;
uint8 error_count_OverCurrent=0;
uint8 error_count_MotorPhases=0;
uint8 error_count_GyroRange=0;
uint8 error_count_OTAUnavailable=0;
uint8 error_count_OverTemperature=0;
uint8 error_count_BLEDisconnect=0;


const float acceleration_max_setting = 1.05f;
const float acceleration_min_setting = 0.1f;
//float acceleration = 0.5f;

const float maxSpeed_max_setting = 1.05f;
const float maxSpeed_min_setting = 0.1f;
//float maxSpeed = 1.0f;

uint8 push_debounce = 0;

const float tapSensitivity_max_setting = 1.05f;
const float tapSensitivity_min_setting = 0.1f;
//float tapSensitivity = 1.0f;

//enum Units          units        = Units_English;
//enum DU_controlMode controlMode  = DU_controlMode_Advanced;
enum Journey_State  journeyState = Journey_State_Stopped;


const task_handler tasks[task_id_max] = {
  ll_update,
  connection_update,
  smp_update,
  gap_update,
  timer_update,
  Vmotor_handler,
  BleSend_handler,
  AccInt_handler,
  Delay_handler,
  Led_handler

};

enum sys_status sysState = system_sleep;
enum powerAssist_status powerAssistState=powerAssist_off;
enum App_status AppState = App_off;
enum SD_OnOff SD_status=SD_off;
enum AppConnection AppConnectionStatus = AppRadioOff;

enum DuConnection DuConnectionStatus   = DuRadioOff;
float uints_convertion =1.0f;
void uints_convert(void)
{
	if(SDSettings.units == Units_English)
    	uints_convertion = 1.0f;
  	else
    	uints_convertion = 1.609f;
}


void clear_btn_state(void)
{
  btn_left_pressed=0;
  btn_right_pressed=0;
  btn_left_hold=0;
  btn_right_hold=0;


}

uint8 Cap_est_dis_factor(uint8 factor)
{
	if(factor<20)
      factor =20;
  if(factor>150)
    factor =150;
  
  return factor;

}

void Led_handler(uint8 context, uint8 event)
{
  task_timed_cancel_masked((enum task_id)task_id_Led_handler,0,0,0,0); // remove all
  switch (event)
  {
    case Led_red_flashing:
      set_led(blue,led_off);
      set_led(green,led_off);
      if(check_led(red)==led_on) // led is on
      {
        set_led(red,led_off);
        task_send_timed((enum task_id)task_id_Led_handler, red, Led_red_flashing,(3277*7));  
      }
      else
      {
        set_led(red,led_on);
        task_send_timed((enum task_id)task_id_Led_handler, red, Led_red_flashing,(3277*3));  
      }
      break;
    case Led_blue_flashing:
      set_led(red,led_off);
      set_led(green,led_off);
      if(check_led(blue)==led_on) // led is on
      {
        set_led(blue,led_off);
        task_send_timed((enum task_id)task_id_Led_handler, blue, Led_blue_flashing,(3277*7));  
      }
      else
      {
        set_led(blue,led_on);
        task_send_timed((enum task_id)task_id_Led_handler, blue, Led_blue_flashing,(3277*3));  
      }
      break;
    case Led_turnOn:
      set_RGB_off(led_off);
      set_led((enum led_color)context,led_on);
      break;
    case Led_turnOff:
      set_RGB_off(led_off);
      set_led((enum led_color)context,led_off);
      set_led_event();
      break;
    case Led_red_Short_on:

      set_led(blue,led_off);
      set_led(green,led_off);
      set_led(red,led_on);
      task_send_timed((enum task_id)task_id_Led_handler, red, Led_turnOff,(3277*5));

      break;
    case Led_red_Long_on:
      set_led(blue,led_off);
      set_led(green,led_off);
      set_led(red,led_on);
      task_send_timed((enum task_id)task_id_Led_handler, context, Led_turnOff,(3276*10));
      break;
  }

}
void set_led_event(void)
{
  if(SD_status==SD_on)
  {
    if((connected&connection_du))

    {
      if(motorStatus==motor_off)
        task_send_msg((enum task_id)task_id_Led_handler, blue, Led_blue_flashing);
      else
        task_send_msg((enum task_id)task_id_Led_handler, blue, Led_turnOn);

    }
    else
    {
      task_send_msg((enum task_id)task_id_Led_handler, red, Led_red_flashing);

    }
  }
  else
  {
    task_timed_cancel_masked((enum task_id)task_id_Led_handler,0,0,0,0); // remove all
    set_RGB_off(led_off);
  }
}


void Vmotor_handler(uint8 context, uint8 event)
{
  switch(event)
  {
    case vibration_once:
      switch(context)
      {
        case first_on:
          set_motor(motor_on);
          VMotorStatus = motor_on;
          task_send_timed((enum task_id)task_id_Vmotor_handler, first_off, vibration_once, (3277*2)); // turn off after 0.3s
          break;
        case first_off:
          set_motor(motor_off);
          VMotorStatus = motor_off;
          break;
      }
      break;

    case vibration_twice:
      switch(context)
      {
        case first_on:
          set_motor(motor_on);
          VMotorStatus = motor_on;
          task_send_timed((enum task_id)task_id_Vmotor_handler, first_off, vibration_twice, (3277*2)); // turn off after 0.3s
          break;
        case first_off:
          set_motor(motor_off);
          task_send_timed((enum task_id)task_id_Vmotor_handler, second_on, vibration_twice, (3277*3)); // turn on after 0.7s
          break;
        case second_on:
          set_motor(motor_on);
          task_send_timed((enum task_id)task_id_Vmotor_handler, second_off, vibration_twice, (3277*2)); // turn off after 0.3s
          break;
        case second_off:
          set_motor(motor_off);
          VMotorStatus = motor_off;
          break;
      }
      break;

  }
}

void get_wb_data_pack(uint8 *data, uint8 len)
{
  static bool updatedMotorDistance = true;
  uint8 datapack_type;
  uint8 datapack_sub_type;
  if ((len>=2)&&(len<=18)) // min size
  {
    datapack_type= data[0];
    datapack_sub_type=data[1];
    if(len>2)
      memcpy(packet_data.bytes,&data[2],len-2);
  }
  switch (datapack_type)
  {
    case Packet_Type_None:
      break;
    case Packet_Type_Data:
      switch(datapack_sub_type)
      {
        case Packet_Data_MotorDistance:
          memcpy(totalMotorDistance,packet_data.bytes,8);
          ps_save_motorDistance();
          break;
        case Packet_Data_Speed:
          motorSpeed = packet_data.motorSpeed;
          //motorStatus=motor_on;
          break;
        case Packet_Data_CoastTime:
          break;
        case Packet_Data_Pushes:
          break;
        case Packet_Data_MotorState:
          motorStatus=packet_data.motorState;
          break;
        case Packet_Data_BatteryLvl:
          driveUnit_battery = packet_data.batteryLevel;
          break;
        case Packet_Data_DeviceInfo:
 
          if(packet_data.deviceInfo.devices ==SmartDriveBluetooth)
            versionInfo.smartDriveBluetooth = packet_data.deviceInfo.version;
          ps_save_version();
          break;
        case Packet_Data_MotorInfo:
          if(driveUnit_battery>packet_data.motorInfo.batteryLevel)
          {
            dailyInfo.sdBattery +=( driveUnit_battery - packet_data.motorInfo.batteryLevel);
          }
          driveUnit_battery = packet_data.motorInfo.batteryLevel;
          versionInfo.smartDrive = packet_data.motorInfo.SDversion;
          motorStatus = packet_data.motorInfo.motorState;
          motorSpeed = packet_data.motorInfo.speed;
          if (updatedMotorDistance && motorStatus == motor_on){

            updatedMotorDistance = false;

            system_time_pushStart_with = get_systemTime();

          }
          if (!updatedMotorDistance && motorStatus == motor_off) {
            motorDistance += packet_data.motorInfo.distance;
            updatedMotorDistance = true;
            system_time_pushEnd_with = get_systemTime();
            if((system_time_pushEnd_with>system_time_pushStart_with)&&(system_time_pushStart_with!=0))
            {
              coastTime_with_total+=(system_time_pushEnd_with-system_time_pushStart_with);
              dailyInfo.pushesWith++;
              pushes++;
              dailyInfo.distance = (uint8)(motorDistance*10);
              dailyInfo.speed = (uint8) (motorDistance *10.0f/((float)(coastTime_with_total/360000.0f)));
              dailyInfo.coastWith= (uint16)(coastTime_with_total/dailyInfo.pushesWith);
              
              if((dailyInfo.sdBattery>=5)&&(dailyInfo.distance>0.1f))
              {
                est_dis_facter_current = (uint8)dailyInfo.distance*100/dailyInfo.sdBattery;
                est_dis_facter_current=Cap_est_dis_factor(est_dis_facter_current);
                est_dis_facter = (uint8)((float)est_dis_facter_saved*0.6f) +(uint8)((float)est_dis_facter_current*0.4f);
                est_dis_facter = Cap_est_dis_factor(est_dis_facter);
              }
              else
                est_dis_facter = est_dis_facter_saved;
              if(journeyState == Journey_State_Started)
              {
                journeyPushes++;
                journeyCoastTime+=(system_time_pushEnd_with-system_time_pushStart_with);
                journeyDistance += (uint8)(packet_data.motorInfo.distance*10);
                journeySpeed	=(uint8) (journeyDistance /((float)(journeyCoastTime/360000.0f)));
              }


            }
          }
          break;
      }
      break;
    case Packet_Type_Command:
      switch(datapack_sub_type)
      {
        case Packet_Command_SetAcceleration:
          break;
        case Packet_Command_SetMaxSpeed:
          break;
        case Packet_Command_Tap:
          break;
        case Packet_Command_DoubleTap:
          break;
        case Packet_Command_SetControlMode:
          break;
        case Packet_Command_SetSettings:
          SDSettings.controlMode    = packet_data.settings.controlMode;
          SDSettings.units          = packet_data.settings.units;
          SDSettings.tapSensitivity = packet_data.settings.tapSensitivity;
          SDSettings.acceleration   = packet_data.settings.acceleration;
          SDSettings.maxSpeed       = packet_data.settings.maxSpeed;
          SDSettings.settingsFlags1 = packet_data.settings.settingsFlags1;
          saveSettings();
          acc_set_tap(SDSettings.tapSensitivity);
           if(connected&connection_du)
           {
              wb_data[0]=Packet_Type_Command;
              wb_data[1]=Packet_Command_SetSettings;
              memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.settings));
              gatt_write_attribute(connection_handle_du,att_handle_data,wb_data,sizeof(packet_data.settings)+2);
           }
          
          break;
        case Packet_Command_TurnOffMotor:
          break;
        case Packet_Command_StartJourney:
          if(journeyState != Journey_State_Paused)
          {
            journeyPushes=0;
            journeyCoastTime=0;
            journeyDistance=0;
            journeySpeed	=0;
          }
          journeyState = Journey_State_Started;
          break;
        case Packet_Command_StopJourney:
          journeyState = Journey_State_Stopped;
          packet_data.journeyInfo.pushes	=journeyPushes;
          packet_data.journeyInfo.distance	=journeyDistance;
          packet_data.journeyInfo.speed		=journeySpeed;
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_JourneyInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.journeyInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.journeyInfo)+2);
          journeyPushes=0;
          journeyCoastTime=0;
          journeyDistance=0;
          journeySpeed	=0;
          break;
        case Packet_Command_PauseJourney:
          journeyState = Journey_State_Paused;
          break;
        case Packet_Command_SetTime:
          currentTime.second = packet_data.timeInfo.seconds;
          currentTime.minute = packet_data.timeInfo.minutes;
          currentTime.hour = packet_data.timeInfo.hours;
          currentTime.day = packet_data.timeInfo.day;
          currentTime.month = packet_data.timeInfo.month;
          currentTime.year = packet_data.timeInfo.year;
          set_rtc();
          reset_rtc = 1;
          break;
        case Packet_Command_StartOTA:
          switch(packet_data.OTADevice)
          {
            case Packet_OTA_PushTracker:
              OTAing = true;
              dfu_pointer = FIRST_USER_PAGE_ADDRESS;
              ps_data_temp[0]=0x01;
              ps_save(ps_cleaning,ps_data_temp,1);
              wb_data[0]=Packet_Type_Command;
              wb_data[1]=Packet_Command_OTAReady;
              packet_data.OTADevice=Packet_OTA_PushTracker;
              wb_data[2]=packet_data.OTADevice;
              gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.OTADevice)+2);
              break;
            case   Packet_OTA_SmartDrive:
			  gatt_write_attribute(connection_handle_du,att_handle_data,data,len);
              break;
            case Packet_OTA_SmartDriveBluetooth:
              wb_data[0]=CMD_DU_BLE_OTA_START;
              gatt_write_attribute(connection_handle_du,att_handle_data_control_du,wb_data,1);

              break;
          }
          break;
        case Packet_Command_StopOTA:
          switch(packet_data.OTADevice)
          {
            case Packet_OTA_PushTracker:
			  OTAing=false;
              hw_reset(1);
              break;
            case   Packet_OTA_SmartDrive:
              gatt_write_attribute(connection_handle_du,att_handle_data,data,len);
              break;
            case Packet_OTA_SmartDriveBluetooth:
              wb_data[0]=CMD_DU_DFU_RESET;
              gatt_write_attribute(connection_handle_du,att_handle_data_control_du,wb_data,1);
              break;
          }
          break;
        case Packet_Command_OTAReady:
          wb_data[0]=Packet_Type_Command;
          wb_data[1]=Packet_Command_OTAReady;
          //packet_data.OTADevice=Packet_OTA_PushTracker;
          //wb_data[2]=packet_data.OTADevice;
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,2);
          switch(packet_data.OTADevice)
          {
            case Packet_OTA_PushTracker:
              break;
            case   Packet_OTA_SmartDrive:
              break;
            case Packet_OTA_SmartDriveBluetooth:
              break;
          }
          break;
        case Packet_Command_Wake:
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_Ready;
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,2);
          break;
      }
      break;
    case Packet_Type_Error:
      if(packet_data.errorID != errorID)
      {
        packet_data.errorID = errorID;
        errorInfo.error_type = (enum Packet_Error)datapack_sub_type;
        switch (datapack_sub_type) {
          case Packet_Error_BatteryVoltage:
            errorInfo.error_batteryVoltage ++;
            break;
          case Packet_Error_OverCurrent:
            errorInfo.error_overCurrent++;
            break;
          case Packet_Error_MotorPhases:
            errorInfo.error_motorPhases++;
            break;
          case Packet_Error_GyroRange:
            errorInfo.error_gyroRange++;
            break;
          case Packet_Error_OTAUnavailable:
            break;
          case Packet_Error_OverTemperature:
            errorInfo.error_overTemperature++;
            break;
          default:
            break;
        }
        errorInfo.year	=	currentTime.year;
        errorInfo.month	=	currentTime.month;
        errorInfo.day		=	currentTime.day;
        errorInfo.hour	=	currentTime.hour;
        errorInfo.minute	=	currentTime.minute;
        errorInfo.second	=	currentTime.second;
        if((connected&connection_app) && (appInitDone))
        {
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_ErrorInfo;
          packet_data.errorInfo = errorInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.errorInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.errorInfo)+2);
          ps_reset_error();
        }
        else
        {
          ps_save_error();
        }
      }
      break;
    case Packet_Type_OTA:
      switch(datapack_sub_type)
      {
        case Packet_OTA_PushTracker:
          OTAing = true;
          if((dfu_pointer+len-2) <=(FIRST_USER_PAGE_ADDRESS+(uint32)128*(uint32)1024) )
          {
            OTAReceived +=(len-2);
            OTAProgress = (uint8)(OTAReceived / ((uint32)1209));  // OTA size 120832 bytes
            flash_write((dfu_pointer >> 2), packet_data.bytes, len-2);
            dfu_pointer += (len-2);
            
          }
          break;
        case   Packet_OTA_SmartDrive:
          gatt_write_attribute(connection_handle_du,att_handle_data,data,len);
          break;
        case Packet_OTA_SmartDriveBluetooth:
          gatt_write_attribute(connection_handle_du,att_handle_motor,data,len);
          break;
      }
      break;
  }

}

uint16 index(uint16 n)
{
  return (n%ble_buff_size);
}
void gatt_write_attribute_prepare(uint8	connection, uint16 handle,const uint8 *data,uint8 len)
{
  if(ble_buff_freespace>=(len+4))
  {
    ble_buff[ble_buff_write_index]=len+4;
    ble_buff_write_index=index(ble_buff_write_index+1);
    ble_buff[ble_buff_write_index]=connection;
    ble_buff_write_index=index(ble_buff_write_index+1);
    ble_buff[ble_buff_write_index]=handle/256;
    ble_buff_write_index=index(ble_buff_write_index+1);
    ble_buff[ble_buff_write_index]=handle%256;
    ble_buff_write_index=index(ble_buff_write_index+1);
    for (int i=0;i<len;i++)
    {
      ble_buff[ble_buff_write_index]=data[i];
      ble_buff_write_index=index(ble_buff_write_index+1);
    }
    ble_buff_freespace=ble_buff_freespace-len-4;
    ble_buff_dataPack_count++;
  }


}
void BleSend_handler(uint8 context, uint8 event)
{
  uint8 len;
  uint8 connection;
  uint16 handle;
  uint8 ble_buff_temp[20];

  if(ble_buff_dataPack_count)
  {
    len=ble_buff[ble_buff_read_index]-4;
    ble_buff_read_index=index(ble_buff_read_index+1);
    connection=ble_buff[ble_buff_read_index];
    ble_buff_read_index=index(ble_buff_read_index+1);
    handle=ble_buff[ble_buff_read_index]*256;
    ble_buff_read_index=index(ble_buff_read_index+1);
    handle=handle+ble_buff[ble_buff_read_index];
    ble_buff_read_index=index(ble_buff_read_index+1);
    for (int i=0;i<len;i++)
    {
      ble_buff_temp[i]=ble_buff[ble_buff_read_index];
      ble_buff_read_index=index(ble_buff_read_index+1);
    }
    setLookingForService_state(STATE_SENDING_DATA);
    gatt_write_attribute(connection, handle,ble_buff_temp,len);
    ble_buff_freespace=ble_buff_freespace+len+4;
    ble_buff_dataPack_count--;
  }
}
void AccInt_handler(uint8 context, uint8 event)
{
  switch (event)
  {
    case acc_tap: // acc int 1 = tap
      hardware_i2c_read(acc_addr,acc_pulse_src_addr,1,acc_data);
      if(sysInitDone && !systemSleeping && ((VMotorStatus == motor_off) ||( motorStatus == motor_on)))
      {
         
        tap=1;
      
        if((acc_data[0]&4)&&(acc_data[0]&8)&&quad_mode_ready&&(quad_mode))
        {
        	virtual_btn_left_pressed=1;
          	quad_mode_time = 0;
        
        }
        
        if(((acc_data[0]& 4)==0) ||( motorStatus == motor_on))
        {

        

          if(SD_status==SD_on)
          {
            task_send_msg((enum task_id)task_id_Led_handler, red, Led_red_Short_on);
          }
          if(connected&connection_du)
          {
            if( motorStatus == motor_on)
            {
              vibrate_motor(vibration_once);
            }
            if(LookingForService_state==STATE_STANDBY)
            {
              data_temp[0]=Packet_Type_Command;
              data_temp[1]=Packet_Command_Tap;
              setLookingForService_state(STATE_SENDING_DATA);
              gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
            }
            else
            {
              //        gatt_write_attribute_prepare(connection_handle_du, att_handle_data,data_temp,2);
            }
          }
        }
      }
      break;
    case acc_push:
      
      hardware_i2c_read(acc_addr,acc_int_source,1,acc_data);

      if(acc_data[0] &(1<<5)) // push
      {
        hardware_i2c_read(acc_addr,0x1E,1,&acc_data[1]);
      	 if(sysInitDone && (systemSleeping==0)&&(push_debounce==0)&&( motorStatus == motor_off))
         {
            push_debounce = 1;
            dailyInfo.pushesWithout++;
            pushes++;
            if(journeyState == Journey_State_Started)
            {
                 journeyPushes++;
            }
            system_time = get_systemTime();
            if((system_time - system_time_push_without>40)&&(system_time - system_time_push_without<400)) // max 4s coasting time without SD
            {
              coastingWithout_count++;
              coastTime_without_total += system_time - system_time_push_without;
              dailyInfo.coastWithout =  (uint16)(coastTime_without_total/coastingWithout_count);
            }
            system_time_push_without = system_time;

            task_send_timed((enum task_id)task_id_AccInt_handler,0,acc_push_debounce, (3277*4));
         }
      }
      
      if(acc_data[0] &(1<<4))// Landscape / portrait
      {
      	 hardware_i2c_read(acc_addr,acc_PL_STATUS,1,acc_data);
        if(acc_data[0] & (1<<6))  // LO
          gesture.acc_lockout	=	acc_lockout;        
        else
          gesture.acc_lockout	=	acc_NO_lockout;        
        if(acc_data[0] & (1<<0))  // BAFRO
          gesture.acc_back_front	=	acc_back;        
        else
          gesture.acc_back_front	=	acc_front;        
        switch((acc_data[0]&(3<<1))>>1)
        {
          case 0:
            gesture.acc_landscape_portrait	=	acc_PO_up;
            break;
          case 1:
            gesture.acc_landscape_portrait	=	acc_PO_down;
            break;
          case 2:
            gesture.acc_landscape_portrait	=	acc_LA_right;
            break;
          case 3:
            gesture.acc_landscape_portrait	=	acc_LA_left;
            break;
        }
        
        if((gesture.acc_lockout == acc_lockout)&&(gesture.acc_back_front==acc_front)&&(quad_mode)&&(setting_mode==0))
          {set_led(blue2,led_on);
           quad_mode_time = 0;
           quad_mode_ready = 1;
          }
        else if((btn_left_hold_time==0)&&(btn_right_hold_time==0))
        {
          set_led(blue2,led_off);
          quad_mode_ready = 0;
        }
        
        
      }
    
      break;
    case rtc_daily: // rtc int // hourly now
      if(systemSleeping)
      {
        enable_acc(acc_on);
        enable_i2c(i2c_on);
        
      }
      clear_rtc_int();
      read_rtc();
      check_dates();
      set_rtc_alarm();
      rtc_time=0;
      if(systemSleeping)
      {
        enable_i2c(i2c_off);
        enable_acc(acc_off);
      }
      break;
    case acc_push_debounce:
      push_debounce = 0;
      break;
    default:
      break;
  }
}
void check_dates(void)   // if dates changed, save daily info
{
  if((dailyInfo.year != currentTime.year)||(dailyInfo.month!=currentTime.month)||(dailyInfo.day!=currentTime.day))
  {
    ps_save_daily_info();
    dailyInfo_clear();
  }
  else
  {

  }
  dailyInfo.year			=currentTime.year;
  dailyInfo.month			=currentTime.month;
  dailyInfo.day				=currentTime.day;
  ps_save_currentDay_info();
  ps_save_time();   
}

void Delay_handler(uint8 context, uint8 event)
{
  switch(event)
  {
    case BtnIntEvent_Left:

      switch (context)
      {
        case btn_press:
          if ((P1 & BTN1) == 0) // button hold
          {

            set_led(blue2,led_on);
            btn_left_hold_time ++;	
            if(btn_left_hold_time==15  )   // 3s)
            {	
              btn_left_hold=1;
              btn_left_pressed=0;
            }
            task_send_timed((enum task_id)task_id_Delay_handler, btn_press, BtnIntEvent_Left, (3277)); // delay 0.1s
          }
          else // button release
          {

            set_led(blue2,led_off);
            if(btn_left_hold_time == 0)
            {
                btn_left_hold=0;
                btn_left_pressed=0;
                btn_left_debounce =0;
            }
            else
            {   
              if(btn_left_hold_time<15  )   // 3s)
              {
                btn_left_hold=0;
                btn_left_pressed=1;
              }
              btn_left_hold_time = 0;
              task_send_timed((enum task_id)task_id_Delay_handler, btn_debounce, BtnIntEvent_Left, (3277*3)); // delay 0.1s
            }

          }
          break;
        case btn_debounce:
          btn_left_debounce=0;
          break;
      }
      break;
    case BtnIntEvent_Right:
      switch (context) {
        case btn_press:
          if ((P1 & BTN2) == 0) // button hold
          {
            set_led(blue2,led_on);
            btn_right_hold_time ++;	
            if(btn_right_hold_time==15  )   // 3s)
            {	
              btn_right_hold=1;
              btn_right_pressed=0;
            }
            task_send_timed((enum task_id)task_id_Delay_handler, btn_press, BtnIntEvent_Right, (3277)); // delay 0.1s
          }
          else // button release
          {
            set_led(blue2,led_off);
            if(btn_right_hold_time==0)
            {
              btn_right_hold=0;
              btn_right_pressed=0;
              btn_right_debounce=0;
            }
            else
            {
              if(btn_right_hold_time<15  )   // 3s)
              {
                btn_right_hold=0;
                btn_right_pressed=1;
              }
              btn_right_hold_time = 0;
              task_send_timed((enum task_id)task_id_Delay_handler, btn_debounce, BtnIntEvent_Right, (3277*1)); // delay 0.1s
            }
          }
          break;
        case btn_debounce:
          btn_right_debounce = 0;
          break;
      }
      break;
    case AppScanningTimeout:
      scanningApp_stop();
      if(pairing_phone)
      {
        pairing_phone_failed=1;
      }
      AppState=App_off;
      if(SD_status==SD_off)
      {
        ble_radio_state=Radio_off;
      }
      break;
    case DuScanningTimeout:
      scanningDu_stop();
      if(pairing_mx2plus)
      {
        pairing_du_failed=1;
      }
      SD_status=SD_off;
      set_led_event();
      if(AppState==App_off)
      {
        ble_radio_state=Radio_off;
      }
      break;
  }

}

void delay_ms(uint32 count)
{
  int32 countMs  = count * 4000;//8000;
  while (countMs--);
}

void dailyInfo_clear()
{
  pushes=0;
  dailyInfo.pushesWith=0;
  dailyInfo.pushesWithout=0;
  dailyInfo.coastWith=0;
  dailyInfo.coastWithout=0;
  dailyInfo.distance=0;
  dailyInfo.speed=0;
  dailyInfo.ptBattery=0;
  dailyInfo.sdBattery=0;
  coastTime_with_total=0;
  coastTime_without_total=0;
  system_time_push_without=0;
  system_time_pushStart_with=0;
  system_time_pushEnd_with=0;
  system_time=0;
  motorDistance = 0;
  coastingWithout_count=0;
  //driveUnit_battery=0;
}
void check_rtc()
{
	if(rtc_time>3600000L)
    {
      task_send_msg((enum task_id)task_id_AccInt_handler,0,rtc_daily);
    	
    }

}