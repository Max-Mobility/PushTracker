#include "ble.h"
#include "ble.h"
#include "ble.h"
#include <string.h>
#include <stdio.h>
#include <blestack/util.h>
#include <blestack/task.h>
#include <blestack/connection.h>
#include <blestack/config.h>
#include "motor.h"
#include "rtc.h"
#include "leds.h"
#include "globals.h"
#include "../config/attributes.h"
uint8 scanning =0;
uint8 connections_counts =0;
uint8 connected = 0;

uint8 command;
uint8 debug;
uint8 remoteStateInfo[2];
uint8 LookingForService_state;
uint8 ble_state = STATE_STANDBY;
uint8 ble_state_changed_flag = 0;
uint8 bonding_buff[9];   // bonding_buff(0) = index of the oldest app bonds(2-8), bonding_buff(1)= bond of DU, bonding_buff(2-8)=bonds of app

uint8 connection_handle_app=255;
uint8 connection_handle_du=255;
uint8 connection_handle_dg=255;

uint16 app_handlesearch_start; 
uint16 app_handlesearch_end ;
uint16 app_handlesearch_time_start;
uint16 app_handlesearch_time_end;
uint16 app_handle_currentTime_start;
uint16 app_handle_currentTime_end;

uint16 att_handle_motor;
uint16 att_handle_speed;
uint16 att_handle_data;
uint16 att_handle_OTA_data_du;
uint16 att_handle_data_control_du;

uint16 att_handle_motor_ccc;
uint16 att_handle_speed_ccc;
uint16 att_handle_data_ccc;
uint16 att_handle_OTA_data_du_ccc;
uint16 att_handle_data_control_du_ccc;

uint16 att_handle_app_data_control;
uint16 att_handle_app_WB_data;
uint16 att_handle_app_App_data;
uint16 att_handle_app_OTA_data;
uint16 att_handle_app_DU_data;
uint16 att_handle_app_currentTime;

uint16 att_handle_app_data_control_ccc;
uint16 att_handle_app_WB_data_ccc;
uint16 att_handle_app_App_data_ccc;
uint16 att_handle_app_OTA_data_ccc;
uint16 att_handle_app_DU_data_ccc;

//uint8  connection_lost_du;
//uint8  found_app;
//uint8  connection_lost_app;
//uint8  found_du;
//uint8  connection_lost_dg;
//uint8  found_dg;

uint8 motor;
uint8 speed;
uint8 stop;
uint8 motor_stop;

uint8 stop_motor;
uint8 stop_count;
uint8 push_verified;
uint8 push_verified_count;
uint8 push_detected;
uint8 tap_detected_count;
uint8 motor_history[2];
uint8 pushInpush[2];
uint8 button_hold_count;
uint8 timer_on;
uint8 enter_sleeping;
uint8 wb_mode;
uint8 opt_mode;

uint8 uuid_temp[16];

uint8 du_paired=0;
uint8 app_paired=0;
uint16 fail_reason=1;

#define debug 0


const uint8 uuid_DATA_service[16]       =	{0x86,0x5d,0xb4,0xa2,0x13,0x4b,0xe0,0xb4,0x31,0x4a,0x43,0x63,0x8f,0xac,0x58,0x93};
const uint8 uuid_data_control[16]		=	{0xe1,0xda,0x67,0xb2,0x07,0x58,0x27,0xb8,0xd9,0x4c,0xb2,0xf2,0x15,0xaa,0xda,0x58};
const uint8 uuid_App_data[16]			=	{0x71,0xc4,0x60,0xd8,0xd7,0x20,0xf4,0x98,0x2d,0x4a,0x55,0xf6,0xbf,0x8e,0x20,0x68};
const uint8 uuid_WB_data[16]			=	{0x20,0xa9,0x73,0xb1,0x5b,0x73,0xcc,0x8b,0xc0,0x4f,0x73,0x6c,0x5f,0x62,0x89,0x84};
const uint8 uuid_DU_data[16]			=	{0xcf,0xc9,0x3c,0xdb,0x9e,0x7f,0xb9,0xae,0x54,0x42,0x03,0x10,0xa8,0xfd,0x77,0x51};
const uint8 uuid_OTA_data[16] 	        = 	{0x1f,0x4d,0xa5,0xc7,0x4c,0xb5,0x59,0xa9,0x83,0x4d,0x33,0xcd,0x09,0xe3,0x72,0x92};
const uint8 uuid_SMARTDRIVE[16]	        = 	{0x23,0x77,0xba,0xf1,0x42,0x27,0x4d,0x8e,0x9b,0x46,0xcb,0xe7,0x66,0x16,0xd5,0x0c};//,0x0b};
const uint8 uuid_xgatt_data[16]	        =	{0xc1,0x3c,0x35,0x55,0x28,0x11,0xe1,0xaa,0x76,0x48,0x42,0xb0,0x80,0xd7,0xad,0xe9};
const uint8 uuid_xgatt_motor[16]		=	{0xc1,0x3c,0x35,0x55,0x28,0x11,0xe1,0xaa,0x76,0x48,0x42,0xb0,0x80,0xd7,0xad,0xe7};
const uint8 uuid_xgatt_speed[16]		=	{0xc1,0x3c,0x35,0x55,0x28,0x11,0xe1,0xaa,0x76,0x48,0x42,0xb0,0x80,0xd7,0xad,0xe8};
const uint8 uuid_OTA_data_du[16]		=	{0xc1,0x3c,0x35,0x55,0x28,0x11,0xe1,0xaa,0x76,0x48,0x42,0xb0,0x80,0xd7,0xad,0xea};
const uint8 uuid_data_control_du[16]	=	{0xc1,0x3c,0x35,0x55,0x28,0x11,0xe1,0xaa,0x76,0x48,0x42,0xb0,0x80,0xd7,0xad,0xeb};
const uint8 BLED112_MAC1[6]				=	{0x47,0x9c,0x1e,0x80,0x07,0x00};
const uint8 BLED112_MAC2[6]				=	{0xeb,0xba,0xf1,0x80,0x07,0x00};
const uint8 BLED112_MAC3[6]				=	{0xec,0xba,0xf1,0x80,0x07,0x00};
const uint8 uuid_service_group[2]       =       {0x00,0x28};

