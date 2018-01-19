#include "_generated_states_.h"

uint32 changeState = 0;
uint32 stateDelay = 0;
uint8  stateLevel_0;
uint8  stateLevel_1;
uint8  stateLevel_2;
uint8  stateLevel_3;
uint8  stateLevel_4;

const uint8 state_OTA = 0;

void state_OTA_execute( void ) {
  if (changeState || stateLevel_0 != state_OTA)
    return;

  state_OTA_transition();

  // execute all substates

  if (changeState == 0) {
    if(btn_left_hold || !(connected | connection_app))
    {
    hw_reset(1);
    }
    display_OTA(0);
    display_write();
  }
}

void state_OTA_setState( void ) {
  stateLevel_0 = state_OTA;
}

void state_OTA_transition( void ) {
  if (changeState)
    return;
}

void state_OTA_finalization( void ) {
  
}

const uint8 state_codeSpace = 1;

void state_codeSpace_execute( void ) {
  if (changeState || stateLevel_0 != state_codeSpace)
    return;

  state_codeSpace_transition();

  // execute all substates
  state_codeSpace_idle_execute();
  state_codeSpace_DisplayInfo_execute();
  state_codeSpace_startIcon_execute();

  if (changeState == 0) {
    start_adc(BATTERY_ADC_INPUT, BATTERY_ADC_DECIMATION, BATTERY_ADC_REF);
  }
}

void state_codeSpace_setState( void ) {
  stateLevel_0 = state_codeSpace;
}

void state_codeSpace_transition( void ) {
  if (changeState)
    return;
}

void state_codeSpace_finalization( void ) {
  
}

const uint8 state_codeSpace_idle = 0;

void state_codeSpace_idle_execute( void ) {
  if (changeState || stateLevel_1 != state_codeSpace_idle)
    return;

  state_codeSpace_idle_transition();

  // execute all substates

  if (changeState == 0) {
    

  }
}

void state_codeSpace_idle_setState( void ) {
  stateLevel_1 = state_codeSpace_idle;
  state_codeSpace_setState();
}

void state_codeSpace_idle_transition( void ) {
  if (changeState)
    return;
  else if ( tap&&(motorStatus==motor_off) ) {
    changeState = 1;
    // run the current state's finalization function
    state_codeSpace_idle_finalization();
    // set the current state to the state we are transitioning to
    state_codeSpace_DisplayInfo_LowBatteryWarning_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    dram_ptr = 0;
    tap=0;
    displayTimeout=0;
    display_sleep(oled_wakeup);
    scrollingDone = 1;
    
    
    
    scrolling = scroll_hor;
    scrollingDone = 1;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    if(battery>=20)
      displayDone=1;
    

  }
}

void state_codeSpace_idle_finalization( void ) {
  
  state_codeSpace_finalization();
}

const uint8 state_codeSpace_DisplayInfo = 1;

void state_codeSpace_DisplayInfo_execute( void ) {
  if (changeState || stateLevel_1 != state_codeSpace_DisplayInfo)
    return;

  state_codeSpace_DisplayInfo_transition();

  // execute all substates
  state_codeSpace_DisplayInfo_DisplayTime_execute();
  state_codeSpace_DisplayInfo_LowBatteryWarning_execute();

  if (changeState == 0) {
    if(scrollingDone)
    {
      state_time+=TICKS_TO_MS(stateDelay);
      if(state_time>5000) // 3s
        displayTimeout=1;
    }
  }
}

void state_codeSpace_DisplayInfo_setState( void ) {
  stateLevel_1 = state_codeSpace_DisplayInfo;
  state_codeSpace_setState();
}

void state_codeSpace_DisplayInfo_transition( void ) {
  if (changeState)
    return;
  else if ( displayTimeout ) {
    changeState = 1;
    // run the current state's finalization function
    state_codeSpace_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_codeSpace_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
}

void state_codeSpace_DisplayInfo_finalization( void ) {
  
  state_codeSpace_finalization();
}

const uint8 state_codeSpace_DisplayInfo_DisplayTime = 0;

void state_codeSpace_DisplayInfo_DisplayTime_execute( void ) {
  if (changeState || stateLevel_2 != state_codeSpace_DisplayInfo_DisplayTime)
    return;

  state_codeSpace_DisplayInfo_DisplayTime_transition();

  // execute all substates

  if (changeState == 0) {
    if(state_time>3000) // 3s
      displayDone=1;
  }
}

void state_codeSpace_DisplayInfo_DisplayTime_setState( void ) {
  stateLevel_2 = state_codeSpace_DisplayInfo_DisplayTime;
  state_codeSpace_DisplayInfo_setState();
}

void state_codeSpace_DisplayInfo_DisplayTime_transition( void ) {
  if (changeState)
    return;
}

void state_codeSpace_DisplayInfo_DisplayTime_finalization( void ) {
  
  state_codeSpace_DisplayInfo_finalization();
}

const uint8 state_codeSpace_DisplayInfo_LowBatteryWarning = 1;

void state_codeSpace_DisplayInfo_LowBatteryWarning_execute( void ) {
  if (changeState || stateLevel_2 != state_codeSpace_DisplayInfo_LowBatteryWarning)
    return;

  state_codeSpace_DisplayInfo_LowBatteryWarning_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    
      
    
    if (state_time < 400) {
      display_batteryFilled(1, 8, 0);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_batteryFilled(1, 8, 0);
    }
    else if (state_time >= 900) {
      displayDone = 1;
    }
      
    
    display_write();

  }
}

void state_codeSpace_DisplayInfo_LowBatteryWarning_setState( void ) {
  stateLevel_2 = state_codeSpace_DisplayInfo_LowBatteryWarning;
  state_codeSpace_DisplayInfo_setState();
}

void state_codeSpace_DisplayInfo_LowBatteryWarning_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_codeSpace_DisplayInfo_LowBatteryWarning_finalization();
    // set the current state to the state we are transitioning to
    state_codeSpace_DisplayInfo_DisplayTime_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    state_time=0;
    dram_ptr=0;
    scrollingDone = 1;
    tap = 0;
    displayDone=0;
    clear_dram();
    scrolling=scroll_hor;
    read_rtc();
    display_time(0);
    display_write();

  }
}

void state_codeSpace_DisplayInfo_LowBatteryWarning_finalization( void ) {
  
  state_codeSpace_DisplayInfo_finalization();
}

const uint8 state_codeSpace_startIcon = 2;

void state_codeSpace_startIcon_execute( void ) {
  if (changeState || stateLevel_1 != state_codeSpace_startIcon)
    return;

  state_codeSpace_startIcon_transition();

  // execute all substates

  if (changeState == 0) {
      state_time+=TICKS_TO_MS(stateDelay);
      if(state_time>1500)//  1.5s
      {
        displayDone=1;
      }
  }
}

void state_codeSpace_startIcon_setState( void ) {
  stateLevel_1 = state_codeSpace_startIcon;
  state_codeSpace_setState();
}

void state_codeSpace_startIcon_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_codeSpace_startIcon_finalization();
    // set the current state to the state we are transitioning to
    state_codeSpace_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
}

void state_codeSpace_startIcon_finalization( void ) {
  
  state_codeSpace_finalization();
}

const uint8 state_system_on = 2;

void state_system_on_execute( void ) {
  if (changeState || stateLevel_0 != state_system_on)
    return;

  state_system_on_transition();

  // execute all substates
  state_system_on_Settings_execute();
  state_system_on_idle_execute();
  state_system_on_ScanForApp_execute();
  state_system_on_startIcon_execute();
  state_system_on_PowerAssistToggle_execute();
  state_system_on_DisplayInfo_execute();
  state_system_on_ShowSpeed_execute();

  if (changeState == 0) {
    adc_time+=TICKS_TO_MS(stateDelay);
    info_update_time +=TICKS_TO_MS(stateDelay);
    if(quad_mode_ready&&(SD_status==SD_off))
    {
      quad_mode_time +=TICKS_TO_MS(stateDelay);
      if(quad_mode_time>15000) // 15s 
      {
        if((btn_left_hold_time==0)&&(btn_right_hold_time==0))
        {quad_mode_ready = 0;
         set_led(blue2,led_off);
      }
      }
      
    }
    if(adc_time>1000)
    {	
      adc_time=0;
      start_adc(BATTERY_ADC_INPUT, BATTERY_ADC_DECIMATION, BATTERY_ADC_REF);
    }
    
    if(adc_stable_time<60000)
    {
      adc_stable = false;
    	adc_stable_time+=TICKS_TO_MS(stateDelay);
    }
    else
    {
    	adc_stable =  true;
    }
    
    if(pre_info_update_time<=5000 && info_update_time>5000)  // send journey info at the 5th second every 10s.
    {
     if((connected&connection_app) && (appInitDone))
      {
        if(journeyState == Journey_State_Started)
        {
          packet_data.journeyInfo.pushes	=journeyPushes;
          packet_data.journeyInfo.distance	=journeyDistance;
          packet_data.journeyInfo.speed		=journeySpeed;
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_JourneyInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.journeyInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.journeyInfo)+2);
        }
      }
    }
    if(info_update_time>10000)  // 10s per update
    {
    	info_update_time=0;
      if((connected&connection_app) && (appInitDone))
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
        wb_data[0]=Packet_Type_Data;
        wb_data[1]=Packet_Data_DailyInfo;
        memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.dailyInfo));
        gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.dailyInfo)+2);
        if(journeyState == Journey_State_Started)
        {
          packet_data.journeyInfo.pushes	=journeyPushes;
          packet_data.journeyInfo.distance	=journeyDistance;
          packet_data.journeyInfo.speed		=journeySpeed;
          wb_data[0]=Packet_Type_Data;
          wb_data[1]=Packet_Data_JourneyInfo;
          memcpy(&wb_data[2],packet_data.bytes,sizeof(packet_data.journeyInfo));
          gatt_write_attribute(connection_handle_app,att_handle_app_WB_data,wb_data,sizeof(packet_data.journeyInfo)+2);
        }
      }
      
    }
    pre_info_update_time =info_update_time;
    
    
    rtc_time+=TICKS_TO_MS(stateDelay);
    check_rtc();
    watchdog_kick();
  }
}

void state_system_on_setState( void ) {
  stateLevel_0 = state_system_on;
}

