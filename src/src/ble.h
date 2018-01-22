#ifndef BLE_INCLUDE_GUARD_
#define BLE_INCLUDE_GUARD_

#include <blestack/blestack.h>
#include <blestack/gap.h>
#include <blestack/hw.h>
#include <blestack/dma.h>
#include <blestack/ps.h>
#include "pstore.h"

#define MAX_CONNECTIONS 2

#define STATE_STANDBY   0
#define STATE_SCANNING   1
#define STATE_CONNECTING_DU   2
#define STATE_FINDING_SERVICES   3
#define STATE_FINDING_ATTRIBUTES   4
#define STATE_LISTENING_MEASUREMENTS   5
#define STATE_CONNECTED   6
#define STATE_CONNECTING_APP 7
#define STATE_SUBSCRIBING1   8
#define STATE_SUBSCRIBING2   9
#define STATE_SUBSCRIBING3   10
#define STATE_SUBSCRIBING4   11
#define STATE_SUBSCRIBING5   12
#define STATE_SUBSCRIBING6   13
#define STATE_FINDING_CURRENTTIME   14
#define STATE_CONNECTING_DONGLE   15
#define STATE_PAIRING_DU   16
#define STATE_PAIRING_APP   17
#define STATE_DELETE_BONDS 18
#define STATE_SENDING_DATA 19
#define STATE_SENDING_SETTINGS 20
#define STATE_SENDING_VERSION 21
#define STATE_SENDING_ERROR	22
#define STATE_SENDING_DISTANCE	23


#define ota_control 8
#define ota_data 10


#define sleep_mode 3
#define pairing_mode 2
#define normal_mode 0
#define training_mode 1
//#define setting_mode  5
#define standby_mode  6



#define	CMD_DATA_STANDBY 0
#define	CMD_DU_DATA_OTA 2
#define	CMD_DU_DFU_RESET 3
#define CMD_DU_MCU_OTA 5
#define CMD_DU_DELETE_BONDS 5
#define CMD_DU_BLE_OTA_START 6
#define CMD_APP_OTA_WB 2
#define CMD_APP_DFU_RESET 3
#define	CMD_APP_WB_DATA 1
#define CMD_APP_APPDATA 4
#define CMD_APP_OTA_DU 5
#define	CMD_APP_OTA_MCU 6
#define	CMD_APP_DATA_DU 7
#define CMD_APP_VER_WB 8
#define CMD_APP_RESET 10
#define CMD_DG_OTA_WB 2
#define CMD_DG_DFU_RESET 3
#define CMD_DG_NULL 1



enum radio_state
{
  Radio_off=0,
  Radio_on=1,
  Radio_pairing=2
};
extern enum radio_state ble_radio_state;

enum connection_status{
  connection_none=0,
  connection_app=1,
  connection_du=2,
  connection_both=3,
  connection_dongle=4
  
};

enum data_state
{
  data_standby =0,
  data_WB=1,
  data_App=2,
  data_DU=3,
  data_OTA_WB=4,
  data_OTA_DU=5,
  data_OTA_MCU=6,
  data_WB_JN =7   // journey data
};

extern uint8 ble_state;
extern uint8 scanning;
extern uint8 connections_counts;
extern uint8 connected;

extern uint8 du_paired;
extern uint8 app_paired;

extern uint8 command;
extern uint8 debug;
extern uint8 remoteStateInfo[2];
extern uint8 LookingForService_state;
extern uint8 ble_state;
extern uint8 ble_state_changed_flag;
extern uint8 bonding_buff[9];   // bonding_buff(0) = index of the oldest app bonds(2-8), bonding_buff(1)= bond of DU, bonding_buff(2-8)=bonds of app

extern uint8 connection_handle_app;
extern uint8 connection_handle_du;
extern uint8 connection_handle_dg;


extern const uint8 uuid_DATA_service[16];
extern const uint8 uuid_data_control[16];
extern const uint8 uuid_data_control_du[16];
extern const uint8 uuid_App_data[16];
extern const uint8 uuid_OTA_data[16];
extern const uint8 uuid_WB_data[16];
extern const uint8 uuid_DU_data[16];
extern const uint8 uuid_SMARTDRIVE[16];
extern const uint8 uuid_xgatt_motor[16];
extern const uint8 uuid_xgatt_speed[16];
extern const uint8 uuid_xgatt_data[16];
extern const uint8 uuid_OTA_data_du[16];
extern const uint8 BLED112_MAC1[6];
extern const uint8 BLED112_MAC2[6];
extern const uint8 BLED112_MAC3[6];

extern const uint16 version;
extern uint32 dfu_pointer;


extern uint8 ad_field_length ;
extern uint8 ad_field_type ;

extern uint8 DU_handlesearch_start ;
extern uint8 DU_handlesearch_end ;

//extern uint8 connection_handle;
extern uint8 disconnect_count;
extern uint8 connection_count;
extern uint8 connection_info[7];

extern enum data_state app_data_state;
extern uint8 curr_connection;


extern uint8 att_handle_du_position;       // 0 nothing 1= motor  2 = speed  3= data
extern uint8 att_handle_app_position;

extern uint16 att_handle_app_data_control;
extern uint16 att_handle_app_WB_data;
extern uint16 att_handle_app_App_data;
extern uint16 att_handle_app_OTA_data;
extern uint16 att_handle_app_DU_data;
extern uint16 att_handle_app_currentTime;



extern uint8 motor;
extern uint8 speed;
extern uint8 stop;
extern uint8 motor_stop;

extern uint16 att_handle_motor;
extern uint16 att_handle_speed;
extern uint16 att_handle_data;
extern uint16 att_handle_OTA_data_du;
extern uint16 att_handle_data_control_du;
#define att_handle_ota_DU_BLE att_handle_motor
void scanningDu_start(void);
void scanningApp_start(void);
void scanning_start(void);
void scanning_stop(void);
void disconnect_device(void);
void scanningApp_stop(void);
void scanningDu_stop(void);
void disconnect_Du(void);
void disconnect_App(void);

void subscribe(uint8 connection, uint8 handle, uint8 error);
void setLookingForService_state(uint8 state);

#endif //BLE_INCLUDE_GUARD_