const uint16 version = 10;// 1.0
uint32 dfu_pointer =0;


uint8 ad_field_length ;
uint8 ad_field_type ;

uint8 DU_handlesearch_start ;
uint8 DU_handlesearch_end ;

//uint8 connection_handle;
uint8 disconnect_count;
uint8 connection_count;
uint8 connection_info[7];

enum data_state app_data_state=data_standby;
uint8 curr_connection;


uint8 att_handle_du_position;       // 0 nothing 1= motor  2 = speed  3= data
uint8 att_handle_app_position;
enum radio_state ble_radio_state=Radio_off;


void scanning_start(void)
{
  gap_set_scan_parameters(0x4B, 0x32, 0);		
  if(scanning==0)
  {
    scanning = 1;
    gap_discover(gap_discover_generic);
  }
}
void scanningApp_start(void)
{
  if(AppConnectionStatus==AppRadioOff)
  {
    scanning_start();
    AppConnectionStatus=AppScanning;
    task_timed_cancel((enum task_id)task_id_Delay_handler, App,0xff);
    task_send_timed((enum task_id)task_id_Delay_handler, App, AppScanningTimeout, (uint32)(32768L*60L));
  }
}

void scanningDu_start(void)
{
  if(DuConnectionStatus==DuRadioOff)
  {
    scanning_start();
    DuConnectionStatus=DuScanning;
    task_timed_cancel((enum task_id)task_id_Delay_handler, Du,0xff);
    task_send_timed((enum task_id)task_id_Delay_handler, Du, DuScanningTimeout, (uint32)(32768L*60L));
  }
}

void scanning_stop(void)
{
  if(scanning) 
  {
    gap_end_procedure();
    scanning=0 ; 
  }
}

void scanningApp_stop(void)
{
  if(DuConnectionStatus!=DuScanning)
    scanning_stop();

  task_timed_cancel((enum task_id)task_id_Delay_handler, App,0xff);
  AppConnectionStatus=AppRadioOff;
}

void scanningDu_stop(void)
{
  if(AppConnectionStatus!=AppScanning)
    scanning_stop();
  task_timed_cancel((enum task_id)task_id_Delay_handler, Du,0xff);
  DuConnectionStatus=DuRadioOff;
}

void disconnect_device(void)
{
  disconnect_App();
  disconnect_Du();
  //gap_terminate(connection_handle_du,0);
}

void disconnect_App(void)
{
  if(connected&connection_app)
    gap_terminate(connection_handle_app,0);
}
void disconnect_Du(void)
{
  if(connected&connection_du)
    gap_terminate(connection_handle_du,0);
}

void subscribe(uint8 connection, uint8 handle, uint8 error)
{
  if(error==0)
  {
    uuid_temp[0]=0x02;
    uuid_temp[1]=0x00;
    gatt_write_attribute(connection, handle,uuid_temp,2);
  }
  else
    gap_terminate(connection,0);


}


void subscribeApp(uint8 connection, uint8 handle, uint8 error)
{
  if(error==0)
  {
    uuid_temp[0]=0x01;
    uuid_temp[1]=0x00;
    gatt_write_attribute(connection, handle,uuid_temp,2);
  }
  else
    gap_terminate(connection,0);


}

void setLookingForService_state(uint8 state)
{
  LookingForService_state=state;
}