void state_system_on_transition( void ) {
  if (changeState)
    return;
  else if ( OTAing ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_finalization();
    // set the current state to the state we are transitioning to
    state_OTA_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    SD_status=SD_off;
    disconnect_Du();
    OTAProgress = 0;
    OTAReceived = 0;
    display_sleep(oled_wakeup);
    clear_dram();
    dram_ptr=0;
    

  }
  else if ( (btn_left_hold)&&(!setting_mode) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_finalization();
    // set the current state to the state we are transitioning to
    state_sleep_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    
    //sysInitDone = 0;
    btn_left_hold=0;
    btn_left_pressed = 0;
    btn_right_pressed = 0;
    
    ble_radio_state = Radio_off;
    AppState = App_off;
    SD_status=SD_off;
    scanning_stop();
    AppConnectionStatus=AppRadioOff;
    DuConnectionStatus=DuRadioOff;
    disconnect_device();
    
    set_led_event();
    //set_led_all(led_off);
    state_time = 0;
    clear_dram();
    display_sleep(oled_wakeup);
    display_sleepIcon(0);
    dram_ptr=0;
    scrolling=scroll_hor;
    set_led_all(led_off);
    display_write();
    

  }
}

void state_system_on_finalization( void ) {
  
}

const uint8 state_system_on_Settings = 3;

void state_system_on_Settings_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_Settings)
    return;

  state_system_on_Settings_transition();

  // execute all substates
  state_system_on_Settings_SettingTime_execute();
  state_system_on_Settings_PairMx2plus_execute();
  state_system_on_Settings_DeviceInfo_execute();
  state_system_on_Settings_PairPhone_execute();
  state_system_on_Settings_exit_execute();
  state_system_on_Settings_VerScrolling_execute();
  state_system_on_Settings_SettingInit_execute();
  state_system_on_Settings_SetSmartDriveOptions_execute();
  state_system_on_Settings_SetUnits_execute();

  if (changeState == 0) {
    
    if(ble_radio_state!=Radio_pairing)
    state_time+=TICKS_TO_MS(stateDelay);
    if(state_time>1000*15) // 15 seconds
      setting_timeout=1;
  }
}

void state_system_on_Settings_setState( void ) {
  stateLevel_1 = state_system_on_Settings;
  state_system_on_setState();
}

void state_system_on_Settings_transition( void ) {
  if (changeState)
    return;
  else if ( (setting_done)||(setting_timeout) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        setting_mode =0;
    pairing_phone=0;
    pairing_mx2plus=0;
    saveSettings();
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
}

void state_system_on_Settings_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_Settings_SettingTime = 2;

void state_system_on_Settings_SettingTime_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_SettingTime)
    return;

  state_system_on_Settings_SettingTime_transition();

  // execute all substates
  state_system_on_Settings_SettingTime_SettingTime_execute();
  state_system_on_Settings_SettingTime_SetTimeInit_execute();

  if (changeState == 0) {
    flashTime+=TICKS_TO_MS(stateDelay);
  }
}

void state_system_on_Settings_SettingTime_setState( void ) {
  stateLevel_2 = state_system_on_Settings_SettingTime;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_SettingTime_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SettingTime_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime = 0;

void state_system_on_Settings_SettingTime_SettingTime_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SettingTime_SettingTime)
    return;

  state_system_on_Settings_SettingTime_SettingTime_transition();

  // execute all substates
  state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_execute();
  state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_execute();
  state_system_on_Settings_SettingTime_SettingTime_Setting_Day_execute();
  state_system_on_Settings_SettingTime_SettingTime_Setting_Month_execute();
  state_system_on_Settings_SettingTime_SettingTime_Setting_Year_execute();
  state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_execute();
  state_system_on_Settings_SettingTime_SettingTime_SettingHours_execute();
  state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SettingTime_SettingTime_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SettingTime_SettingTime;
  state_system_on_Settings_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_transition( void ) {
  if (changeState)
    return;
  else if ( timeSettingFinished ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SetTimeInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    
    clear_btn_state();
    clear_dram();
    display_setClock(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SettingTime_SettingTime_finalization( void ) {
  set_rtc();
  state_system_on_Settings_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes = 0;

void state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes)
    return;

  state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_transition();

  // execute all substates

  if (changeState == 0) {
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      currentTime.minute = (currentTime.minute + 10) % 60;
      
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_timeBlank(0, TimeMask_TenMinute);
    else
      display_time(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    display_time(64);
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens = 1;

void state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens)
    return;

  state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_transition();

  // execute all substates

  if (changeState == 0) {
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      int tens = currentTime.year / 10;
      int year = currentTime.year % 10;
      tens = (tens + 1) % 10;
      currentTime.year = tens * 10 + year + 2000;
    
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_dateBlank(0, TimeMask_TenYear);
    else
      display_date(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_Setting_Year_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_Setting_Day = 2;

void state_system_on_Settings_SettingTime_SettingTime_Setting_Day_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_Setting_Day)
    return;

  state_system_on_Settings_SettingTime_SettingTime_Setting_Day_transition();

  // execute all substates

  if (changeState == 0) {
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    int daysInMonth[] = {
      31,
      28,
      31,
      30,
      31,
      30,
      31,
      31,
      30,
      31,
      30,
      31
    };
    
    if (currentTime.year / 4 == currentTime.year % 4)
      daysInMonth[1] = 29;
    
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      currentTime.day = (currentTime.day + 1) % (daysInMonth[currentTime.month - 1]+1);
      if (currentTime.day == 0)
        currentTime.day = 1;
    
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_dateBlank(0, TimeMask_Day);
    else
      display_date(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Day_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_Setting_Day;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Day_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_Setting_Day_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_Setting_YearTens_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Day_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_Setting_Month = 3;

void state_system_on_Settings_SettingTime_SettingTime_Setting_Month_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_Setting_Month)
    return;

  state_system_on_Settings_SettingTime_SettingTime_Setting_Month_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      // if we use accel to change time:
      //  -- ?
      // if we use button to change time:
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        flashTime = 0;
        haveRespondedToButton = true;
        currentTime.month = (currentTime.month + 1) % 13;
        if (currentTime.month == 0)
          currentTime.month = 1;
    
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      // need to flash here!
      int flashMod = flashTime % 300;
      if (flashMod > 200 && flashMod < 700) 
        display_dateBlank(0, TimeMask_Month);
      else
        display_date(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Month_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_Setting_Month;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Month_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_Setting_Month_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_Setting_Day_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    display_time(64);
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Month_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_Setting_Year = 4;

void state_system_on_Settings_SettingTime_SettingTime_Setting_Year_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_Setting_Year)
    return;

  state_system_on_Settings_SettingTime_SettingTime_Setting_Year_transition();

  // execute all substates

  if (changeState == 0) {
    if (SETTING_UNSELECT_BTN) {
      timeSettingFinished = true;
    }
    
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      int tens = (currentTime.year%100) / 10;
      int year = currentTime.year % 10;
      year = (year + 1) % 10;
      currentTime.year = tens * 10 + year + 2000;
    
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_dateBlank(0, TimeMask_Year);
    else
      display_date(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Year_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_Setting_Year;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Year_transition( void ) {
  if (changeState)
    return;
}

void state_system_on_Settings_SettingTime_SettingTime_Setting_Year_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat = 5;

void state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat)
    return;

  state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_transition();

  // execute all substates

  if (changeState == 0) {
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      if (currentTime.displaySetting == TimeDisplay12)
        currentTime.displaySetting = TimeDisplay24;
      else
        currentTime.displaySetting = TimeDisplay12;
    
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_timeBlank(0, TimeMask_TimeAll);
    else
      display_time(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_Setting_Month_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    flashTime = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    
    display_date(64);
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_SettingHours = 6;

void state_system_on_Settings_SettingTime_SettingTime_SettingHours_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_SettingHours)
    return;

  state_system_on_Settings_SettingTime_SettingTime_SettingHours_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      // if we use accel to change time:
      //  -- ?
      // if we use button to change time:
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        flashTime = 0;
        haveRespondedToButton = true;
        currentTime.hour = (currentTime.hour + 1) % 24;
       
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      // need to flash here!
      int flashMod = flashTime % 300;
      if (flashMod > 200 && flashMod < 700) 
        display_timeBlank(0, TimeMask_Hour);
      else
        display_time(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingHours_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_SettingHours;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_SettingHours_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_SettingHours_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_SettingTenMinutes_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    display_time(64);
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingHours_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SettingTime_SettingMinutes = 7;

void state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SettingTime_SettingTime_SettingMinutes)
    return;

  state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_transition();

  // execute all substates

  if (changeState == 0) {
    // if we use accel to change time:
    //  -- ?
    // if we use button to change time:
    if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
    {
      state_time = 0;
      flashTime = 0;
      haveRespondedToButton = true;
      uint8 tens = currentTime.minute / 10;
      uint8 minute = currentTime.minute % 10;
      minute = (minute + 1) % 10;
      currentTime.minute = tens * 10 + minute;
    
    }
    else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
      haveRespondedToButton = false;
    }
    clear_dram();
    int flashMod = flashTime % 300;
    if (flashMod > 200 && flashMod < 700) 
      display_timeBlank(0, TimeMask_Minute);
    else
      display_time(0);
    display_write();
  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SettingTime_SettingTime_SettingMinutes;
  state_system_on_Settings_SettingTime_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_SettingTimeFormat_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    state_time = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    flashTime = 0;
    display_time(64);
    

  }
}

void state_system_on_Settings_SettingTime_SettingTime_SettingMinutes_finalization( void ) {
  
  state_system_on_Settings_SettingTime_SettingTime_finalization();
}

const uint8 state_system_on_Settings_SettingTime_SetTimeInit = 1;

void state_system_on_Settings_SettingTime_SetTimeInit_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SettingTime_SetTimeInit)
    return;

  state_system_on_Settings_SettingTime_SetTimeInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_SettingTime_SetTimeInit_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SettingTime_SetTimeInit;
  state_system_on_Settings_SettingTime_setState();
}

void state_system_on_Settings_SettingTime_SetTimeInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingTime_SetTimeInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SettingTime_SettingHours_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        read_rtc();
    read_rtc();
    timeSettingFinished = false;
    
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    flashTime = 0;
    SETTING_SELECT_BTN = 0;
    NEXT_SETTING_BTN = 0;
    
    display_time(64);
    

  }
}

void state_system_on_Settings_SettingTime_SetTimeInit_finalization( void ) {
  
  state_system_on_Settings_SettingTime_finalization();
}

const uint8 state_system_on_Settings_PairMx2plus = 3;

void state_system_on_Settings_PairMx2plus_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_PairMx2plus)
    return;

  state_system_on_Settings_PairMx2plus_transition();

  // execute all substates
  state_system_on_Settings_PairMx2plus_PairMx2plusInit_execute();
  state_system_on_Settings_PairMx2plus_PairingMx2plus_execute();
  state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_execute();
  state_system_on_Settings_PairMx2plus_PairingMx2plusDone_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_PairMx2plus_setState( void ) {
  stateLevel_2 = state_system_on_Settings_PairMx2plus;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_PairMx2plus_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_PairMx2plus_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_PairMx2plus_PairMx2plusInit = 2;

void state_system_on_Settings_PairMx2plus_PairMx2plusInit_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairMx2plus_PairMx2plusInit)
    return;

  state_system_on_Settings_PairMx2plus_PairMx2plusInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_PairMx2plus_PairMx2plusInit_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairMx2plus_PairMx2plusInit;
  state_system_on_Settings_PairMx2plus_setState();
}

