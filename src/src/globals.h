#ifndef GLOBALS_INCLUDE_GUARD_
#define GLOBALS_INCLUDE_GUARD_

#ifndef GLOBALS_H
#define GLOBALS_H
#include <blestack/hw.h>
#include <blestack/task.h>
#include <blestack/config.h>
#include <blestack/watchdog.h>
#include "motor.h"

#include <stdbool.h> // for bool, true, false
#include <stdint.h> // for uintX_t and intX_t

#define CURRENT_PT_VERSION  0x13

#define vibration_once 1
#define vibration_twice 2
#define first_on 1
#define first_off 2
#define second_on 3
#define second_off 4
#define TICKS_TO_MS(X) ((X*1000)/32768)
#define NEXT_SETTING_BTN btn_right_pressed
#define SETTING_SELECT_BTN 	btn_left_pressed
#define SETTING_UNSELECT_BTN 	btn_left_pressed
#define SETTING_CHANGE_BTN 	btn_right_pressed
#define SETTING_CHANGE_HOLD btn_right_hold
#define SETTING_CHANGE_HOLD_TIME btn_right_hold_time
#define SETTING_ENTER_BTN 	(btn_right_hold_time>15)||((btn_left_pressed||virtual_btn_left_pressed)&&(!SD_bonded))||(btn_right_pressed&&(!APP_bonded))
#define quad_mode (SDSettings.settingsFlags1 & (1 << SmartDrive_SettingsFlag_EZMODE))



#define FIRST_USER_PAGE_NUMBER  (config.user_data_start_page)
#define LAST_USER_PAGE_NUMBER   ((config.user_data_start_page) + config.user_flash_pages) // user space start + size of the user space
#define FIRST_USER_PAGE_ADDRESS ((config.user_data_start_page)*2048L) // user space start * 2KB

//extern uint8 quad_mode;
extern uint8 quad_mode_ready;
extern const uint8 __code codeSpaceData[10240];

extern bool timeSettingFinished;
extern bool OTAing;
extern uint8 OTAProgress;
extern uint32 OTAReceived;

extern bool SD_bonded;
extern bool APP_bonded;

extern uint8 systemSleeping;
extern bool haveRespondedToButton;
extern uint16 flashTime;

extern uint8 appInitDone;

extern uint8 power_level[3];
extern uint8 motorMode;
extern int16 hold;
extern uint8 sysInitDone;
extern uint8 btn_left;
extern uint8 btn_right;

extern uint8 plugged;
extern uint8 battery;
extern uint8 driveUnit_battery;
extern uint8 scan_timeout;
extern uint8 mode;
extern uint8 flick;
extern uint8 displayInitDone;
extern uint8 displayDone;
extern uint8 scrollDone;
extern uint8 renderDone;
extern uint8 double_tap;
extern uint8 tap;
extern uint64 errorID;
extern uint8 totalMotorDistance[8]; 
extern float motorDistance;

extern int16 standby_time;
extern uint8 btn_left_debounce;
extern uint8 btn_right_debounce;
extern uint8 setting_mode;


extern uint8 bonding_device;

extern uint8 connection_lost_du;
extern uint8 found_app;
extern uint8 connection_lost_app;
extern uint8 found_du;
extern uint8 connection_lost_dg;
extern uint8 found_dg;

extern uint32 state_time;
extern uint32 rtc_time;
extern uint32 adc_time;
extern uint32 adc_stable_time;
extern uint32 quad_mode_time;
extern bool adc_stable;
extern uint32 batCali;
extern uint32 info_update_time;
extern uint32 pre_info_update_time;
extern uint16 dram_counter;

extern int32 scanning_state_time;
extern uint8 package_id;
extern uint8 data_temp[20];
extern uint8 motor_speed;
extern uint8 setting_done;
extern uint8 setting_timeout;
extern uint8 setting_exit;
extern uint8 setting_next;
extern uint8 sdOptions_next;

extern uint8 pairing_start;
extern uint8 pairing_phone_failed;
extern uint8 pairing_du_failed;
extern uint8 pairing_done;
extern uint8 pairing_phone;
extern uint8 pairing_mx2plus;
extern uint8 pairing_canceled;
extern uint8 scrollingDone;