// for OTA update by ble dongle 
void gatt_attribute_value_callback(uint8 connection, uint16 handle,enum attributes_attribute_change_reason cb_type,uint16 offset,const uint8*data,uint8 len)
{
  //save connection handle, is always 0 if only slave
  curr_connection=connection;

  // Check if OTA control point attribute is written by the remote device and execute the command
  // Command 0 : Erase flash block 0 (0x0-0x1FFFF)
  // Command 1 : Erase flash block 1 (0x10000-0x3FFFF)
  // Command 2 : Reset DFU data pointer
  // Command 3 : Boot to DFU mode
  // In case of errors application error code 0x80 is returned to the remote device
  // In case the flash comms fails error code 0x90 is returned to the remote device
  if (handle == ota_control )
  {
    //attribute is user attribute, reason is always write_request_user
    if (len >1 || offset >0 )
      // Not a valid command -> report application error code : 0x80
      gatt_user_write_rsp(connection, 0x80);
    else
    {
      command=data[0];
      if(command > 4) 
      { // Unknown command -> report application error code : 0x80

        gatt_user_write_rsp(curr_connection, 0x80);

      }
      else 
      {

        if(command == 3) 
        { // Command 3 received -> Boot to DFU mode
          hw_reset(1);
        }
        else
        { 
          ps_data_temp[0]=0x01;
          ps_save(ps_cleaning,ps_data_temp,1);
          dfu_pointer = FIRST_USER_PAGE_ADDRESS;
          /* Other commands are not used, but still accepted in order
               to be compatible with the external flash OTA
               implementation */
          gatt_user_write_rsp(curr_connection, 0x00);
        }
      }
    }
  }
  // Check if OTA data attribute is written which carries the firmware update
   if( (handle == BG_ATT_ota_data )&&((dfu_pointer+len) <=(FIRST_USER_PAGE_ADDRESS+(uint32)128*(uint32)1024) ))
  {
    flash_write((dfu_pointer >> 2), data, len);
    dfu_pointer += (len);
  }
}