void state_system_on_Settings_PairMx2plus_PairMx2plusInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairMx2plusInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairingMx2plus_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    pairing_time=0;
    clear_dram();
    display_connectingSD(0,1);
    display_write();
    state_time=0;
    
    clear_btn_state();
    pairing_phone=0;
    pairing_mx2plus=1;
    ble_radio_state=Radio_pairing;
    scan_timeout = 0;
    pairing_canceled=0;
    scanningDu_start();

  }
}

void state_system_on_Settings_PairMx2plus_PairMx2plusInit_finalization( void ) {
  
  state_system_on_Settings_PairMx2plus_finalization();
}

const uint8 state_system_on_Settings_PairMx2plus_PairingMx2plus = 3;

void state_system_on_Settings_PairMx2plus_PairingMx2plus_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairMx2plus_PairingMx2plus)
    return;

  state_system_on_Settings_PairMx2plus_PairingMx2plus_transition();

  // execute all substates

  if (changeState == 0) {
    pairing_time += TICKS_TO_MS(stateDelay);
    if((pairing_time %1000)<500)
    {
      	clear_dram();
    	display_connectingSD(0,1);
    }
    else
    {
      	clear_dram();
    	display_connectingSD(0,0);
    }
    
    display_write();

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plus_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairMx2plus_PairingMx2plus;
  state_system_on_Settings_PairMx2plus_setState();
}

void state_system_on_Settings_PairMx2plus_PairingMx2plus_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairingMx2plus_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairMx2plusInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    clear_btn_state();
    clear_dram();
    display_pairSD(0);
    display_write();
    ble_radio_state=Radio_off;
    scanningDu_stop();
    disconnect_Du();
    pairing_mx2plus=0;
    state_time = 0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( pairing_du_failed ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairingMx2plus_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    clear_dram();
    display_pairSDFailed(0);
    display_write();
    
    clear_btn_state();
    ble_radio_state=Radio_off;
    pairing_du_failed=0;
    state_time = 0;

  }
  else if ( du_paired ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairingMx2plus_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairingMx2plusDone_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    
    clear_btn_state();
    clear_dram();
    display_pairSDSuccess(0);
    display_write();
    du_paired=0;
    ble_radio_state=Radio_off;
    state_time = 0;

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plus_finalization( void ) {
  
  state_system_on_Settings_PairMx2plus_finalization();
}

const uint8 state_system_on_Settings_PairMx2plus_PairingMx2plusFailed = 4;

void state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairMx2plus_PairingMx2plusFailed)
    return;

  state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_transition();

  // execute all substates

  if (changeState == 0) {

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairMx2plus_PairingMx2plusFailed;
  state_system_on_Settings_PairMx2plus_setState();
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN || SETTING_CHANGE_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairMx2plusInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    clear_btn_state();
    clear_dram();
    display_pairSD(0);
    display_write();
    ble_radio_state=Radio_off;
    scanningDu_stop();
    disconnect_Du();
    pairing_mx2plus=0;
    state_time = 0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusFailed_finalization( void ) {
  
  state_system_on_Settings_PairMx2plus_finalization();
}

const uint8 state_system_on_Settings_PairMx2plus_PairingMx2plusDone = 5;

void state_system_on_Settings_PairMx2plus_PairingMx2plusDone_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairMx2plus_PairingMx2plusDone)
    return;

  state_system_on_Settings_PairMx2plus_PairingMx2plusDone_transition();

  // execute all substates

  if (changeState == 0) {

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusDone_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairMx2plus_PairingMx2plusDone;
  state_system_on_Settings_PairMx2plus_setState();
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusDone_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN || SETTING_CHANGE_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairMx2plus_PairingMx2plusDone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairMx2plusInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    clear_btn_state();
    clear_dram();
    display_pairSD(0);
    display_write();
    ble_radio_state=Radio_off;
    scanningDu_stop();
    disconnect_Du();
    pairing_mx2plus=0;
    state_time = 0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_PairMx2plus_PairingMx2plusDone_finalization( void ) {
  
  state_system_on_Settings_PairMx2plus_finalization();
}

const uint8 state_system_on_Settings_DeviceInfo = 4;

void state_system_on_Settings_DeviceInfo_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_DeviceInfo)
    return;

  state_system_on_Settings_DeviceInfo_transition();

  // execute all substates
  state_system_on_Settings_DeviceInfo_DisplayVersion_execute();
  state_system_on_Settings_DeviceInfo_DisplayErrorType_execute();
  state_system_on_Settings_DeviceInfo_init_execute();
  state_system_on_Settings_DeviceInfo_DisplayError_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_DeviceInfo_setState( void ) {
  stateLevel_2 = state_system_on_Settings_DeviceInfo;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_DeviceInfo_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_DeviceInfo_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_DeviceInfo_DisplayVersion = 6;

void state_system_on_Settings_DeviceInfo_DisplayVersion_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_DeviceInfo_DisplayVersion)
    return;

  state_system_on_Settings_DeviceInfo_DisplayVersion_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      
      clear_dram();
      display_Version(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_DeviceInfo_DisplayVersion_setState( void ) {
  stateLevel_3 = state_system_on_Settings_DeviceInfo_DisplayVersion;
  state_system_on_Settings_DeviceInfo_setState();
}

void state_system_on_Settings_DeviceInfo_DisplayVersion_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_CHANGE_BTN ||SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_DisplayVersion_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_DisplayError_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_Error(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_DeviceInfo_DisplayVersion_finalization( void ) {
  
  state_system_on_Settings_DeviceInfo_finalization();
}

const uint8 state_system_on_Settings_DeviceInfo_DisplayErrorType = 7;

void state_system_on_Settings_DeviceInfo_DisplayErrorType_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_DeviceInfo_DisplayErrorType)
    return;

  state_system_on_Settings_DeviceInfo_DisplayErrorType_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    
      clear_dram();
      display_ErrorType(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_DeviceInfo_DisplayErrorType_setState( void ) {
  stateLevel_3 = state_system_on_Settings_DeviceInfo_DisplayErrorType;
  state_system_on_Settings_DeviceInfo_setState();
}

void state_system_on_Settings_DeviceInfo_DisplayErrorType_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_CHANGE_BTN ||SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_DisplayErrorType_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    setting_next = 0;
    clear_btn_state();
    clear_dram();
    display_DeviceInfo(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_DeviceInfo_DisplayErrorType_finalization( void ) {
  
  state_system_on_Settings_DeviceInfo_finalization();
}

const uint8 state_system_on_Settings_DeviceInfo_init = 8;

void state_system_on_Settings_DeviceInfo_init_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_DeviceInfo_init)
    return;

  state_system_on_Settings_DeviceInfo_init_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_DeviceInfo_init_setState( void ) {
  stateLevel_3 = state_system_on_Settings_DeviceInfo_init;
  state_system_on_Settings_DeviceInfo_setState();
}

void state_system_on_Settings_DeviceInfo_init_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_init_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_DisplayVersion_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_Version(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_DeviceInfo_init_finalization( void ) {
  
  state_system_on_Settings_DeviceInfo_finalization();
}

const uint8 state_system_on_Settings_DeviceInfo_DisplayError = 9;

void state_system_on_Settings_DeviceInfo_DisplayError_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_DeviceInfo_DisplayError)
    return;

  state_system_on_Settings_DeviceInfo_DisplayError_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    
      clear_dram();
      display_Error(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_DeviceInfo_DisplayError_setState( void ) {
  stateLevel_3 = state_system_on_Settings_DeviceInfo_DisplayError;
  state_system_on_Settings_DeviceInfo_setState();
}

void state_system_on_Settings_DeviceInfo_DisplayError_transition( void ) {
  if (changeState)
    return;
  else if ( (SETTING_CHANGE_BTN ||SETTING_SELECT_BTN)&&(errorInfo.error_type==Packet_Error_NoError) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_DisplayError_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    setting_next = 0;
    clear_btn_state();
    clear_dram();
    display_DeviceInfo(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( (SETTING_CHANGE_BTN ||SETTING_SELECT_BTN)&&(errorInfo.error_type) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_DeviceInfo_DisplayError_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_DisplayErrorType_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_ErrorType(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_DeviceInfo_DisplayError_finalization( void ) {
  
  state_system_on_Settings_DeviceInfo_finalization();
}

const uint8 state_system_on_Settings_PairPhone = 5;

void state_system_on_Settings_PairPhone_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_PairPhone)
    return;

  state_system_on_Settings_PairPhone_transition();

  // execute all substates
  state_system_on_Settings_PairPhone_PairPhoneInit_execute();
  state_system_on_Settings_PairPhone_PairingPhone_execute();
  state_system_on_Settings_PairPhone_PairingPhoneFailed_execute();
  state_system_on_Settings_PairPhone_PairingPhoneDone_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_PairPhone_setState( void ) {
  stateLevel_2 = state_system_on_Settings_PairPhone;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_PairPhone_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_PairPhone_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_PairPhone_PairPhoneInit = 10;

void state_system_on_Settings_PairPhone_PairPhoneInit_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairPhone_PairPhoneInit)
    return;

  state_system_on_Settings_PairPhone_PairPhoneInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_PairPhone_PairPhoneInit_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairPhone_PairPhoneInit;
  state_system_on_Settings_PairPhone_setState();
}

void state_system_on_Settings_PairPhone_PairPhoneInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairPhoneInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairingPhone_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    clear_dram();
    pairing_time = 0;
    state_time=0;
    
    display_connectingPhone(0,1);
    display_write();
    clear_btn_state();
    pairing_phone=1;
    pairing_mx2plus=0;
    pairing_canceled=0;
    pairing_phone_failed = 0;
    ble_radio_state=Radio_pairing;
    scan_timeout = 0;
    
    scanningApp_start();

  }
}

void state_system_on_Settings_PairPhone_PairPhoneInit_finalization( void ) {
  
  state_system_on_Settings_PairPhone_finalization();
}

const uint8 state_system_on_Settings_PairPhone_PairingPhone = 11;

void state_system_on_Settings_PairPhone_PairingPhone_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairPhone_PairingPhone)
    return;

  state_system_on_Settings_PairPhone_PairingPhone_transition();

  // execute all substates

  if (changeState == 0) {
    pairing_time += TICKS_TO_MS(stateDelay);
    if((pairing_time %1000)<500)
    {
      	clear_dram();
    	display_connectingPhone(0,1);
    }
    else
    {
      	clear_dram();
    	display_connectingPhone(0,0);
    }
    display_write();
  }
}

void state_system_on_Settings_PairPhone_PairingPhone_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairPhone_PairingPhone;
  state_system_on_Settings_PairPhone_setState();
}

void state_system_on_Settings_PairPhone_PairingPhone_transition( void ) {
  if (changeState)
    return;
  else if ( app_paired ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairingPhone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairingPhoneDone_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    state_time = 0;
    
    clear_dram();
    display_pairPhoneSuccess(0);
    display_write();
    ble_radio_state=Radio_off;
    app_paired=0;

  }
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairingPhone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairPhoneInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    clear_btn_state();
    clear_dram();
    display_pairPhone(0);
    display_write();
    pairing_canceled=0;
    ble_radio_state=Radio_off;
    scanningApp_stop();
    disconnect_App();
    pairing_phone=0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;
    
    

  }
  else if ( pairing_phone_failed ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairingPhone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairingPhoneFailed_setState();
    // start state timer (@ next states period)
    stateDelay = 6553;
    // execute the transition function
        
    clear_dram();
    display_pairPhoneFailed(0);
    display_write();
    
    ble_radio_state=Radio_off;
    pairing_phone_failed=0;
    state_time = 0;

  }
}