#define ble_buff_size 200
extern uint8 ble_buff[ble_buff_size];
extern uint8 ble_buff_write_index;
extern uint8 ble_buff_read_index;
extern uint8 ble_buff_freespace;
extern uint8 ble_buff_dataPack_count;

extern uint8 btn_left_hold;
extern uint8 btn_left_pressed;
extern uint8 virtual_btn_left_pressed;
extern uint8 btn_right_hold;
extern uint8 btn_right_pressed;
extern uint16 pushes;
extern uint16 pushesWith;
extern uint16 pushesWithout;
extern uint8 displayTimeout;
extern float motorSpeed;
//extern float motorDistance;
extern float dailyDistance;
extern float coastTime;

//extern float acceleration;
extern const float acceleration_max_setting;
extern const float acceleration_min_setting;

//extern float maxSpeed;
extern const float maxSpeed_max_setting;
extern const float maxSpeed_min_setting;
extern uint8 push_debounce;

//extern float tapSensitivity;
extern const float tapSensitivity_max_setting;
extern const float tapSensitivity_min_setting;

extern uint32 coastTime_with_total;
extern uint32 coastTime_without_total;
extern uint32 system_time_push_without;
extern uint32 system_time_pushStart_with;
extern uint32 system_time_pushEnd_with;
extern uint32 system_time;
extern uint16 coastingWithout_count;
extern uint32 journeyCoastTime;
extern uint16 journeyPushes;
extern uint8  journeyDistance;
extern uint8  journeySpeed;
extern uint32 pairing_time;

extern uint8 error_count_BatteryVoltage;
extern uint8 error_count_OverCurrent;
extern uint8 error_count_MotorPhases;
extern uint8 error_count_GyroRange;
extern uint8 error_count_OTAUnavailable;
extern uint8 error_count_OverTemperature;
extern uint8 error_count_BLEDisconnect;

extern uint8 est_dis_facter_saved;
extern uint8 est_dis_facter_current ;
extern uint8 est_dis_facter ;


extern float uints_convertion;

enum sys_status
{
  system_on = 0,
  system_sleep=1
};
extern enum sys_status sysState;

enum menu_items
{
  menu_setSmartDriveOptions,
  menu_setAcceleration,
  menu_setMaxSpeed,
  menu_settingTime,
  menu_pairPhone,
  menu_pairMx2plus,
  menu_setUnits,
  menu_DeviceInfo,
  menu_exit
};
extern enum menu_items menu_select;

enum sdOptions_items
{
  sdOptions_setMaxSpeed,
  sdOptions_setAcceleration,
  sdOptions_setTapSensitivity,
  sdOptions_setControlMode,
  sdOptions_back
};
extern enum sdOptions_items sdOptions_select;

enum powerAssist_status
{
  powerAssist_on=0,	
  powerAssist_off
};
extern enum powerAssist_status powerAssistState;

enum App_status
{
  App_off=0,
  App_on
};
extern enum App_status AppState;
enum SD_OnOff
{
  SD_off=0,
  SD_on =1
};
extern enum SD_OnOff SD_status;

enum Delay_context
{
  btn_press,
  btn_debounce,
  App,
  Du,

};

enum DelayEvent
{
  BtnIntEvent_Left,
  BtnIntEvent_Right,
  AppScanningTimeout,
  DuScanningTimeout,
  AppConnectionTimeout
};

enum AppConnection
{
  AppRadioOff,	
  AppScanning,
  AppConnected
};
extern enum AppConnection AppConnectionStatus;

enum AccInt_event
{
  acc_tap,
  acc_push,
  rtc_daily,
  acc_push_debounce
};


enum DuConnection
{
  DuRadioOff,
  DuScanning,
  DuConnected
};

extern enum DuConnection DuConnectionStatus;

enum acc_LO
{
  acc_NO_lockout,
  acc_lockout
};
enum acc_LAPO
{
  acc_PO_up,
  acc_PO_down,
  acc_LA_right,
  acc_LA_left
};
enum acc_BAFRO
{
  acc_front,
  acc_back
};
struct acc_orientation
{
	enum acc_LO 	acc_lockout;
	enum acc_LAPO 	acc_landscape_portrait;
  	enum acc_BAFRO 	acc_back_front;
};

extern struct acc_orientation gesture;