void gap_scan_response_callback(int8 rssi,uint8 packet_type,uint8*addr,uint8 random_addr,uint8 bond_handle,uint8 len,uint8*data,uint8 channel)
{
  uint8 i,j;
  bd_addr bt_addr;
  i = 0;
  j = 0;
  memcpy(bt_addr.d,addr,6);
  //  bt_addr.d[0]=addr[0];
  fail_reason=bond_handle;

  if ((bond_handle !=0xff) ||(ble_radio_state==Radio_pairing)||(debug==1))      //without pairing_mode, only connect bonded device
  {
    if(((!memcmp(addr,BLED112_MAC1,6)) || (!memcmp(addr,BLED112_MAC2,6)) ||(!memcmp(addr,BLED112_MAC3,6)))&&((connected&connection_dongle)==0))  
    {
      gap_end_procedure();
      scanning=0;
      gap_connect(&bt_addr, (enum gap_address_type)random_addr,&connection_handle_dg,8,8,0x30,0);
      ble_state = STATE_CONNECTING_DONGLE;
    }
    if (packet_type==0)  //Connectable Advertisement packet
    {               
      while (i < len)
      {
        ad_field_length = data[i];
        ad_field_type = data[i + 1];

        if (ad_field_type == 0x06 || ad_field_type == 0x07 )   //type =uuid 
        {     

          j = 0;
          while (j < ad_field_length    )
          {
            if ((!memcmp(&data[i+j+2],uuid_SMARTDRIVE,16))&&((connected&connection_du)==0)&&(((ble_radio_state==Radio_on)&&(SD_status==SD_on))||((ble_radio_state==Radio_pairing)&&(pairing_mx2plus))) )
            {

              scanning_stop();
              gap_connect(&bt_addr, (enum gap_address_type)random_addr,&connection_handle_du,0x20,0x20,0x30,0);


              ble_state = STATE_CONNECTING_DU;


              i = 100;
              j = 100;
            }

            if ((!memcmp(&data[i+j+2],uuid_DATA_service,16))&&((connected&connection_app)==0)&&(((ble_radio_state==Radio_on)&&(AppState==App_on))||((ble_radio_state==Radio_pairing)&&(pairing_phone))) )
            {
              scanning_stop();
              gap_connect(&bt_addr, (enum gap_address_type)random_addr,&connection_handle_app,0x20,0x20,0x30,0);
              ble_state = STATE_CONNECTING_APP;
              i = 100;
              j = 100;
            }
            j = j + 2;
          }
        }
        i = i + ad_field_length + 1;
      }
    }
  }
  else  // try to connect a device and  check the device name =bluegiga Bled112
  {
    if(((!memcmp(addr,BLED112_MAC1,6)) || (!memcmp(addr,BLED112_MAC2,6)) ||(!memcmp(addr,BLED112_MAC3,6)))&&((connected&connection_dongle)==0))  
    {
      gap_end_procedure();
      scanning=0;
      gap_connect(&bt_addr, (enum gap_address_type)random_addr,&connection_handle_dg,8,8,0x30,0);
      ble_state = STATE_CONNECTING_DONGLE;
    }
  }

}
// new connection established 
void connection_complete_callback(uint8 conn)    
{
  disconnect_count=0;
  connection_count = 0;
  if(debug==1)
  {
    switch(ble_state)
    {
      case STATE_CONNECTING_APP:
        connected = connected | connection_app;
        connections_counts=connections_counts+1;
        connection_handle_app=conn;
        set_led_event();
        smp_start_encryption(conn,1);
        //                gatt_read_by_group_type(conn, 0x0001, 0xffff, uuid_service_group,2);   // looking for service groups(uuid 0x2800);
        //        LookingForService_state = STATE_FINDING_SERVICES;

        break;
      case STATE_CONNECTING_DU:
        connected = connected | connection_du;
        set_led_event();
        connections_counts=connections_counts+1;
        connection_handle_du=conn;
        smp_start_encryption(conn,1);
        break;
      case STATE_CONNECTING_DONGLE:
        connected = connected | connection_dongle;
        connection_handle_dg=conn;	
        break;
      default:
        break;
    }
    ble_state = STATE_CONNECTED;
  }
  else  // debug==0
  {
    ps_load(ps_bond,ps_data,32);
    switch(ble_state)
    {

      case STATE_CONNECTING_APP:
        connection_handle_app=conn;
        task_timed_cancel((enum task_id)task_id_Delay_handler, App,0xff);
        if(ble_radio_state==Radio_pairing)
        {
          if(connection_get_bonding(conn)!=0xff)
          {
            smp_delete_bonding(connection_get_bonding(conn));
          }

          if(ps_data[ps_data[0]] <10)
            smp_delete_bonding(ps_data[ps_data[0]]);



          smp_start_encryption(conn,1);
          AppConnectionStatus=AppConnected;
        }
        else
        {
          connected = connected | connection_app;
          AppConnectionStatus=AppConnected;
          gatt_read_by_group_type(conn, 0x0001, 0xffff, uuid_service_group,2);   // looking for service groups(uuid 0x2800);
          LookingForService_state = STATE_FINDING_SERVICES;

        }

        break;
      case STATE_CONNECTING_DU:
        connection_handle_du=conn;
        task_timed_cancel((enum task_id)task_id_Delay_handler, Du,0xff);
        if(ble_radio_state==Radio_pairing)
        {
          if(ps_data[1]!=0xff)
            smp_delete_bonding(ps_data[1]);
          smp_start_encryption(conn,1);
        }
        else
        {
          connected = connected | connection_du;
          gatt_read_by_group_type(conn, 0x0001, 0xffff, uuid_service_group,2);   // looking for service groups(uuid 0x2800);
          LookingForService_state = STATE_FINDING_SERVICES;
          //set_led_event();
        }
        DuConnectionStatus=DuConnected;
        break;
      case STATE_CONNECTING_DONGLE:
        connected = connected|connection_dongle;
        connection_handle_dg=conn;
        ble_state = STATE_CONNECTED;
        //          ble_state_changed_flag=1;
        break;
    }
  }
}

// connection encrpyted
void connection_encrypted_callback(uint8 conn,uint8 reason)
{
  uint8 _temp_bonds;
  fail_reason=reason;
  if(reason==0) // success
  {
    ps_load(ps_bond,ps_data,32);
    switch(ble_state)
    {
      case STATE_CONNECTING_DU:   //pairing to du
        connected = connected | connection_du;
        connection_handle_du=conn;

        if(ble_radio_state==Radio_pairing)
        {
         
          ps_data[1]=connection_get_bonding(conn);
          ps_save(ps_bond,ps_data,9);
          SD_bonded=true;
          du_paired=1;
        }


        break;
      case STATE_CONNECTING_APP: //pairing to app
        connected = connected | connection_app;
        ps_data[ps_data[0]]=connection_get_bonding(conn);
        ps_data[0]=ps_data[0]>7? 2:ps_data[0]+1;
        app_paired=1;
        APP_bonded = true;
        uuid_temp[0]=0x2b;
        uuid_temp[1]=0x2a;
        gatt_read_by_type(connection_handle_app,0x0001,0xffff,uuid_temp,2);
		ps_save(ps_bond,ps_data,9);
        break;
      case STATE_CONNECTED: // not pairing, bonded device
        //      if(conn==connection_handle_app)
        //      {
        //        uuid_temp[0]=0x2b;
        //        uuid_temp[1]=0x2a;
        //        gatt_read_by_type(connection_handle_app,0x0001,0xffff,uuid_temp,2);
        //        
        //      }
        //        if(conn==connection_handle_du)
        //      {
        //        gatt_read_by_group_type(conn, 0x0001, 0xffff, uuid_service_group,2);   // looking for service groups(uuid 0x2800);
        //        LookingForService_state = STATE_FINDING_SERVICES;
        //        
        //      }
        break;
    }
    ble_state = STATE_CONNECTED;
  }
  else
  {
    if(reason==6)
    {
      switch(ble_state)
      {
        case STATE_CONNECTING_DU:   // delete bondsing and re pairing to du
          smp_delete_bonding(connection_get_bonding(conn));
          smp_start_encryption(conn,1);
          break;
        case STATE_CONNECTING_APP: //
          smp_delete_bonding(connection_get_bonding(conn));
          smp_start_encryption(conn,1);
          break;
        case STATE_CONNECTED:

          _temp_bonds=connection_get_bonding(conn);
          gap_terminate(conn,0);
          smp_delete_bonding(_temp_bonds);
          //          while(connection_get_bonding(conn)!=0xff)
          //          {
          //            smp_delete_bonding(connection_get_bonding(conn));
          //          }
          // smp_start_encryption(conn,1);
          break;
      }
    }
  }
}
void smp_bonding_fail(uint8 connection, errcode reason)
{
  //fail_reason=reason;
  if((reason&0xff)==pairing_fail_pairing_not_supported) // need delete bonds on the slave   should only happen in pairing mode
  {
    switch(ble_state)
    {
      case STATE_CONNECTING_DU:   //pairing to du
        gatt_read_by_group_type(connection, 0x0001, 0xffff, uuid_service_group,2);   // looking for service groups(uuid 0x2800);
        LookingForService_state = STATE_FINDING_SERVICES;
        break;
      case STATE_CONNECTING_APP: //pairing to app

        break;

    }
  }
}