void state_system_on_Settings_PairPhone_PairingPhone_finalization( void ) {
  
  state_system_on_Settings_PairPhone_finalization();
}

const uint8 state_system_on_Settings_PairPhone_PairingPhoneFailed = 12;

void state_system_on_Settings_PairPhone_PairingPhoneFailed_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairPhone_PairingPhoneFailed)
    return;

  state_system_on_Settings_PairPhone_PairingPhoneFailed_transition();

  // execute all substates

  if (changeState == 0) {

  }
}

void state_system_on_Settings_PairPhone_PairingPhoneFailed_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairPhone_PairingPhoneFailed;
  state_system_on_Settings_PairPhone_setState();
}

void state_system_on_Settings_PairPhone_PairingPhoneFailed_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ||SETTING_CHANGE_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairingPhoneFailed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairPhoneInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        SETTING_UNSELECT_BTN=0;
    clear_btn_state();
    clear_dram();
    display_pairPhone(0);
    display_write();
    pairing_canceled=0;
    ble_radio_state=Radio_off;
    scanningApp_stop();
    disconnect_App();
    pairing_phone=0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;
    
    

  }
}

void state_system_on_Settings_PairPhone_PairingPhoneFailed_finalization( void ) {
  
  state_system_on_Settings_PairPhone_finalization();
}

const uint8 state_system_on_Settings_PairPhone_PairingPhoneDone = 13;

void state_system_on_Settings_PairPhone_PairingPhoneDone_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_PairPhone_PairingPhoneDone)
    return;

  state_system_on_Settings_PairPhone_PairingPhoneDone_transition();

  // execute all substates

  if (changeState == 0) {
    

  }
}

void state_system_on_Settings_PairPhone_PairingPhoneDone_setState( void ) {
  stateLevel_3 = state_system_on_Settings_PairPhone_PairingPhoneDone;
  state_system_on_Settings_PairPhone_setState();
}

void state_system_on_Settings_PairPhone_PairingPhoneDone_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ||SETTING_CHANGE_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_PairPhone_PairingPhoneDone_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairPhoneInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        SETTING_UNSELECT_BTN = 0;
    clear_btn_state();
    clear_dram();
    display_pairPhone(0);
    display_write();
    pairing_canceled=0;
    ble_radio_state=Radio_off;
    scanningApp_stop();
    disconnect_App();
    pairing_phone=0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;
    
    

  }
}

void state_system_on_Settings_PairPhone_PairingPhoneDone_finalization( void ) {
  
  state_system_on_Settings_PairPhone_finalization();
}

const uint8 state_system_on_Settings_exit = 6;

void state_system_on_Settings_exit_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_exit)
    return;

  state_system_on_Settings_exit_transition();

  // execute all substates

  if (changeState == 0) {
    if(SETTING_SELECT_BTN)
    {
    	setting_done=1;
      SETTING_SELECT_BTN=0;
    }
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_exit_setState( void ) {
  stateLevel_2 = state_system_on_Settings_exit;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_exit_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_exit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_exit_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_VerScrolling = 7;

void state_system_on_Settings_VerScrolling_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_VerScrolling)
    return;

  state_system_on_Settings_VerScrolling_transition();

  // execute all substates

  if (changeState == 0) {
    
    
    if (scrollingDone) {
    }
    else {
      display_write();
      display_scrolling();
    }

  }
}