enum task_id_app
{
  task_id_timer_update = task_id_first_user,
  task_id_Vmotor_handler = task_id_second_user,
  task_id_BleSend_handler = task_id_third_user,
  task_id_AccInt_handler = task_id_fourth_user,
  task_id_Delay_handler = task_id_fifth_user,
  task_id_Led_handler = task_id_sixth_user,
  task_id_max
};
void timer_update(uint8 context,uint8 event);    
void Vmotor_handler(uint8 context, uint8 event);
void BleSend_handler(uint8 context, uint8 event);
void AccInt_handler(uint8 context, uint8 event);
void Delay_handler(uint8 context, uint8 event);
void Led_handler(uint8 context, uint8 event);
void delay_ms(uint32 count);
void gatt_write_attribute_prepare(uint8	connection, uint16 handle,const uint8 *data,uint8 len);
void get_wb_data_pack(uint8 *data, uint8 len);
void set_led_event(void);
void clear_btn_state(void);
void dailyInfo_clear(void);
void check_dates(void);
void uints_convert(void);
void check_rtc(void);
uint8 Cap_est_dis_factor(uint8 factor);
/**
Task handlers, no user tasks defined in this application
  */
extern const task_handler tasks[task_id_max];

enum LedEvent
{
  Led_blue_flashing,
  Led_red_flashing,
  led_green_flashing,
  Led_turnOn,
  Led_turnOff,
  Led_red_Short_on,
  Led_red_Long_on
};


extern uint16 btn_left_hold_time;
extern uint16 btn_right_hold_time;
extern uint16 btn_hold_time_enterState;
extern  const uint16 btn_hold_time_chaneState;

#define Looking_for_dg 1
#define motorModeNormal 0
#define motorModeAccel 1

enum Packet_Type
{
  Packet_Type_None,
  Packet_Type_Data,
  Packet_Type_Command,
  Packet_Type_Error,
  Packet_Type_OTA
};

enum Packet_Data
{
  Packet_Data_MotorDistance,
  Packet_Data_Speed,
  Packet_Data_CoastTime,
  Packet_Data_Pushes,
  Packet_Data_MotorState,
  Packet_Data_BatteryLvl,
  Packet_Data_VersionInfo,
  Packet_Data_DailyInfo,
  Packet_Data_JourneyInfo,
  Packet_Data_MotorInfo,
  Packet_Data_DeviceInfo,
  Packet_Data_Ready,	
  Packet_Data_ErrorInfo,
};

enum Packet_Command
{
  Packet_Command_SetAcceleration,
  Packet_Command_SetMaxSpeed,
  Packet_Command_Tap,
  Packet_Command_DoubleTap,
  Packet_Command_SetControlMode,
  Packet_Command_SetSettings,
  Packet_Command_TurnOffMotor,
  Packet_Command_StartJourney,
  Packet_Command_StopJourney,
  Packet_Command_PauseJourney,
  Packet_Command_SetTime,
  Packet_Command_StartOTA,
  Packet_Command_StopOTA,
  Packet_Command_OTAReady,
  Packet_Command_CancelOTA,
  Packet_Command_Wake,
  Packet_Command_StartGame,
  Packet_Command_StopGame,
  Packet_Command_ConnectMPGame,
  Packet_Command_DisconnectMPGame
};
enum Packet_Error
{
  Packet_Error_NoError,
  Packet_Error_BatteryVoltage,
  Packet_Error_MotorPhases,
  Packet_Error_OverCurrent,
  Packet_Error_OverTemperature,
  Packet_Error_GyroRange,
  Packet_Error_OTAUnavailable,
  Packet_Error_BLEDisconnect
  
};

enum Packet_OTA
{
  Packet_OTA_SmartDrive,
  Packet_OTA_SmartDriveBluetooth,
  Packet_OTA_PushTracker
};

enum DU_controlMode
{
  DU_controlMode_Beginner, 
  DU_controlMode_Intermediate, 
  DU_controlMode_Advanced
};

enum SmartDrive_SettingFlag
{
  SmartDrive_SettingsFlag_EZMODE
};

enum Units {
  Units_English,
  Units_Metric
};

enum Device {
  SmartDrive,
  SmartDriveBluetooth,
  PushTracker
};
enum Journey_State {
  Journey_State_Started,
  Journey_State_Paused,
  Journey_State_Stopped
};