// disconnected event handler (copied from stubs.c)
void connection_disconnect_callback(uint8 conn, uint8 reason)
{
  disconnect_count=0;
  connection_count = 0;
  ble_state_changed_flag =1;
  if(conn== connection_handle_app)
  {
    connected &=~connection_app;
    AppConnectionStatus=AppRadioOff;
    connection_lost_app=1;
    connection_handle_app =255;
    if((reason ==0)||(reason==0x13)||(reason==0x16))// user disconnected connection
    {
      AppState=App_off;
    }
    else
    {
      if((AppState==App_on)&&(ble_radio_state==Radio_on))
      {
        scanningApp_start();
      }
      else
      {
        AppState=App_off;
      }
    }



  }
  if(conn== connection_handle_du)
  {
	DuConnectionStatus=DuRadioOff;
    if((SD_status==SD_on)&&(ble_radio_state==Radio_on))
    {
      scanningDu_start();
      if( motorStatus == motor_on)
      {
        errorInfo.year	=	currentTime.year;
        errorInfo.month	=	currentTime.month;
        errorInfo.day		=	currentTime.day;
        errorInfo.hour	=	currentTime.hour;
        errorInfo.minute	=	currentTime.minute;
        errorInfo.second	=	currentTime.second;
        errorInfo.error_type = Packet_Error_BLEDisconnect;
        errorInfo.error_BLEDisconnect++;
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


    }
    connected &=~connection_du;
    connection_lost_du=1;
    motorStatus = motor_off;
    connection_handle_du =255;

    if((ble_radio_state==Radio_pairing)&&(pairing_mx2plus))
    {
      scanningDu_start();
    }
    set_led_event();
  }
  if(conn== connection_handle_dg)
  {
    connected &=~connection_dongle;
    connection_lost_dg=1;
    connection_handle_dg =255;
  }

  if(ble_radio_state==Radio_off)  // bluetooth off state. turn off all connected device
  {
    ble_state=STATE_STANDBY;
    disconnect_device();
  }

}


uint8 gatt_find_grouping_callback(uint8 connection, uint16 start,uint16 end,uint8*uuid,uint8 uuidlen)
{
  if(!memcmp(uuid,uuid_SMARTDRIVE,16))
  {
    DU_handlesearch_start = start;
    DU_handlesearch_end = end;
  }
  if(!memcmp(uuid,uuid_DATA_service,16))
  {
    app_handlesearch_start = start;
    app_handlesearch_end = end;
  }

  if((uuidlen==2)&&(uuid[0]==0x05)&&(uuid[1]==18))
  {
    app_handlesearch_time_start = start;
    app_handlesearch_time_end = end;
  }

  return 1;
}

uint8 gatt_find_information_callback(uint8 connection, uint16 handle,uint8*uuid,uint8 uuidlen)
{
  if (connection==connection_handle_du)  //found drive uint service
  {
    if (!memcmp(uuid,uuid_xgatt_motor,16))// found the motor attribute, so save the handle
    { 
      att_handle_motor = handle;
      att_handle_du_position = 1;
    }
    if (!memcmp(uuid,uuid_xgatt_speed,16) )
    {
      att_handle_speed = handle;
      att_handle_du_position = 2;
    }

    if (!memcmp(uuid,uuid_xgatt_data,16))
    {
      att_handle_data = handle;
      att_handle_du_position = 3;
    }
    if (!memcmp(uuid,uuid_OTA_data_du,16))
    {
      att_handle_OTA_data_du = handle;
      att_handle_du_position = 4;
    }
    if (!memcmp(uuid,uuid_data_control_du,16))
    {
      att_handle_data_control_du = handle;
      att_handle_du_position = 5;
    }
    if ((uuidlen == 2) && (uuid[0]== 0x02) && (uuid[1] == 0x29)) // found client characteristic configuration , so save the handle
    {
      switch(att_handle_du_position)
      {
        case 1:
          att_handle_motor_ccc = handle;
          break;
        case 2:
          att_handle_speed_ccc = handle;
          break;
        case 3:
          att_handle_data_ccc = handle;
          break;
        case 4:
          att_handle_OTA_data_du_ccc = handle;
          break;
        case 5:
          att_handle_data_control_du_ccc = handle;
          break;
      }
    }
  }
  if(connection == connection_handle_app)
  {
    if (!memcmp(uuid,uuid_App_data,16))
    {
      att_handle_app_App_data = handle;
      att_handle_app_position=1;
    }
    if (!memcmp(uuid,uuid_WB_data,16))
    {
      att_handle_app_WB_data = handle;
      att_handle_app_position=2;
    }
    if (!memcmp(uuid,uuid_OTA_data,16)) 
    {
      att_handle_app_OTA_data=handle;
      att_handle_app_position=3;
    }
    if (!memcmp(uuid,uuid_DU_data,16)) 
    {
      att_handle_app_DU_data = handle;
      att_handle_app_position=4;
    }
    if (!memcmp(uuid,uuid_data_control,16) )
    {
      att_handle_app_data_control=handle;
      att_handle_app_position=5;
    }
    if ((uuidlen == 2) && (uuid[0] ==0x02) && (uuid[1] == 0x29)) // found client characteristic configuration. save the handle
    {
      if (att_handle_app_position == 1)
      {
        att_handle_app_App_data_ccc = handle;
      }
      if (att_handle_app_position == 2 )
      {
        att_handle_app_WB_data_ccc = handle;
      }
      if (att_handle_app_position == 3 )
      {
        att_handle_app_OTA_data_ccc = handle;
      }
      if (att_handle_app_position == 4 )
      {
        att_handle_app_DU_data_ccc = handle;
      }
      if (att_handle_app_position == 5 )
      {
        att_handle_app_data_control_ccc = handle;
      }
    }
    if((uuid[0]==0x2b)&&(uuid[1]==0x2a))  // current time handle from app
    {
      att_handle_app_currentTime = handle;
    }
  }

  return 1;
}


void gatt_read_attribute_callback(uint8 connection, uint16 handle,uint8 type,uint8*data,uint8 len)
{

  if(connection == connection_handle_du)
  {
    if(handle==att_handle_data_control_du) // command from du
    {
      if((data[0]==0)&&(LookingForService_state==STATE_DELETE_BONDS))
      {
        //          smp_start_encryption(connection_handle_du,1);
        //          setLookingForService_state(STATE_STANDBY);
        //  gap_terminate(connection,0);
      }
    }
    else if (handle == att_handle_motor )       // Check if data written to motor attribute 
    {
    }
    else if (handle == att_handle_speed)       // Check if data written to speed attribute
    {				
      get_wb_data_pack(data, len);
    }
    else if (handle ==att_handle_data)         // Check if data written to data attribute
    {
    }
  }

  if(connection == connection_handle_app)   
  {
    if (handle == att_handle_app_App_data ) {
      get_wb_data_pack(data, len);
    }
    else if (handle == att_handle_app_data_control )
    {
    }
    else if (handle == att_handle_app_OTA_data )
    {

    }

    if (type==0x03 )// read by type, should be time handle
    {   
      // call set_led(blue_port,blue2,led_on)
      //memcpy(currentTime_data,data,7);
      set_rtc();
      reset_rtc = 1;

      setLookingForService_state( STATE_FINDING_CURRENTTIME);
    }

  }
}

void gatt_procedure_complete_callback(uint8 connection, uint16 handle, uint8 ecode)
{
  if (connection == connection_handle_du)
  {
    switch(LookingForService_state)
    {
      case STATE_FINDING_SERVICES:
        if (DU_handlesearch_end > 0 )
        {
          setLookingForService_state(STATE_FINDING_ATTRIBUTES); // found smart drive service, so now find the motor speed data + CCC handles
          gatt_find_information_request(connection, DU_handlesearch_start, DU_handlesearch_end);
          att_handle_du_position = 0;
        }
        else
        {
          gap_terminate(connection,0);
          setLookingForService_state(STATE_STANDBY);
        }
        break;
      case STATE_FINDING_ATTRIBUTES:
        if( att_handle_du_position > 0)
        {
          setLookingForService_state( STATE_SUBSCRIBING1);  // found everything, yay! now enable indications (write 0x02 to CCC handle)
          subscribe(connection, att_handle_data_ccc,ecode);
          att_handle_du_position = 0;
        }
        break;
      case STATE_SUBSCRIBING1:
        subscribe(connection, att_handle_speed_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING2);
        break;
      case STATE_SUBSCRIBING2:
        subscribe(connection, att_handle_motor_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING3);
        break;
      case STATE_SUBSCRIBING3:
        //subscribe(connection, att_handle_OTA_data_du_ccc,ecode);
        //setLookingForService_state( STATE_SUBSCRIBING4);
        subscribe(connection, att_handle_data_control_du_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING5);
        break;
      case STATE_SUBSCRIBING4:
        subscribe(connection, att_handle_data_control_du_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING5);
        break;
      case STATE_SUBSCRIBING5:
        if(ble_radio_state==Radio_pairing)
        {
          uuid_temp[0]=CMD_DU_DELETE_BONDS;
          gatt_write_attribute(connection_handle_du,att_handle_data_control_du,uuid_temp,1);
          setLookingForService_state(STATE_DELETE_BONDS);
        }
        else {
          wb_data[0]=Packet_Type_Command;
          wb_data[1]=Packet_Command_SetSettings;
          packet_data.settings.controlMode=SDSettings.controlMode;
          packet_data.settings.units=SDSettings.units;
          packet_data.settings.settingsFlags1 = SDSettings.settingsFlags1;
          packet_data.settings.acceleration=SDSettings.acceleration;
          packet_data.settings.maxSpeed= SDSettings.maxSpeed;
          packet_data.settings.tapSensitivity=SDSettings.tapSensitivity;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.settings));
          gatt_write_attribute(connection_handle_du,att_handle_data,wb_data,sizeof(packet_data.settings)+2);
          setLookingForService_state( STATE_SENDING_SETTINGS);
        }
        //      smp_start_encryption(connection,1);
        break;
      case STATE_SENDING_SETTINGS:
        setLookingForService_state(STATE_STANDBY);
        
        set_led_event();
        break;
      case STATE_DELETE_BONDS:

        break;
      case STATE_STANDBY:

        break;
      case STATE_SENDING_DATA:
        //        if(ble_buff_dataPack_count)
        //        {
        //          task_send_msg((enum task_id)task_id_BleSend_handler,0,0);
        //        }
        //        else

        setLookingForService_state(STATE_STANDBY);

        break;


    } //switch end
  }

  if (connection ==connection_handle_app)
  {
    switch(LookingForService_state)
    {
      case STATE_FINDING_SERVICES:
        if(app_handlesearch_end>0)   // found service
        {     
          setLookingForService_state( STATE_FINDING_ATTRIBUTES);
          gatt_find_information_request(connection, app_handlesearch_start,app_handlesearch_end);
          att_handle_app_position=0;
          appInitDone=0;
        }
        else
        {
          gap_terminate(connection_handle_app,0);
          setLookingForService_state(STATE_STANDBY);
        }
        break;
      case STATE_FINDING_ATTRIBUTES: // found attribute, subscribe characteristic
        if( att_handle_app_position > 0)
        {
          setLookingForService_state( STATE_SUBSCRIBING1);  // found everything, yay! now enable indications (write 0x02 to CCC handle)
          subscribeApp(connection, att_handle_app_data_control_ccc,ecode);
          att_handle_app_position = 0;
        }
        break;
      case STATE_SUBSCRIBING1:
        subscribeApp(connection, att_handle_app_App_data_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING2);
        break;
      case STATE_SUBSCRIBING2:
        subscribeApp(connection, att_handle_app_DU_data_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING3);
        break;
      case STATE_SUBSCRIBING3:
        subscribeApp(connection, att_handle_app_OTA_data_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING4);
        break;
      case STATE_SUBSCRIBING4:
        subscribeApp(connection, att_handle_app_WB_data_ccc,ecode);
        setLookingForService_state( STATE_SUBSCRIBING5);
        break;
      case STATE_SUBSCRIBING5:  // finished subscription, send version next
        appInitDone=0;
        wb_data[0]=Packet_Type_Data;
        wb_data[1]=Packet_Data_VersionInfo;
        wb_data[2]=versionInfo.pushTracker;
        wb_data[3]=versionInfo.smartDrive;
        wb_data[4]=versionInfo.smartDriveBluetooth;
        gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,5);

        setLookingForService_state( STATE_SENDING_VERSION);
        //      smp_start_encryption(connection,1);
        break;
      case STATE_SENDING_SETTINGS:  // finished sending setting. send data next.
        if(appInitDone)
          setLookingForService_state( STATE_STANDBY);
        else
        {
          ps_load(key_wb_data_count,ps_data,2);
          wb_data_count =ps_data[0];
          wb_data_index=ps_data[1];
          if(wb_data_count>0)
          {
            wb_data_count --;
            wb_data_index = ((wb_data_index+99)%100);
            ps_load(key_wb_data_offset+wb_data_index,packet_data.bytes,sizeof(packet_data.dailyInfo));

          }
          else
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
            packet_data.dailyInfo.ptBattery     = battery;
            packet_data.dailyInfo.sdBattery     = driveUnit_battery;
            ps_data[0]=wb_data_count;
            ps_data[1]=wb_data_index;
            ps_save(key_wb_data_count,ps_data,2);
          }
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_DailyInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.dailyInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.dailyInfo)+2);
          setLookingForService_state( STATE_SENDING_DATA);
        }
        break;
      case STATE_SENDING_VERSION:  // finished sending version, send error info next
        if(appInitDone)
          setLookingForService_state( STATE_STANDBY);
        else
        {
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_ErrorInfo;
          packet_data.errorInfo = errorInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.errorInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.errorInfo)+2);
          setLookingForService_state( STATE_SENDING_ERROR);
          ps_reset_error();
        }
        break;
      case STATE_SENDING_ERROR:  // finished sending error info, send distance next.
        if(appInitDone)
          setLookingForService_state( STATE_STANDBY);
        else
        {
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_MotorDistance;
          memcpy(&wb_data[2],totalMotorDistance,sizeof(totalMotorDistance));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,10);
          setLookingForService_state( STATE_SENDING_DISTANCE);

        }
        break;
      case STATE_SENDING_DISTANCE:  // finished sending distance, send setting next.
        if(appInitDone)
          setLookingForService_state( STATE_STANDBY);
        else
        {
          wb_data[0]=Packet_Type_Command;
          wb_data[1]=Packet_Command_SetSettings;
          packet_data.settings.controlMode=SDSettings.controlMode;
          packet_data.settings.units=SDSettings.units;
          packet_data.settings.acceleration=SDSettings.acceleration;
          packet_data.settings.maxSpeed= SDSettings.maxSpeed;
          packet_data.settings.settingsFlags1 = SDSettings.settingsFlags1;
          packet_data.settings.tapSensitivity=SDSettings.tapSensitivity;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.settings));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.settings)+2);
          setLookingForService_state( STATE_SENDING_SETTINGS);

        }
        break;
      case STATE_SENDING_DATA:  // finished sending first data pack, send remained data or daily info
        if(appInitDone)  // all data was sent, put to stand by mode.
        {
          //appInitDone=0;
          setLookingForService_state( STATE_STANDBY);
        }
        else
        {
          if(wb_data_count>0)
          {
            wb_data_count --;
            wb_data_index = ((wb_data_index+99)%100);
            ps_load(key_wb_data_offset+wb_data_index,packet_data.bytes,sizeof(packet_data.dailyInfo));

          }
          else
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
            packet_data.dailyInfo.ptBattery     = battery;
            packet_data.dailyInfo.sdBattery     = driveUnit_battery;
            ps_data[0]=wb_data_count;
            ps_data[1]=wb_data_index;
            ps_save(key_wb_data_count,ps_data,2);
            appInitDone = 1;
            info_update_time=0;
          }
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_DailyInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.dailyInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.dailyInfo)+2);
          setLookingForService_state( STATE_SENDING_DATA);
        }
        break;
      case STATE_FINDING_CURRENTTIME:
        gatt_read_by_group_type(connection_handle_app, 0x0001, 0xffff,uuid_service_group,2);// looking for service groups(uuid 0x2800)
        //gatt_find_information_request(connection, 0x01, DU_handlesearch_start);
        setLookingForService_state(STATE_FINDING_SERVICES);
        break;
      case STATE_STANDBY://STATE_STANDBY
        if(handle==att_handle_app_WB_data)  // transmit all wb data.
        {
          if(app_data_state==data_WB)
          {
            if(wb_data_count>0) // have more than one data { send one first
            {
              ps_data_len=ps_load(key_wb_data_offset+wb_data_index,ps_data,32);
              wb_data_count=wb_data_count-1;
              ps_erase(key_wb_data_offset+wb_data_index,0xff);
              wb_data[0]=0x01;
              memcpy(&wb_data[1],ps_data,ps_data_len);
              gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,16);
              wb_data_index = wb_data_index==0?100:wb_data_index-1;
            }
            else   // have none data, change app_data_state back to standby
            {
              app_data_state=data_standby;
              gatt_write_attribute(connection_handle_app,att_handle_app_data_control,0,1);
              ps_data[0]=wb_data_count;
              ps_data[1]=wb_data_index;
              ps_save(key_wb_data_count,ps_data,2);
            }
          }
        }
        break;
    } // switch end
  }
}