void state_system_on_Settings_VerScrolling_setState( void ) {
  stateLevel_2 = state_system_on_Settings_VerScrolling;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_VerScrolling_transition( void ) {
  if (changeState)
    return;
  else if ( scrollingDone&&menu_select==menu_pairPhone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairPhone_PairPhoneInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time=0;
    setting_next=0;
    scrollingDone=0;
    btn_left_pressed = 0;
    
    clear_btn_state();
    clear_dram();
    display_pairPhone(0);
    display_write();
    pairing_canceled=0;
    ble_radio_state=Radio_off;
    scanningApp_stop();
    disconnect_App();
    pairing_phone=0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;
    
    

  }
  else if ( scrollingDone&&menu_select==menu_setUnits ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetUnits_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    menu_select = menu_setUnits;
    
    state_time = 0;
    setting_next = 0;
    clear_btn_state();
    clear_dram();
    display_setUnits(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone&&menu_select==menu_pairMx2plus ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_PairMx2plus_PairMx2plusInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time=0;
    setting_next=0;
    btn_left_pressed = 0;
    
    clear_btn_state();
    clear_dram();
    display_pairSD(0);
    display_write();
    ble_radio_state=Radio_off;
    scanningDu_stop();
    disconnect_Du();
    pairing_mx2plus=0;
    state_time = 0;
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone&&menu_select==menu_settingTime ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingTime_SetTimeInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    
    
    state_time = 0;
    
    clear_btn_state();
    clear_dram();
    display_setClock(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone&&menu_select==menu_exit ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_exit_setState();
    // start state timer (@ next states period)
    stateDelay = 1638;
    // execute the transition function
        
    state_time=0;
    clear_dram();
    display_exitSettings(0);
    display_write();
    clear_btn_state();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone&&menu_select==menu_DeviceInfo ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_DeviceInfo_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    
    
    state_time = 0;
    setting_next = 0;
    clear_btn_state();
    clear_dram();
    display_DeviceInfo(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone&&menu_select==menu_setSmartDriveOptions ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_Init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    
    state_time = 0;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setSDOptions(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_VerScrolling_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_SettingInit = 8;

void state_system_on_Settings_SettingInit_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_SettingInit)
    return;

  state_system_on_Settings_SettingInit_transition();

  // execute all substates

  if (changeState == 0) {
    if(state_time > 1000)
    {
      setting_next = 1;
      //menu_select = menu_exit;
    }
  }
}

void state_system_on_Settings_SettingInit_setState( void ) {
  stateLevel_2 = state_system_on_Settings_SettingInit;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_SettingInit_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SettingInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SettingInit_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions = 9;

void state_system_on_Settings_SetSmartDriveOptions_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_SetSmartDriveOptions)
    return;

  state_system_on_Settings_SetSmartDriveOptions_transition();

  // execute all substates
  state_system_on_Settings_SetSmartDriveOptions_ScrollOut_execute();
  state_system_on_Settings_SetSmartDriveOptions_ScrollIn_execute();
  state_system_on_Settings_SetSmartDriveOptions_Init_execute();
  state_system_on_Settings_SetSmartDriveOptions_VerScrolling_execute();
  state_system_on_Settings_SetSmartDriveOptions_Back_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetSmartDriveOptions_setState( void ) {
  stateLevel_2 = state_system_on_Settings_SetSmartDriveOptions;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_ScrollOut = 14;

void state_system_on_Settings_SetSmartDriveOptions_ScrollOut_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_ScrollOut)
    return;

  state_system_on_Settings_SetSmartDriveOptions_ScrollOut_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollOut_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_ScrollOut;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollOut_transition( void ) {
  if (changeState)
    return;
  else if ( scrollingDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_ScrollOut_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_Init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setSDOptions(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollOut_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_ScrollIn = 15;

void state_system_on_Settings_SetSmartDriveOptions_ScrollIn_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_ScrollIn)
    return;

  state_system_on_Settings_SetSmartDriveOptions_ScrollIn_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollIn_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_ScrollIn;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollIn_transition( void ) {
  if (changeState)
    return;
  else if ( scrollingDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_ScrollIn_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    scrollingDone=0;
    state_time = 0;
    sdOptions_select = sdOptions_setMaxSpeed;
    sdOptions_next = 0;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setMaxSpeed(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_ScrollIn_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_Init = 16;

void state_system_on_Settings_SetSmartDriveOptions_Init_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_Init)
    return;

  state_system_on_Settings_SetSmartDriveOptions_Init_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_Init_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_Init;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_Init_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_Init_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_ScrollIn_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_setMaxSpeed(64);

  }
}

void state_system_on_Settings_SetSmartDriveOptions_Init_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_VerScrolling = 17;

void state_system_on_Settings_SetSmartDriveOptions_VerScrolling_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_VerScrolling)
    return;

  state_system_on_Settings_SetSmartDriveOptions_VerScrolling_transition();

  // execute all substates

  if (changeState == 0) {
    
    
    if (scrollingDone) {
    }
    else {
      display_write();
      display_scrolling();
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_VerScrolling;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_VerScrolling_transition( void ) {
  if (changeState)
    return;
  else if ( scrollingDone && sdOptions_select == sdOptions_setMaxSpeed ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    scrollingDone=0;
    state_time = 0;
    sdOptions_select = sdOptions_setMaxSpeed;
    sdOptions_next = 0;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setMaxSpeed(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone && sdOptions_select == sdOptions_back ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_Back_setState();
    // start state timer (@ next states period)
    stateDelay = 1638;
    // execute the transition function
        
    state_time=0;
    sdOptions_select = sdOptions_back;
    clear_dram();
    display_sdOptions_back(0);
    display_write();
    clear_btn_state();
    

  }
  else if ( scrollingDone && sdOptions_select == sdOptions_setControlMode ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    sdOptions_select = sdOptions_setControlMode;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setControlMode(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone && sdOptions_select == sdOptions_setTapSensitivity ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    sdOptions_select = sdOptions_setTapSensitivity;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setTapSensitivity(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
  else if ( scrollingDone && sdOptions_select == sdOptions_setAcceleration ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    sdOptions_select = sdOptions_setAcceleration;
    sdOptions_next = 0;
    
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setAccel(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_VerScrolling_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_Back = 18;

void state_system_on_Settings_SetSmartDriveOptions_Back_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_Back)
    return;

  state_system_on_Settings_SetSmartDriveOptions_Back_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	sdOptions_next = 1;	
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_Back_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_Back;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_Back_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_Back_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_ScrollOut_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_right;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setSDOptions(0);
    display_sdOptions_back(64);
    dram_ptr = 64*4;
    display_write();

  }
  else if ( sdOptions_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_Back_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    sdOptions_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (sdOptions_select) {
      case sdOptions_setMaxSpeed:
        sdOptions_select=sdOptions_setAcceleration;
        display_setAccel(64);
        break;
      case sdOptions_setAcceleration:
        sdOptions_select=sdOptions_setTapSensitivity;
        display_setTapSensitivity(64);
        break;
      case sdOptions_setTapSensitivity:
        sdOptions_select=sdOptions_setControlMode;
        display_setControlMode(64);
        break;
      case sdOptions_setControlMode:
        sdOptions_select=sdOptions_back;
        display_sdOptions_back(64);
        break;
      case sdOptions_back:
        sdOptions_select=sdOptions_setMaxSpeed;
        display_setMaxSpeed(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_Back_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed = 19;

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_transition();

  // execute all substates
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_transition( void ) {
  if (changeState)
    return;
  else if ( sdOptions_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    sdOptions_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (sdOptions_select) {
      case sdOptions_setMaxSpeed:
        sdOptions_select=sdOptions_setAcceleration;
        display_setAccel(64);
        break;
      case sdOptions_setAcceleration:
        sdOptions_select=sdOptions_setTapSensitivity;
        display_setTapSensitivity(64);
        break;
      case sdOptions_setTapSensitivity:
        sdOptions_select=sdOptions_setControlMode;
        display_setControlMode(64);
        break;
      case sdOptions_setControlMode:
        sdOptions_select=sdOptions_back;
        display_sdOptions_back(64);
        break;
      case sdOptions_back:
        sdOptions_select=sdOptions_setMaxSpeed;
        display_setMaxSpeed(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn = 8;

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    if (state_time < 400) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time >= 1000 && state_time < 2000) {
      display_instructionIcon((SCREEN_WIDTH - instructionIcon_WIDTH)/2);
    }
    else if (state_time >= 2000) {
      displayDone = 1;
    }
    display_write();

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn;
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    char string[10];
    sprintf(string, "%d%%", (int)(SDSettings.maxSpeed*100));
    display_largeCentered(string, 64);
    display_numberMenu(64);
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit = 9;

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	sdOptions_next = 1;	
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit;
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_Warn_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed = 10;

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      if (!haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) {
        state_time = 0;
        haveRespondedToButton = true;
        SDSettings.maxSpeed += 0.1f;
        if (SDSettings.maxSpeed > maxSpeed_max_setting)
          SDSettings.maxSpeed = maxSpeed_min_setting;
        if (SDSettings.maxSpeed < maxSpeed_min_setting)
          SDSettings.maxSpeed = maxSpeed_min_setting;
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      char string[10];
      sprintf(string, "%d%%", (int)(SDSettings.maxSpeed*100));
      display_largeCentered(string, 0);
      display_numberMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed;
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SetMaxSpeedInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setMaxSpeed(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_SettingMaxSpeed_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetMaxSpeed_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetAcceleration = 20;

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_SetAcceleration)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_transition();

  // execute all substates
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_SetAcceleration;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_transition( void ) {
  if (changeState)
    return;
  else if ( sdOptions_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    sdOptions_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (sdOptions_select) {
      case sdOptions_setMaxSpeed:
        sdOptions_select=sdOptions_setAcceleration;
        display_setAccel(64);
        break;
      case sdOptions_setAcceleration:
        sdOptions_select=sdOptions_setTapSensitivity;
        display_setTapSensitivity(64);
        break;
      case sdOptions_setTapSensitivity:
        sdOptions_select=sdOptions_setControlMode;
        display_setControlMode(64);
        break;
      case sdOptions_setControlMode:
        sdOptions_select=sdOptions_back;
        display_sdOptions_back(64);
        break;
      case sdOptions_back:
        sdOptions_select=sdOptions_setMaxSpeed;
        display_setMaxSpeed(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn = 11;

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    if (state_time < 400) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time >= 1000 && state_time < 2000) {
      display_instructionIcon((SCREEN_WIDTH - instructionIcon_WIDTH)/2);
    }
    else if (state_time >= 2000) {
      displayDone = 1;
    }
    display_write();

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn;
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    char string[10];
    sprintf(string, "%d%%", (int)(SDSettings.acceleration*100));
    display_largeCentered(string, 64);
    display_numberMenu(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit = 12;

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	sdOptions_next = 1;	
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit;
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_Warn_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel = 13;

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        haveRespondedToButton = true;
            
        SDSettings.acceleration += 0.1f;
        if (SDSettings.acceleration > acceleration_max_setting)
          SDSettings.acceleration = acceleration_min_setting;
        if (SDSettings.acceleration < acceleration_min_setting)
          SDSettings.acceleration = acceleration_min_setting;
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      char string[10];
      sprintf(string, "%d%%", (int)(SDSettings.acceleration*100));
      display_largeCentered(string, 0);
      display_numberMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel;
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SetAccelInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setAccel(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_SettingAccel_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetAcceleration_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetControlMode = 21;

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_SetControlMode)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_transition();

  // execute all substates
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_SetControlMode;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_transition( void ) {
  if (changeState)
    return;
  else if ( sdOptions_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    sdOptions_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (sdOptions_select) {
      case sdOptions_setMaxSpeed:
        sdOptions_select=sdOptions_setAcceleration;
        display_setAccel(64);
        break;
      case sdOptions_setAcceleration:
        sdOptions_select=sdOptions_setTapSensitivity;
        display_setTapSensitivity(64);
        break;
      case sdOptions_setTapSensitivity:
        sdOptions_select=sdOptions_setControlMode;
        display_setControlMode(64);
        break;
      case sdOptions_setControlMode:
        sdOptions_select=sdOptions_back;
        display_sdOptions_back(64);
        break;
      case sdOptions_back:
        sdOptions_select=sdOptions_setMaxSpeed;
        display_setMaxSpeed(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn = 14;

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    if (state_time < 400) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time >= 1000 && state_time < 2000) {
      display_instructionIcon((SCREEN_WIDTH - instructionIcon_WIDTH)/2);
    }
    else if (state_time >= 2000) {
      displayDone = 1;
    }
    display_write();

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn;
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_controlMode( 64);
    display_optionMenu( 64 );
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode = 15;

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        haveRespondedToButton = true;
           
        SDSettings.settingsFlags1 = SDSettings.settingsFlags1 ^ (1 << SmartDrive_SettingsFlag_EZMODE);
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      display_ezMode(0);
      display_optionMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode;
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setControlMode(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init = 16;

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	sdOptions_next = 1;	
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init;
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_Warn_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_init_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode = 17;

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        haveRespondedToButton = true;
    
        switch (SDSettings.controlMode) {
          case DU_controlMode_Beginner:
            SDSettings.controlMode = DU_controlMode_Advanced;
            break;
          case DU_controlMode_Intermediate:
            SDSettings.controlMode = DU_controlMode_Beginner;
            break;
          case DU_controlMode_Advanced:
            SDSettings.controlMode = DU_controlMode_Intermediate;
            break;
          default:
            SDSettings.controlMode = DU_controlMode_Advanced;
            break;
        }
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      display_controlMode(0);
      display_optionMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode;
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingEZMode_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_ezMode( 64);
    display_optionMenu( 64 );
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetControlMode_SettingControlMode_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetControlMode_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity = 22;

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_transition();

  // execute all substates
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_execute();
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity;
  state_system_on_Settings_SetSmartDriveOptions_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_transition( void ) {
  if (changeState)
    return;
  else if ( sdOptions_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    sdOptions_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (sdOptions_select) {
      case sdOptions_setMaxSpeed:
        sdOptions_select=sdOptions_setAcceleration;
        display_setAccel(64);
        break;
      case sdOptions_setAcceleration:
        sdOptions_select=sdOptions_setTapSensitivity;
        display_setTapSensitivity(64);
        break;
      case sdOptions_setTapSensitivity:
        sdOptions_select=sdOptions_setControlMode;
        display_setControlMode(64);
        break;
      case sdOptions_setControlMode:
        sdOptions_select=sdOptions_back;
        display_sdOptions_back(64);
        break;
      case sdOptions_back:
        sdOptions_select=sdOptions_setMaxSpeed;
        display_setMaxSpeed(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn = 18;

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    if (state_time < 400) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_warningIcon((SCREEN_WIDTH - warningIcon_WIDTH)/2);
    }
    else if (state_time >= 1000 && state_time < 2000) {
      display_instructionIcon((SCREEN_WIDTH - instructionIcon_WIDTH)/2);
    }
    else if (state_time >= 2000) {
      displayDone = 1;
    }
    display_write();

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn;
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    char string[10];
    sprintf(string, "%d%%", (int)(SDSettings.tapSensitivity*100));
    display_largeCentered(string, 64);
    display_numberMenu(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit = 19;

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	sdOptions_next = 1;	
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit;
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_Warn_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    
    

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_finalization( void ) {
  
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_finalization();
}

const uint8 state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity = 20;

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_execute( void ) {
  if (changeState || stateLevel_4 != state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity)
    return;

  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        haveRespondedToButton = true;
            
        SDSettings.tapSensitivity += 0.1f;
        if (SDSettings.tapSensitivity > tapSensitivity_max_setting)
          SDSettings.tapSensitivity = tapSensitivity_min_setting;
        if (SDSettings.tapSensitivity < tapSensitivity_min_setting)
          SDSettings.tapSensitivity = tapSensitivity_min_setting;
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      char string[10];
      sprintf(string, "%d%%", (int)(SDSettings.tapSensitivity*100));
      display_largeCentered(string, 0);
      display_numberMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_setState( void ) {
  stateLevel_4 = state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity;
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_setState();
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SetTapSensInit_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    clear_btn_state();
    clear_dram();
    display_setTapSensitivity(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_SettingTapSensitivity_finalization( void ) {
  acc_set_tap(SDSettings.tapSensitivity);
  state_system_on_Settings_SetSmartDriveOptions_SetTapSensitivity_finalization();
}

const uint8 state_system_on_Settings_SetUnits = 10;

void state_system_on_Settings_SetUnits_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_Settings_SetUnits)
    return;

  state_system_on_Settings_SetUnits_transition();

  // execute all substates
  state_system_on_Settings_SetUnits_SettingUnits_execute();
  state_system_on_Settings_SetUnits_init_execute();

  if (changeState == 0) {

  }
}

void state_system_on_Settings_SetUnits_setState( void ) {
  stateLevel_2 = state_system_on_Settings_SetUnits;
  state_system_on_Settings_setState();
}

void state_system_on_Settings_SetUnits_transition( void ) {
  if (changeState)
    return;
  else if ( setting_next ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetUnits_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_VerScrolling_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_ver;
    btn_left_pressed = 0;
    setting_next=0;
    dram_ptr=0;
    scrollingDone=0;
    clear_btn_state();
    state_time=0;
    
    switch (menu_select) {
      case menu_setSmartDriveOptions:
        menu_select=menu_settingTime;
        display_setClock(64);
        break;
      case menu_settingTime:
        menu_select=menu_pairPhone;
        display_pairPhone(64);
        break;
      case menu_pairPhone:
        menu_select=menu_pairMx2plus;
        display_pairSD(64);
        break;
      case menu_pairMx2plus:
        menu_select=menu_setUnits;
        display_setUnits(64);
        break;
      case menu_setUnits:
        menu_select=menu_DeviceInfo;
        display_DeviceInfo(64);
        break;
      case menu_DeviceInfo:
        menu_select=menu_exit;
        display_exitSettings(64);
        break;
      case menu_exit:
        menu_select=menu_setSmartDriveOptions;
        display_setSDOptions(64);
        break;
      default:
        break;
    }

  }
}

void state_system_on_Settings_SetUnits_finalization( void ) {
  
  state_system_on_Settings_finalization();
}

const uint8 state_system_on_Settings_SetUnits_SettingUnits = 23;

void state_system_on_Settings_SetUnits_SettingUnits_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetUnits_SettingUnits)
    return;

  state_system_on_Settings_SetUnits_SettingUnits_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
      if ( !haveRespondedToButton && (SETTING_CHANGE_HOLD_TIME % 5) == 1) 
      {
        state_time = 0;
        haveRespondedToButton = true;
    
        switch (SDSettings.units) {
          case Units_English:
            SDSettings.units = Units_Metric;
            break;
          case Units_Metric:
            SDSettings.units = Units_English;
            break;
          default:
            SDSettings.units = Units_English;
            break;
        }
      }
      else if ((SETTING_CHANGE_HOLD_TIME % 5) != 1) {
        haveRespondedToButton = false;
      }
      clear_dram();
      display_units(0);
      display_optionMenu(0);
      display_write();
    }
    else
    {
      display_write();
      display_scrolling();
    }
  }
}

void state_system_on_Settings_SetUnits_SettingUnits_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetUnits_SettingUnits;
  state_system_on_Settings_SetUnits_setState();
}

void state_system_on_Settings_SetUnits_SettingUnits_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_UNSELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetUnits_SettingUnits_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetUnits_init_setState();
    // start state timer (@ next states period)
    stateDelay = 3276;
    // execute the transition function
        
    state_time = 0;
    setting_next = 0;
    clear_btn_state();
    clear_dram();
    display_setUnits(0);
    display_write();
    btn_hold_time_enterState = SETTING_CHANGE_HOLD_TIME;

  }
}

void state_system_on_Settings_SetUnits_SettingUnits_finalization( void ) {
  
  state_system_on_Settings_SetUnits_finalization();
}

const uint8 state_system_on_Settings_SetUnits_init = 24;

void state_system_on_Settings_SetUnits_init_execute( void ) {
  if (changeState || stateLevel_3 != state_system_on_Settings_SetUnits_init)
    return;

  state_system_on_Settings_SetUnits_init_transition();

  // execute all substates

  if (changeState == 0) {
    if( SETTING_CHANGE_HOLD_TIME ==0)
    {
    	btn_hold_time_enterState = 0;
    }
    
    if(SETTING_CHANGE_HOLD_TIME ==1 || (SETTING_CHANGE_HOLD_TIME-btn_hold_time_enterState)>btn_hold_time_chaneState)
    {
    	setting_next = 1;	
    }
  }
}

void state_system_on_Settings_SetUnits_init_setState( void ) {
  stateLevel_3 = state_system_on_Settings_SetUnits_init;
  state_system_on_Settings_SetUnits_setState();
}

void state_system_on_Settings_SetUnits_init_transition( void ) {
  if (changeState)
    return;
  else if ( SETTING_SELECT_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_Settings_SetUnits_init_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SetUnits_SettingUnits_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling = scroll_hor;
    scrollingDone = 0;
    state_time = 0;
    clear_btn_state();
    display_units(64);
    display_optionMenu(64);
    haveRespondedToButton = false;

  }
}

void state_system_on_Settings_SetUnits_init_finalization( void ) {
  
  state_system_on_Settings_SetUnits_finalization();
}

const uint8 state_system_on_idle = 4;

void state_system_on_idle_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_idle)
    return;

  state_system_on_idle_transition();

  // execute all substates

  if (changeState == 0) {
    

  }
}

void state_system_on_idle_setState( void ) {
  stateLevel_1 = state_system_on_idle;
  state_system_on_setState();
}

void state_system_on_idle_transition( void ) {
  if (changeState)
    return;
  else if ( btn_right_pressed &&APP_bonded ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_idle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_ScanForApp_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    dram_ptr = 0;
    btn_right_pressed = 0;
    displayDone=0;
    state_time=0;
    
    display_sleep(oled_wakeup);
    clear_dram();
    display_connectingPhone(0,1);
    scrolling=scroll_hor;
    display_write();
    ble_radio_state = Radio_on;
    AppState=App_on;
    scanningApp_start();
    
    

  }
  else if ( SETTING_ENTER_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_idle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingInit_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    dram_ptr = 0;
    clear_dram();
    display_sleep(oled_wakeup);
    setting_done = 0;
    setting_timeout = 0;
    state_time = 0;
    setting_mode =1;
    //clear_btn_state();
    menu_select=menu_setAcceleration;
    ble_radio_state = Radio_off;
    scanningApp_stop();
    scanningDu_stop();
    disconnect_App();
    disconnect_Du();
        
    set_led_event();
    
    scrolling = scroll_ver;
    scrollingDone = 0;
    state_time = 0;
    setting_next = 0;
    if(btn_left_pressed)
    {  
      menu_select = menu_pairPhone;
    }
    else if(btn_right_pressed)
    {
      menu_select = menu_settingTime;
    }
      else
      {
    menu_select = menu_exit;    
      }
    
    
    clear_btn_state();
    display_gearIcon(0); 
    display_write();
    
    

  }
  else if ( (btn_left_pressed||virtual_btn_left_pressed)&&(SD_bonded) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_idle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_PowerAssistToggle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        display_sleep(oled_wakeup);
    if(SD_status==SD_on)
    {
      SD_status=SD_off;
      vibrate_motor(vibration_twice);
      if((LookingForService_state==STATE_STANDBY)&&(connected&connection_du))
      {
        data_temp[0]=Packet_Type_Command;
        data_temp[1]=Packet_Command_TurnOffMotor;
        setLookingForService_state(STATE_SENDING_DATA);
        gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
      }
    }
    else
    {
      SD_status=SD_on;
      vibrate_motor(vibration_once);
    }
    dram_ptr = 0;
    btn_left_pressed = 0;
    virtual_btn_left_pressed=0;
    displayDone=0;
    state_time=0;
    if(SD_status==SD_on)
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="ON";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
    else
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="OFF";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      if(AppState==App_off)
      {
      ble_radio_state = Radio_off;
      }
      motorStatus = motor_off;
      scanningDu_stop();
      disconnect_Du();
    }
        
    set_led_event();

  }
  else if ( tap&&(motorStatus==motor_off) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_idle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_LowBatteryWarning_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    dram_ptr = 0;
    tap=0;
    displayTimeout=0;
    display_sleep(oled_wakeup);
    scrollingDone = 1;
    
    
    
    scrolling = scroll_hor;
    scrollingDone = 1;
    displayDone = 0;
    state_time = 0;
    clear_btn_state();
    if(battery>=20)
      displayDone=1;
    

  }
  else if ( motorStatus==motor_on ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_idle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_ShowSpeed_setState();
    // start state timer (@ next states period)
    stateDelay = 8192;
    // execute the transition function
        
    dram_ptr = 0;
    display_sleep(oled_wakeup);
    clear_dram();
    display_centeredFloat((uints_convertion*motorSpeed), 0);
    display_write();
    
    vibrate_motor(vibration_once);
    task_send_msg((enum task_id)task_id_Led_handler, blue, Led_turnOn);
    
    

  }
}

void state_system_on_idle_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_ScanForApp = 5;

void state_system_on_ScanForApp_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_ScanForApp)
    return;

  state_system_on_ScanForApp_transition();

  // execute all substates

  if (changeState == 0) {
    state_time+=TICKS_TO_MS(stateDelay);
    if(state_time>3000) // 3s
      displayDone=1;

  }
}

void state_system_on_ScanForApp_setState( void ) {
  stateLevel_1 = state_system_on_ScanForApp;
  state_system_on_setState();
}

void state_system_on_ScanForApp_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_ScanForApp_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
}

void state_system_on_ScanForApp_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_startIcon = 6;

void state_system_on_startIcon_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_startIcon)
    return;

  state_system_on_startIcon_transition();

  // execute all substates

  if (changeState == 0) {
      state_time+=TICKS_TO_MS(stateDelay);
      if(state_time>1500)//  1.5s
      {
        displayDone=1;
      }
  }
}

void state_system_on_startIcon_setState( void ) {
  stateLevel_1 = state_system_on_startIcon;
  state_system_on_setState();
}

void state_system_on_startIcon_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_startIcon_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
}

void state_system_on_startIcon_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_PowerAssistToggle = 7;

void state_system_on_PowerAssistToggle_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_PowerAssistToggle)
    return;

  state_system_on_PowerAssistToggle_transition();

  // execute all substates

  if (changeState == 0) {
    state_time+=TICKS_TO_MS(stateDelay);
    if(state_time>3000) // 3s
      displayDone=1;
    
    

  }
}

void state_system_on_PowerAssistToggle_setState( void ) {
  stateLevel_1 = state_system_on_PowerAssistToggle;
  state_system_on_setState();
}

void state_system_on_PowerAssistToggle_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_PowerAssistToggle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
  else if ( btn_left_pressed||virtual_btn_left_pressed ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_PowerAssistToggle_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_PowerAssistToggle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        if(SD_status==SD_on)
    {
      SD_status=SD_off;
      vibrate_motor(vibration_twice);
    if((LookingForService_state==STATE_STANDBY)&&(connected&connection_du))
      {
        data_temp[0]=Packet_Type_Command;
        data_temp[1]=Packet_Command_TurnOffMotor;
        setLookingForService_state(STATE_SENDING_DATA);
        gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
      }
    }
    else
    {
      SD_status=SD_on;
      vibrate_motor(vibration_once);
    }
    dram_ptr = 0;
    btn_left_pressed = 0;
    virtual_btn_left_pressed=0;
    displayDone=0;
    state_time=0;
    if(SD_status==SD_on)
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="ON";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
    else
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="OFF";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      if(AppState==App_off)
      {
      ble_radio_state = Radio_off;
      }
      motorStatus = motor_off;
      scanningDu_stop();
      disconnect_Du();
    }
        
    set_led_event();

  }
}

void state_system_on_PowerAssistToggle_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_DisplayInfo = 8;

void state_system_on_DisplayInfo_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_DisplayInfo)
    return;

  state_system_on_DisplayInfo_transition();

  // execute all substates
  state_system_on_DisplayInfo_Display_Battery_execute();
  state_system_on_DisplayInfo_LowBatteryWarning_execute();
  state_system_on_DisplayInfo_Display_Estimate_Distance_execute();
  state_system_on_DisplayInfo_DisplayTime_execute();
  state_system_on_DisplayInfo_pushIcon_execute();
  state_system_on_DisplayInfo_pushes_execute();
  state_system_on_DisplayInfo_DistanceIcon_execute();
  state_system_on_DisplayInfo_Distance_execute();
  state_system_on_DisplayInfo_coastIcon_execute();
  state_system_on_DisplayInfo_coastTime_execute();

  if (changeState == 0) {
    if(scrollingDone)
    {
      state_time+=TICKS_TO_MS(stateDelay);
      if(state_time>5000) // 3s
        displayTimeout=1;
    }
  }
}

void state_system_on_DisplayInfo_setState( void ) {
  stateLevel_1 = state_system_on_DisplayInfo;
  state_system_on_setState();
}

void state_system_on_DisplayInfo_transition( void ) {
  if (changeState)
    return;
  else if ( (btn_left_pressed||virtual_btn_left_pressed)&&(SD_bonded) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_PowerAssistToggle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        if(SD_status==SD_on)
    {
      SD_status=SD_off;
      vibrate_motor(vibration_twice);
    if((LookingForService_state==STATE_STANDBY)&&(connected&connection_du))
      {
        data_temp[0]=Packet_Type_Command;
        data_temp[1]=Packet_Command_TurnOffMotor;
        setLookingForService_state(STATE_SENDING_DATA);
        gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
      }
    }
    else
    {
      SD_status=SD_on;
      vibrate_motor(vibration_once);
    }
    dram_ptr = 0;
    btn_left_pressed = 0;
    virtual_btn_left_pressed=0;
    displayDone=0;
    state_time=0;
    if(SD_status==SD_on)
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="ON";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
    else
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="OFF";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      if(AppState==App_off)
      {
      ble_radio_state = Radio_off;
      }
      motorStatus = motor_off;
      scanningDu_stop();
      disconnect_Du();
    }
        
    set_led_event();

  }
  else if ( btn_right_pressed &&APP_bonded ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_ScanForApp_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    dram_ptr = 0;
    btn_right_pressed = 0;
    displayDone=0;
    state_time=0;
    
    display_sleep(oled_wakeup);
    clear_dram();
    display_connectingPhone(0,1);
    scrolling=scroll_hor;
    display_write();
    ble_radio_state = Radio_on;
    AppState=App_on;
    scanningApp_start();
    
    

  }
  else if ( displayTimeout ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
  else if ( motorStatus==motor_on ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_ShowSpeed_setState();
    // start state timer (@ next states period)
    stateDelay = 8192;
    // execute the transition function
        
    dram_ptr = 0;
    display_sleep(oled_wakeup);
    clear_dram();
    display_centeredFloat((uints_convertion*motorSpeed), 0);
    display_write();
    
    vibrate_motor(vibration_once);
    task_send_msg((enum task_id)task_id_Led_handler, blue, Led_turnOn);
    
    

  }
  else if ( SETTING_ENTER_BTN ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_Settings_SettingInit_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    dram_ptr = 0;
    clear_dram();
    display_sleep(oled_wakeup);
    setting_done = 0;
    setting_timeout = 0;
    state_time = 0;
    setting_mode =1;
    //clear_btn_state();
    menu_select=menu_setAcceleration;
    ble_radio_state = Radio_off;
    scanningApp_stop();
    scanningDu_stop();
    disconnect_App();
    disconnect_Du();
        
    set_led_event();
    
    scrolling = scroll_ver;
    scrollingDone = 0;
    state_time = 0;
    setting_next = 0;
    if(btn_left_pressed)
    {  
      menu_select = menu_pairPhone;
    }
    else if(btn_right_pressed)
    {
      menu_select = menu_settingTime;
    }
      else
      {
    menu_select = menu_exit;    
      }
    
    
    clear_btn_state();
    display_gearIcon(0); 
    display_write();
    
    

  }
}

void state_system_on_DisplayInfo_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_system_on_DisplayInfo_Display_Battery = 11;

void state_system_on_DisplayInfo_Display_Battery_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_Display_Battery)
    return;

  state_system_on_DisplayInfo_Display_Battery_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      //display_batteries(0);
      //display_write();
        if(state_time>1500)
        displayDone=1;
    }
    else
    {
      display_write();
      display_scrolling();
    }
    

  }
}

void state_system_on_DisplayInfo_Display_Battery_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_Display_Battery;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_Display_Battery_transition( void ) {
  if (changeState)
    return;
  else if ( (displayDone || tap) && (driveUnit_battery>0) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_Display_Battery_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_Display_Estimate_Distance_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_hor;
    clear_dram();
    display_est_distance(0);
    display_write();
    
    scrollingDone=1;
    displayDone=0;
    displayTimeout=0;
    //state_time=0;
    tap=0;
    
    

  }
  else if ( tap && (driveUnit_battery==0) ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_Display_Battery_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_coastIcon_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_batteries(0);
    scrolling=scroll_hor;
    
    display_coastIcon(64 + (SCREEN_WIDTH - coastIcon_WIDTH)/2);
    
    dram_ptr=0;
    tap = 0;
    scrollingDone=0;
    displayDone=0;
    state_time=0;

  }
}

void state_system_on_DisplayInfo_Display_Battery_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_LowBatteryWarning = 12;

void state_system_on_DisplayInfo_LowBatteryWarning_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_LowBatteryWarning)
    return;

  state_system_on_DisplayInfo_LowBatteryWarning_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    
      
    
    if (state_time < 400) {
      display_batteryFilled(1, 8, 0);
    }
    else if (state_time > 400 && state_time < 500) {
      clear_dram();
    }
    else if (state_time >= 500 && state_time < 900) {
      display_batteryFilled(1, 8, 0);
    }
    else if (state_time >= 900) {
      displayDone = 1;
    }
      
    
    display_write();

  }
}

void state_system_on_DisplayInfo_LowBatteryWarning_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_LowBatteryWarning;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_LowBatteryWarning_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_LowBatteryWarning_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_DisplayTime_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    state_time=0;
    dram_ptr=0;
    scrollingDone = 1;
    tap = 0;
    displayDone=0;
    clear_dram();
    scrolling=scroll_hor;
    read_rtc();
    display_time(0);
    display_write();

  }
}

void state_system_on_DisplayInfo_LowBatteryWarning_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_Display_Estimate_Distance = 13;

void state_system_on_DisplayInfo_Display_Estimate_Distance_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_Display_Estimate_Distance)
    return;

  state_system_on_DisplayInfo_Display_Estimate_Distance_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      //display_batteries(0);
      //display_write();
    }
    else
    {
      //display_write();
      //display_scrolling();
    }
    

  }
}