enum Game {
  Game_Mario,
  Game_Snake,
  Game_Sonic,
  Game_Tunnel,
  Game_FlappyBird,
  Game_Pong
};

//extern enum Units          units;
//extern enum DU_controlMode controlMode;
extern enum Journey_State  journeyState;

struct ErrorInfo{
    uint16_t            year;
    uint8_t             month;
    uint8_t             day;
    uint8_t             hour;
    uint8_t             minute;
    uint8_t             second;
    enum Packet_Error	error_type;
    uint8_t				error_batteryVoltage;
    uint8_t				error_overCurrent;
    uint8_t				error_motorPhases;
    uint8_t				error_gyroRange;
    uint8_t				error_overTemperature;
    uint8_t				error_BLEDisconnect;
  };
extern struct ErrorInfo errorInfo;
union Data {
  // Settings for SetSettings command
  struct {
    enum DU_controlMode controlMode;
    enum Units          units;
    uint8_t             settingsFlags1;
    uint8_t             padding;
    float               tapSensitivity;
    float               acceleration;
    float               maxSpeed;
  }                  settings;

  // VersionInfo
  struct {
    uint8_t             pushTracker;
    uint8_t             smartDrive;
    uint8_t             smartDriveBluetooth;
  }                  versionInfo;

  // DailyInfo
  struct {
    uint16_t            year;
    uint8_t             month;
    uint8_t             day;
    uint16_t            pushesWith;
    uint16_t            pushesWithout;
    uint16_t            coastWith;
    uint16_t            coastWithout;
    uint8_t             distance;
    uint8_t             speed;
    uint8_t             ptBattery;
    uint8_t             sdBattery;
  }                  dailyInfo;
  
  //Error Info
struct ErrorInfo		 errorInfo;

  // JourneyInfo
  struct {
    uint16_t            pushes;
    uint8_t             distance;
    uint8_t             speed;
  }                  journeyInfo;

  // MotorInfo
  struct {
    enum motor_on_off   motorState;
    uint8_t             batteryLevel;
    uint8_t             SDversion;
    uint8_t            padding;
    float               distance;
    float               speed;
    float               driveTime;
  }                  motorInfo;

  // TimeInfo
  struct {
    uint16_t            year;
    uint8_t             month;
    uint8_t             day;
    uint8_t             hours;
    uint8_t             minutes;
    uint8_t             seconds;
  }                  timeInfo;

  struct {
    enum Device		devices;
    uint8_t 		version;
  } 				deviceInfo;

  enum Packet_OTA     OTADevice;
  enum DU_controlMode controlMode;
  enum Units          units;
  enum motor_on_off   motorState;
  uint64              motorDistance;
  float               motorSpeed;
  float               coastTime;
  uint16              pushes;
  uint8               batteryLevel;
  float               acceleration;
  float               maxSpeed;
  uint64 			  errorID;
  uint8               bytes[18];
};
extern union Data packet_data;

enum TimeDisplay {
  TimeDisplay12,
  TimeDisplay24
};



struct CurrentTime {
  enum TimeDisplay displaySetting;
  uint16           year;
  uint8            month;
  uint8            day;
  uint8            hour;
  uint8            minute;
  uint8            second;

};
extern struct CurrentTime currentTime;




struct SD_settings
{
  enum DU_controlMode controlMode;
  enum Units          units;
  uint8_t             settingsFlags1;
  uint8_t             padding;
  float               tapSensitivity;
  float               acceleration;
  float               maxSpeed;
};      
extern struct SD_settings SDSettings;

struct DailyInfo {
  uint16_t            year;
  uint8_t             month;
  uint8_t             day;
  uint16_t            pushesWith;
  uint16_t            pushesWithout;
  uint16_t            coastWith;
  uint16_t            coastWithout;
  uint8_t             distance;
  uint8_t             speed;
  uint8_t             ptBattery;
  uint8_t             sdBattery;
} ;
extern struct DailyInfo dailyInfo;






struct VersionInfo {
  uint8_t             pushTracker;
  uint8_t             smartDrive;
  uint8_t             smartDriveBluetooth;
};
extern struct VersionInfo versionInfo;

#endif


#endif //GLOBALS_INCLUDE_GUARD_