void state_system_on_DisplayInfo_Display_Estimate_Distance_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_Display_Estimate_Distance;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_Display_Estimate_Distance_transition( void ) {
  if (changeState)
    return;
  else if ( tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_Display_Estimate_Distance_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_coastIcon_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        
    scrolling=scroll_hor;
    
    display_coastIcon(64 + (SCREEN_WIDTH - coastIcon_WIDTH)/2);
    
    dram_ptr=0;
    tap = 0;
    scrollingDone=0;
    displayDone=0;
    state_time=0;

  }
}

void state_system_on_DisplayInfo_Display_Estimate_Distance_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_DisplayTime = 14;

void state_system_on_DisplayInfo_DisplayTime_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_DisplayTime)
    return;

  state_system_on_DisplayInfo_DisplayTime_transition();

  // execute all substates

  if (changeState == 0) {
    if(state_time>3000) // 3s
      displayDone=1;
  }
}

void state_system_on_DisplayInfo_DisplayTime_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_DisplayTime;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_DisplayTime_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone || tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_DisplayTime_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_pushIcon_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_time(0);
    scrolling=scroll_hor;
    
    display_push_icon(64);
    
    dram_ptr=0;
    tap = 0;
    scrollingDone=0;
    displayDone=0;
    state_time=0;

  }
}

void state_system_on_DisplayInfo_DisplayTime_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_pushIcon = 15;

void state_system_on_DisplayInfo_pushIcon_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_pushIcon)
    return;

  state_system_on_DisplayInfo_pushIcon_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      if(state_time>500)
        displayDone=1;
    }
    else
    {
      display_write();
      display_scrolling();
    }
    
    

  }
}

void state_system_on_DisplayInfo_pushIcon_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_pushIcon;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_pushIcon_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone || tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_pushIcon_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_pushes_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_push_icon(0);
    scrolling=scroll_hor;
    
    display_centeredInt(pushes,64);
    
    dram_ptr=0;
    tap=0;
    scrollingDone=0;
    state_time=0;
    displayDone=0;
    displayTimeout=0;

  }
}

void state_system_on_DisplayInfo_pushIcon_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_pushes = 16;

void state_system_on_DisplayInfo_pushes_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_pushes)
    return;

  state_system_on_DisplayInfo_pushes_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    }
    else
    {
      display_write();
      display_scrolling();
    }
    

  }
}

void state_system_on_DisplayInfo_pushes_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_pushes;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_pushes_transition( void ) {
  if (changeState)
    return;
  else if ( tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_pushes_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_Display_Battery_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_centeredInt(pushes, 0);
    scrolling=scroll_hor;
    
    display_batteries(64);
    
    scrollingDone=0;
    displayDone=0;
    displayTimeout=0;
    state_time=0;
    tap=0;
    
    

  }
}

void state_system_on_DisplayInfo_pushes_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_DistanceIcon = 17;

void state_system_on_DisplayInfo_DistanceIcon_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_DistanceIcon)
    return;

  state_system_on_DisplayInfo_DistanceIcon_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      if(state_time>500) // 3s
        displayDone=1;
    }
    else
    {
      display_write();
      display_scrolling();
    }
    
    

  }
}

void state_system_on_DisplayInfo_DistanceIcon_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_DistanceIcon;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_DistanceIcon_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone || tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_DistanceIcon_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_Distance_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_distanceIcon(0);
    scrolling=scroll_hor;
    
    display_distance(64);
    
    scrollingDone = 0;
    displayDone=0;
    displayTimeout=0;
    state_time=0;
    tap=0;
    
    

  }
}

void state_system_on_DisplayInfo_DistanceIcon_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_Distance = 18;

void state_system_on_DisplayInfo_Distance_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_Distance)
    return;

  state_system_on_DisplayInfo_Distance_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
    }
    else
    {
      display_write();
      display_scrolling();
    }
    

  }
}

void state_system_on_DisplayInfo_Distance_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_Distance;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_Distance_transition( void ) {
  if (changeState)
    return;
  else if ( tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_Distance_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_DisplayTime_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    state_time=0;
    dram_ptr=0;
    scrollingDone = 1;
    tap = 0;
    displayDone=0;
    clear_dram();
    scrolling=scroll_hor;
    read_rtc();
    display_time(0);
    display_write();

  }
}

void state_system_on_DisplayInfo_Distance_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_coastIcon = 19;

void state_system_on_DisplayInfo_coastIcon_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_coastIcon)
    return;

  state_system_on_DisplayInfo_coastIcon_transition();

  // execute all substates

  if (changeState == 0) {
    
    if(scrollingDone)
    {
      if(state_time>500)
        displayDone=1;
    }
    else
    {
      display_write();
      display_scrolling();
    }
    
    

  }
}

void state_system_on_DisplayInfo_coastIcon_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_coastIcon;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_coastIcon_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone || tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_coastIcon_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_coastTime_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();
    display_coastIcon(0);
    scrolling=scroll_hor;
    
    display_coastTime(64);
    
    /*
    display_centeredFloat((float)(dailyInfo.coastWith) / 100.0f, 64);
    char string[3];
    sprintf(string, "s");
    display_smallFont(string, strlen(string), 2, 64 + (64-strlen(string)*SMALL_FONT_WIDTH));
    */
    
    dram_ptr=0;
    tap=0;
    scrollingDone=0;
    state_time=0;
    displayDone=0;
    displayTimeout=0;

  }
}

void state_system_on_DisplayInfo_coastIcon_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_DisplayInfo_coastTime = 20;

void state_system_on_DisplayInfo_coastTime_execute( void ) {
  if (changeState || stateLevel_2 != state_system_on_DisplayInfo_coastTime)
    return;

  state_system_on_DisplayInfo_coastTime_transition();

  // execute all substates

  if (changeState == 0) {
    if(scrollingDone)
    {
    }
    else
    {
      display_write();
      display_scrolling();
    }
    

  }
}

void state_system_on_DisplayInfo_coastTime_setState( void ) {
  stateLevel_2 = state_system_on_DisplayInfo_coastTime;
  state_system_on_DisplayInfo_setState();
}

void state_system_on_DisplayInfo_coastTime_transition( void ) {
  if (changeState)
    return;
  else if ( displayDone || tap ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_DisplayInfo_coastTime_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_DisplayInfo_DistanceIcon_setState();
    // start state timer (@ next states period)
    stateDelay = 491;
    // execute the transition function
        clear_dram();display_centeredFloat((float)(dailyInfo.coastWith) / 100.0f, 0);
    scrolling=scroll_hor;
    
    display_distanceIcon(64);
    
    scrollingDone=0;
    displayDone=0;
    displayTimeout=0;
    state_time=0;
    tap=0;
    
    

  }
}

void state_system_on_DisplayInfo_coastTime_finalization( void ) {
  
  state_system_on_DisplayInfo_finalization();
}

const uint8 state_system_on_ShowSpeed = 9;

void state_system_on_ShowSpeed_execute( void ) {
  if (changeState || stateLevel_1 != state_system_on_ShowSpeed)
    return;

  state_system_on_ShowSpeed_transition();

  // execute all substates

  if (changeState == 0) {
    clear_dram();
    
    display_centeredFloat((uints_convertion*motorSpeed), 0);
    if(driveUnit_battery<15 && driveUnit_battery!=0)
      display_lowBatteryIcon(2,0);
    display_write();

  }
}

void state_system_on_ShowSpeed_setState( void ) {
  stateLevel_1 = state_system_on_ShowSpeed;
  state_system_on_setState();
}

void state_system_on_ShowSpeed_transition( void ) {
  if (changeState)
    return;
  else if ( motorStatus==motor_off ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_ShowSpeed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_idle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        vibrate_motor(vibration_once);
    set_led_event();
    tap=0;
    btn_left_pressed=0;
    virtual_btn_left_pressed=0;
    btn_right_pressed=0;
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_write();
    display_sleep(oled_sleep);
    
    if(SD_status==SD_on)
    {
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
        
    set_led_event();

  }
  else if ( btn_left_pressed||virtual_btn_left_pressed||btn_right_hold||btn_right_pressed ) {
    changeState = 1;
    // run the current state's finalization function
    state_system_on_ShowSpeed_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_PowerAssistToggle_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        if(SD_status==SD_on)
    {
      SD_status=SD_off;
      vibrate_motor(vibration_twice);
    if((LookingForService_state==STATE_STANDBY)&&(connected&connection_du))
      {
        data_temp[0]=Packet_Type_Command;
        data_temp[1]=Packet_Command_TurnOffMotor;
        setLookingForService_state(STATE_SENDING_DATA);
        gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
      }
    }
    else
    {
      SD_status=SD_on;
      vibrate_motor(vibration_once);
    }
    dram_ptr = 0;
    btn_left_pressed = 0;
    virtual_btn_left_pressed=0;
    displayDone=0;
    state_time=0;
    if(SD_status==SD_on)
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="ON";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      ble_radio_state = Radio_on;
      scanningDu_start();
    }
    else
    {
      clear_dram();
      char string[]="SD";
      display_largeFont(string,strlen(string),0);
      char string1[]="OFF";
      display_smallFont(string1,strlen(string1),2,(PAGE_SIZE-strlen(string1)*SMALL_FONT_WIDTH));
      dram_ptr=0;
      scrolling=scroll_hor;
      display_write();
      if(AppState==App_off)
      {
      ble_radio_state = Radio_off;
      }
      motorStatus = motor_off;
      scanningDu_stop();
      disconnect_Du();
    }
        
    set_led_event();

  }
}

void state_system_on_ShowSpeed_finalization( void ) {
  
  state_system_on_finalization();
}

const uint8 state_sleep = 3;

void state_sleep_execute( void ) {
  if (changeState || stateLevel_0 != state_sleep)
    return;

  state_sleep_transition();

  // execute all substates

  if (changeState == 0) {
      state_time+=TICKS_TO_MS(stateDelay);
      if((state_time>1500)&&(state_time<2500))//  1.5s
      {
        
    	display_sleep(oled_sleep);    
        
      }
    else
    {
    	
    }
    if((state_time>2500)&&(state_time<3500))//  1.5s
    {
        systemSleeping=1;
    	
        enable_acc(acc_off);
    	enable_i2c(i2c_off);
    }
    rtc_time+=TICKS_TO_MS(stateDelay);
    set_led_all(led_off);
    check_rtc();
    watchdog_kick();
  }
}

void state_sleep_setState( void ) {
  stateLevel_0 = state_sleep;
}

void state_sleep_transition( void ) {
  if (changeState)
    return;
  else if ( btn_left_hold || btn_left_pressed || btn_right_pressed || btn_right_hold ) {
    changeState = 1;
    // run the current state's finalization function
    state_sleep_finalization();
    // set the current state to the state we are transitioning to
    state_system_on_startIcon_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        systemSleeping=0;
    btn_left_hold = 0;
    enable_acc(acc_on);
    enable_i2c(i2c_on);
    init_acc();
    display_sleep(oled_sleep);
    
    
    
    displayDone =0 ;
    display_sleep(oled_wakeup);
    clear_dram();
    dram_ptr=0;
    scrolling=scroll_hor;
    display_maxBoldIcon(0);
    display_write();
    state_time=0;
    
    

  }
}

void state_sleep_finalization( void ) {
  
}

const uint8 state_Sys_init = 4;

void state_Sys_init_execute( void ) {
  if (changeState || stateLevel_0 != state_Sys_init)
    return;

  state_Sys_init_transition();

  // execute all substates

  if (changeState == 0) {
    EA=1;
    init_io_int();
    init_motor();
    init_leds();
    enable_acc(acc_on);
    enable_i2c(i2c_on);
    init_i2c();
    //init_acc();
    rtc_init();
    ps_load_time();
    ps_load_currentDay_info();
    ps_load_batCali();
    ps_load_error();
    ps_load_motorDistance();
    set_rtc();
    set_oled_power(oled_on);
    set_oled_reset(oled_reset_on);
    set_oled_reset(oled_reset_off);
    delay_ms(10);
    oled_init();
    delay_ms(10);
    clear_dram();
    scrolling=scroll_hor;
    dram_ptr=0;
    display_write();
    init_adc();
    //SLEEP_BLOCK(0X04);
    smp_set_bondable(1);
    smp_set_parameters(0,7,smp_io_capability_noinputnooutput );// no mitm no input no output
    SD_status=SD_off;
    cleaningFlash();
    init_flash();
    journeyState = Journey_State_Stopped;
    loadSettings();
    ps_load_version();
    rtc_time = 0;
    dfu_pointer = FIRST_USER_PAGE_ADDRESS;
    sysInitDone=1;
    WDCTL = 0x08;// start watchdog
  }
}

void state_Sys_init_setState( void ) {
  stateLevel_0 = state_Sys_init;
}

void state_Sys_init_transition( void ) {
  if (changeState)
    return;
  else if ( sysInitDone ) {
    changeState = 1;
    // run the current state's finalization function
    state_Sys_init_finalization();
    // set the current state to the state we are transitioning to
    state_sleep_setState();
    // start state timer (@ next states period)
    stateDelay = 16384;
    // execute the transition function
        
    
    //sysInitDone = 0;
    btn_left_hold=0;
    btn_left_pressed = 0;
    btn_right_pressed = 0;
    
    ble_radio_state = Radio_off;
    AppState = App_off;
    SD_status=SD_off;
    scanning_stop();
    AppConnectionStatus=AppRadioOff;
    DuConnectionStatus=DuRadioOff;
    disconnect_device();
    
    set_led_event();
    //set_led_all(led_off);
    state_time = 0;
    clear_dram();
    display_sleep(oled_wakeup);
    display_sleepIcon(0);
    dram_ptr=0;
    scrolling=scroll_hor;
    set_led_all(led_off);
    display_write();
    

  }
}

void state_Sys_init_finalization( void ) {
  
}

   
