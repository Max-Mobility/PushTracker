#include "PushTracker_HFSM_Events.hpp"
#include "PushTracker_HFSM_GeneratedStates.hpp"

#ifdef DEBUG_OUTPUT
#include <iostream>
#endif

namespace StateMachine {
  StateMachine::PushTracker_HFSM        PUSHTRACKER_HFSM_OBJ_stateObj;
  StateMachine::PushTracker_HFSM *const PUSHTRACKER_HFSM_OBJ = &PUSHTRACKER_HFSM_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On        PUSHTRACKER_HFSM_OBJ__ON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ );
  StateMachine::PushTracker_HFSM::On *const PUSHTRACKER_HFSM_OBJ__ON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Power_Assist_Toggle        PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Power_Assist_Toggle *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Logo        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Logo *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Idle        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Idle *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Exit        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Exit *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Exit        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Exit *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Time        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Format        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Format *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Month        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Month *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Day        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Day *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Years        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Years *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Time::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Time::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::About        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::About *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::About::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::About::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::About::Versions        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::About::Versions *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::About::Error        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::About::Error *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::About::Error_Info        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::About::Error_Info *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Settings::Units        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Units *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Settings::Units::Set_Units        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Units::Set_Units *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Settings::Units::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ );
  StateMachine::PushTracker_HFSM::On::Settings::Units::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ_stateObj;
  
  
  
  StateMachine::PushTracker_HFSM::On::Display_Info        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Data        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Drive_Range        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Drive_Range *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Time        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Battery        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Battery *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Data        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ_stateObj;
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Data        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Icon        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ_stateObj;
  
  
  
  StateMachine::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ );
  StateMachine::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ_stateObj;
  
  
  StateMachine::PushTracker_HFSM::On::Scan_for_App        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Scan_for_App *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::On::Show_Speed        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ__ON_OBJ );
  StateMachine::PushTracker_HFSM::On::Show_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ = &PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ_stateObj;
  
  
  
  
  StateMachine::PushTracker_HFSM::OTA        PUSHTRACKER_HFSM_OBJ__OTA_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ );
  StateMachine::PushTracker_HFSM::OTA *const PUSHTRACKER_HFSM_OBJ__OTA_OBJ = &PUSHTRACKER_HFSM_OBJ__OTA_OBJ_stateObj;
  
  StateMachine::PushTracker_HFSM::Sleep        PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ_stateObj( PUSHTRACKER_HFSM_OBJ );
  StateMachine::PushTracker_HFSM::Sleep *const PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ = &PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ_stateObj;
  
  

  // User Definitions for the HFSM
  //::::/c/B::::Definitions::::
    bool PushTracker_HFSM::SmartDrivePaired = false;
  bool PushTracker_HFSM::PhonePaired = false;
  bool PushTracker_HFSM::hasError = false;
  bool PushTracker_HFSM::lowBattery = false;

  /* * *  Definitions for PushTracker_HFSM : /c/B  * * */
  // Generated Definitions for the root state
  void PushTracker_HFSM::initialize ( void ) {
    // Run the model's Initialization code
    #ifdef DEBUG_OUTPUT
    std::cout << "PushTracker HFSM:/c/B HFSM Initialization" << std::endl;
    #endif
    //::::/c/B::::Initialization::::
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
/*
    dfu_pointer = FIRST_USER_PAGE_ADDRESS;
    */
WDCTL = 0x08;// start watchdog
    // now set the states up properly
    // External Transition : Action for: /c/B/4
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/4" << std::endl;
    #endif
    
    //::::/c/B/4::::Action::::
    
    // State : entry for: /c/B/P
    PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->initialize();
  };
  
  void PushTracker_HFSM::terminate ( void ) {
    // will call exit() and exitChildren() on _activeState if it
    // exists
    exitChildren();
  };
  
  void PushTracker_HFSM::restart ( void ) {
    terminate();
    initialize();
  };
  
  bool PushTracker_HFSM::hasStopped ( void ) {
    bool reachedEnd = false;
    return reachedEnd;
  };
  
  bool PushTracker_HFSM::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;

    // Get the currently active leaf state
    StateMachine::StateBase* activeLeaf = getActiveLeaf();

    if (activeLeaf != 0 && activeLeaf != this) {
      // have the active leaf handle the event, this will bubble up until
      // the event is handled or it reaches the root.
      handled = activeLeaf->handleEvent( event );
    }

    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On : /c/B/0  * * */
  // Timer period
  const double PushTracker_HFSM::On::timerPeriod = 0;
  
  void PushTracker_HFSM::On::initialize ( void ) {
    // External Transition : Action for: /c/B/0/m
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/m" << std::endl;
    #endif
    
    //::::/c/B/0/m::::Action::::
    
    // State : entry for: /c/B/0/B
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::/c/B/0" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0::::Entry::::
    btn_left_hold = 0;
  enable_acc(acc_on);
  enable_i2c(i2c_on);
  init_acc();
  display_sleep(oled_sleep);
  }
  
  void PushTracker_HFSM::On::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::/c/B/0" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::/c/B/0" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0::::Tick::::
          if(quad_mode_ready&&(SD_status==SD_off))
        {
          quad_mode_time +=TICKS_TO_MS((uint32)(1.0 * 1000.0 ));
          if(quad_mode_time>15000) // 15s 
          {
            if((btn_left_hold_time==0)&&(btn_right_hold_time==0))
            {quad_mode_ready = 0;
             set_led(blue2,led_off);
            }
          }
        }
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    case Event::BUTTON_LEFT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/1" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/1::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_ASSIST_TOGGLE );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_RIGHT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/P" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/P::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::SCAN_APP );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_LEFT_HOLD:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/lh" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/lh::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_OFF );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_RIGHT_HOLD:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/i" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/i::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::ENTER_SETTINGS );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::START_OTA:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/C" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ->exitChildren();
        // State : exit for: /c/B/0
        PUSHTRACKER_HFSM_OBJ__ON_OBJ->exit();
        // External Transition : Action for: /c/B/C
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/C" << std::endl;
        #endif
        
        //::::/c/B/C::::Action::::
        
        // State : entry for: /c/B/F
        PUSHTRACKER_HFSM_OBJ__OTA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On->PushTracker_HFSM::OTA" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__OTA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::POWER_OFF:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/Q" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ->exitChildren();
        // State : exit for: /c/B/0
        PUSHTRACKER_HFSM_OBJ__ON_OBJ->exit();
        // External Transition : Action for: /c/B/Q
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/Q" << std::endl;
        #endif
        
        //::::/c/B/Q::::Action::::
        
        // State : entry for: /c/B/P
        PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On->PushTracker_HFSM::Sleep" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    // can't buble up, we are a root state.
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Power_Assist_Toggle : /c/B/0/7  * * */
  // Timer period
  const double PushTracker_HFSM::On::Power_Assist_Toggle::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Power_Assist_Toggle::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Power_Assist_Toggle::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Power_Assist_Toggle::/c/B/0/7" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/7::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Power_Assist_Toggle::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Power_Assist_Toggle::/c/B/0/7" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/7::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Power_Assist_Toggle::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Power_Assist_Toggle::/c/B/0/7" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/7::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Power_Assist_Toggle::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Power_Assist_Toggle::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Logo : /c/B/0/B  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Logo::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Logo::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Logo::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Logo::/c/B/0/B" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/B::::Entry::::
    
  displayDone =0 ;
  display_sleep(oled_wakeup);
  clear_dram();
  dram_ptr=0;
  scrolling=scroll_hor;
  display_maxBoldIcon(0);
  display_write();
  state_time=0;
  
  }
  
  void PushTracker_HFSM::On::Display_Logo::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Logo::/c/B/0/B" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/B::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Logo::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Logo::/c/B/0/B" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/B::::Tick::::
            state_time+=TICKS_TO_MS((uint32)(1.0 * 1000.0));
          if(state_time>1500)//  1.5s
          {
            eventFactory->spawnEvent( StateMachine::Event::TIMEOUT );
          }
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Logo::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Logo::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/z" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ->exitChildren();
        // State : exit for: /c/B/0/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ->exit();
        // External Transition : Action for: /c/B/0/z
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/z" << std::endl;
        #endif
        
        //::::/c/B/0/z::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Logo->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Idle : /c/B/0/N  * * */
  // Timer period
  const double PushTracker_HFSM::On::Idle::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Idle::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Idle::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Idle::/c/B/0/N" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/N::::Entry::::
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
  
  void PushTracker_HFSM::On::Idle::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Idle::/c/B/0/N" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/N::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Idle::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Idle::/c/B/0/N" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/N::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Idle::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Idle::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::MOTOR_ON:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/8" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
        // State : exit for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
        // External Transition : Action for: /c/B/0/8
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/8" << std::endl;
        #endif
        
        //::::/c/B/0/8::::Action::::
        
        // State : entry for: /c/B/0/g
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Show_Speed" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::POWER_ASSIST_TOGGLE:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/X" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/Q::::Guard::::
          else if ( SmartDrivePaired ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ SmartDrivePaired ] for EXTERNAL TRANSITION:/c/B/0/Q evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
          // State : exit for: /c/B/0/N
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
          // External Transition : Action for: /c/B/0/X
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/X" << std::endl;
          #endif
          
          //::::/c/B/0/X::::Action::::
          
          // External Transition : Action for: /c/B/0/Q
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/Q" << std::endl;
          #endif
          
          //::::/c/B/0/Q::::Action::::
          
          // State : entry for: /c/B/0/7
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Power_Assist_Toggle" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/r" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
          // State : exit for: /c/B/0/N
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
          // External Transition : Action for: /c/B/0/X
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/X" << std::endl;
          #endif
          
          //::::/c/B/0/X::::Action::::
          
          // External Transition : Action for: /c/B/0/r
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/r" << std::endl;
          #endif
          
          //::::/c/B/0/r::::Action::::
          
          // State : entry for: /c/B/0/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
          // State : entry for: /c/B/0/c/o
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Settings::Pair_SmartDrive" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      case Event::ENTER_SETTINGS:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/W" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
        // State : exit for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
        // External Transition : Action for: /c/B/0/W
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/W" << std::endl;
        #endif
        
        //::::/c/B/0/W::::Action::::
        
        // State : entry for: /c/B/0/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Settings" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/j" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
        // State : exit for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
        // External Transition : Action for: /c/B/0/j
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/j" << std::endl;
        #endif
        
        //::::/c/B/0/j::::Action::::
        
        // State : entry for: /c/B/0/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Display_Info" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::SCAN_APP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/C" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/D::::Guard::::
          else if ( PhonePaired ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ PhonePaired ] for EXTERNAL TRANSITION:/c/B/0/D evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
          // State : exit for: /c/B/0/N
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
          // External Transition : Action for: /c/B/0/C
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/C" << std::endl;
          #endif
          
          //::::/c/B/0/C::::Action::::
          
          // External Transition : Action for: /c/B/0/D
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/D" << std::endl;
          #endif
          
          //::::/c/B/0/D::::Action::::
          
          // State : entry for: /c/B/0/t
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Scan_for_App" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/f" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exitChildren();
          // State : exit for: /c/B/0/N
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->exit();
          // External Transition : Action for: /c/B/0/C
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/C" << std::endl;
          #endif
          
          //::::/c/B/0/C::::Action::::
          
          // External Transition : Action for: /c/B/0/f
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/f" << std::endl;
          #endif
          
          //::::/c/B/0/f::::Action::::
          
          // State : entry for: /c/B/0/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
          // State : entry for: /c/B/0/c/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Idle->PushTracker_HFSM::On::Settings::Pair_Phone" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings : /c/B/0/c  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/d
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/d" << std::endl;
    #endif
    
    //::::/c/B/0/c/d::::Action::::
    
    // State : entry for: /c/B/0/c/k
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::/c/B/0/c" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::/c/B/0/c" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::/c/B/0/c" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    case Event::BUTTON_LEFT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/c/F" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/c/F::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::SELECT );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_RIGHT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/c/c" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/c/c::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::NEXT );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/M" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->exit();
        // External Transition : Action for: /c/B/0/M
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/M" << std::endl;
        #endif
        
        //::::/c/B/0/M::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Exit : /c/B/0/c/6  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Exit::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Exit::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Exit::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Exit::/c/B/0/c/6" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/6::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Exit::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Exit::/c/B/0/c/6" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/6::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Exit::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Exit::/c/B/0/c/6" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/6::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Exit::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Exit::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/v" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/6
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/v
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/v" << std::endl;
        #endif
        
        //::::/c/B/0/c/v::::Action::::
        
        // State : entry for: /c/B/0/c/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Exit->PushTracker_HFSM::On::Settings::SmartDrive" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/y" << std::endl;
          #endif
          // Going into an end pseudo-state that is not the root end state,
          // follow its parent end transition
          if (false) { }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/e" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->exitChildren();
          // State : exit for: /c/B/0/c/6
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->exit();
          // State : exit for: /c/B/0/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->exit();
          // External Transition : Action for: /c/B/0/c/y
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/y" << std::endl;
          #endif
          
          //::::/c/B/0/c/y::::Action::::
          
          // External Transition : Action for: /c/B/0/e
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/e" << std::endl;
          #endif
          
          //::::/c/B/0/e::::Action::::
          
          // State : entry for: /c/B/0/N
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Exit->PushTracker_HFSM::On::Idle" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_Phone : /c/B/0/c/s  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_Phone::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/s/D
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/s/D" << std::endl;
    #endif
    
    //::::/c/B/0/c/s/D::::Action::::
    
    // State : entry for: /c/B/0/c/s/b
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_Phone::/c/B/0/c/s" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/s::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_Phone::/c/B/0/c/s" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/s::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_Phone::/c/B/0/c/s" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/s::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_Phone::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_Phone::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/A" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/A
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/A" << std::endl;
        #endif
        
        //::::/c/B/0/c/A::::Action::::
        
        // State : entry for: /c/B/0/c/o
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone->PushTracker_HFSM::On::Settings::Pair_SmartDrive" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_Phone::Pairing : /c/B/0/c/s/k  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::/c/B/0/c/s/k" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/s/k::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::/c/B/0/c/s/k" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/s/k::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::/c/B/0/c/s/k" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/s/k::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_Phone::Pairing::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/s/P" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/s/P
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/s/P" << std::endl;
        #endif
        
        //::::/c/B/0/c/s/P::::Action::::
        
        // State : entry for: /c/B/0/c/s/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone::Pairing->PushTracker_HFSM::On::Settings::Pair_Phone::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/s/W" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/s/W
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/s/W" << std::endl;
        #endif
        
        //::::/c/B/0/c/s/W::::Action::::
        
        // State : entry for: /c/B/0/c/s/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone::Pairing->PushTracker_HFSM::On::Settings::Pair_Phone::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/s/f" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/s/f
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/s/f" << std::endl;
        #endif
        
        //::::/c/B/0/c/s/f::::Action::::
        
        // State : entry for: /c/B/0/c/s/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone::Pairing->PushTracker_HFSM::On::Settings::Pair_Phone::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::PAIRED:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/s/u" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/s/u
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/s/u" << std::endl;
        #endif
        
        //::::/c/B/0/c/s/u::::Action::::
        
        // State : entry for: /c/B/0/c/s/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone::Pairing->PushTracker_HFSM::On::Settings::Pair_Phone::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_Phone::Icon : /c/B/0/c/s/b  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_Phone::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_Phone::Icon::/c/B/0/c/s/b" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/s/b::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_Phone::Icon::/c/B/0/c/s/b" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/s/b::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_Phone::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_Phone::Icon::/c/B/0/c/s/b" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/s/b::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_Phone::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_Phone::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/s/y" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/s/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/s/y
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/s/y" << std::endl;
        #endif
        
        //::::/c/B/0/c/s/y::::Action::::
        
        // State : entry for: /c/B/0/c/s/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_Phone::Icon->PushTracker_HFSM::On::Settings::Pair_Phone::Pairing" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_SmartDrive : /c/B/0/c/o  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_SmartDrive::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/o/Y
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/o/Y" << std::endl;
    #endif
    
    //::::/c/B/0/c/o/Y::::Action::::
    
    // State : entry for: /c/B/0/c/o/K
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_SmartDrive::/c/B/0/c/o" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/o::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_SmartDrive::/c/B/0/c/o" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/o::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_SmartDrive::/c/B/0/c/o" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/o::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_SmartDrive::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_SmartDrive::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/G" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/G
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/G" << std::endl;
        #endif
        
        //::::/c/B/0/c/G::::Action::::
        
        // State : entry for: /c/B/0/c/n
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive->PushTracker_HFSM::On::Settings::Units" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing : /c/B/0/c/o/s  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::/c/B/0/c/o/s" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/o/s::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::/c/B/0/c/o/s" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/o/s::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::/c/B/0/c/o/s" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/o/s::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/o/8" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/o/8
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/o/8" << std::endl;
        #endif
        
        //::::/c/B/0/c/o/8::::Action::::
        
        // State : entry for: /c/B/0/c/o/K
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing->PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/o/Q" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/o/Q
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/o/Q" << std::endl;
        #endif
        
        //::::/c/B/0/c/o/Q::::Action::::
        
        // State : entry for: /c/B/0/c/o/K
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing->PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::PAIRED:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/o/O" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/o/O
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/o/O" << std::endl;
        #endif
        
        //::::/c/B/0/c/o/O::::Action::::
        
        // State : entry for: /c/B/0/c/o/K
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing->PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/o/L" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/o/L
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/o/L" << std::endl;
        #endif
        
        //::::/c/B/0/c/o/L::::Action::::
        
        // State : entry for: /c/B/0/c/o/K
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing->PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon : /c/B/0/c/o/K  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::/c/B/0/c/o/K" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/o/K::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::/c/B/0/c/o/K" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/o/K::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::/c/B/0/c/o/K" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/o/K::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/o/o" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/o/K
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/o/o
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/o/o" << std::endl;
        #endif
        
        //::::/c/B/0/c/o/o::::Action::::
        
        // State : entry for: /c/B/0/c/o/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon->PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Icon : /c/B/0/c/k  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Icon::/c/B/0/c/k" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/k::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Icon::/c/B/0/c/k" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/k::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Icon::/c/B/0/c/k" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/k::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/8" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/8
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/8" << std::endl;
        #endif
        
        //::::/c/B/0/c/8::::Action::::
        
        // State : entry for: /c/B/0/c/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Icon->PushTracker_HFSM::On::Settings::SmartDrive" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive : /c/B/0/c/b  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/b/P
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/b/P" << std::endl;
    #endif
    
    //::::/c/B/0/c/b/P::::Action::::
    
    // State : entry for: /c/B/0/c/b/td
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::/c/B/0/c/b" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::/c/B/0/c/b" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::/c/B/0/c/b" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/W" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/W
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/W" << std::endl;
        #endif
        
        //::::/c/B/0/c/W::::Action::::
        
        // State : entry for: /c/B/0/c/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive->PushTracker_HFSM::On::Settings::Time" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity : /c/B/0/c/b/4  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/b/4/i
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/b/4/i" << std::endl;
    #endif
    
    //::::/c/B/0/c/b/4/i::::Action::::
    
    // State : entry for: /c/B/0/c/b/4/8
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::/c/B/0/c/b/4" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/4::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::/c/B/0/c/b/4" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/4::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::/c/B/0/c/b/4" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/4::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/j" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/4
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/j
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/j" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/j::::Action::::
        
        // State : entry for: /c/B/0/c/b/J
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity->PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon : /c/B/0/c/b/4/8  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::/c/B/0/c/b/4/8" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/4/8::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::/c/B/0/c/b/4/8" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/4/8::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::/c/B/0/c/b/4/8" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/4/8::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/4/Y" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/4/8
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/4/Y
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/4/Y" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/4/Y::::Action::::
        
        // State : entry for: /c/B/0/c/b/4/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon->PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity : /c/B/0/c/b/4/Q  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::/c/B/0/c/b/4/Q" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/4/Q::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::/c/B/0/c/b/4/Q" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/4/Q::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::/c/B/0/c/b/4/Q" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/4/Q::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/4/x" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/4/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/4/x
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/4/x" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/4/x::::Action::::
        
        // State : entry for: /c/B/0/c/b/4/8
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity->PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Icon : /c/B/0/c/b/td  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Icon::/c/B/0/c/b/td" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/td::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Icon::/c/B/0/c/b/td" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/td::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Icon::/c/B/0/c/b/td" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/td::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/o" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/td
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/o
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/o" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/o::::Action::::
        
        // State : entry for: /c/B/0/c/b/G
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Icon->PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed : /c/B/0/c/b/G  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/b/G/H
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/b/G/H" << std::endl;
    #endif
    
    //::::/c/B/0/c/b/G/H::::Action::::
    
    // State : entry for: /c/B/0/c/b/G/S
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::/c/B/0/c/b/G" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/G::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::/c/B/0/c/b/G" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/G::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::/c/B/0/c/b/G" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/G::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/p" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/G
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/p
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/p" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/p::::Action::::
        
        // State : entry for: /c/B/0/c/b/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed->PushTracker_HFSM::On::Settings::SmartDrive::Acceleration" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed : /c/B/0/c/b/G/m  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::/c/B/0/c/b/G/m" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/G/m::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::/c/B/0/c/b/G/m" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/G/m::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::/c/B/0/c/b/G/m" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/G/m::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/G/x" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/G/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/G/x
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/G/x" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/G/x::::Action::::
        
        // State : entry for: /c/B/0/c/b/G/S
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed->PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon : /c/B/0/c/b/G/S  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::/c/B/0/c/b/G/S" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/G/S::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::/c/B/0/c/b/G/S" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/G/S::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::/c/B/0/c/b/G/S" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/G/S::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/G/e" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/G/S
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/G/e
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/G/e" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/G/e::::Action::::
        
        // State : entry for: /c/B/0/c/b/G/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon->PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration : /c/B/0/c/b/k  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/b/k/Q
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/b/k/Q" << std::endl;
    #endif
    
    //::::/c/B/0/c/b/k/Q::::Action::::
    
    // State : entry for: /c/B/0/c/b/k/8
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::/c/B/0/c/b/k" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/k::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::/c/B/0/c/b/k" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/k::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::/c/B/0/c/b/k" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/k::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/w" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/k
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/w
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/w" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/w::::Action::::
        
        // State : entry for: /c/B/0/c/b/4
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Acceleration->PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon : /c/B/0/c/b/k/8  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::/c/B/0/c/b/k/8" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/k/8::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::/c/B/0/c/b/k/8" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/k/8::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::/c/B/0/c/b/k/8" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/k/8::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/k/T" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/k/8
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/k/T
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/k/T" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/k/T::::Action::::
        
        // State : entry for: /c/B/0/c/b/k/X
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon->PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration : /c/B/0/c/b/k/X  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::/c/B/0/c/b/k/X" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/k/X::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::/c/B/0/c/b/k/X" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/k/X::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::/c/B/0/c/b/k/X" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/k/X::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/k/g" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/k/X
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/k/g
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/k/g" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/k/g::::Action::::
        
        // State : entry for: /c/B/0/c/b/k/8
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration->PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode : /c/B/0/c/b/J  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/b/J/l
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/b/J/l" << std::endl;
    #endif
    
    //::::/c/B/0/c/b/J/l::::Action::::
    
    // State : entry for: /c/B/0/c/b/J/M
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::/c/B/0/c/b/J" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/J::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::/c/B/0/c/b/J" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/J::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::/c/B/0/c/b/J" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/J::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/O" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/J
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/O
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/O" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/O::::Action::::
        
        // State : entry for: /c/B/0/c/b/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode->PushTracker_HFSM::On::Settings::SmartDrive::Exit" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode : /c/B/0/c/b/J/p  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::/c/B/0/c/b/J/p" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/J/p::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::/c/B/0/c/b/J/p" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/J/p::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::/c/B/0/c/b/J/p" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/J/p::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/J/D" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/J/p
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/J/D
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/J/D" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/J/D::::Action::::
        
        // State : entry for: /c/B/0/c/b/J/e
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode->PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On : /c/B/0/c/b/J/e  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::/c/B/0/c/b/J/e" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/J/e::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::/c/B/0/c/b/J/e" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/J/e::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::/c/B/0/c/b/J/e" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/J/e::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/J/7" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/J/e
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/J/7
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/J/7" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/J/7::::Action::::
        
        // State : entry for: /c/B/0/c/b/J/M
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On->PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon : /c/B/0/c/b/J/M  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::/c/B/0/c/b/J/M" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/J/M::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::/c/B/0/c/b/J/M" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/J/M::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::/c/B/0/c/b/J/M" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/J/M::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/J/E" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/J/M
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/J/E
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/J/E" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/J/E::::Action::::
        
        // State : entry for: /c/B/0/c/b/J/p
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon->PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::SmartDrive::Exit : /c/B/0/c/b/c  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::SmartDrive::Exit::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Exit::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Exit::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::SmartDrive::Exit::/c/B/0/c/b/c" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/b/c::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Exit::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::SmartDrive::Exit::/c/B/0/c/b/c" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/b/c::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::SmartDrive::Exit::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::SmartDrive::Exit::/c/B/0/c/b/c" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/b/c::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::SmartDrive::Exit::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::SmartDrive::Exit::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/i" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/i
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/i" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/i::::Action::::
        
        // State : entry for: /c/B/0/c/b/td
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Exit->PushTracker_HFSM::On::Settings::SmartDrive::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/b/u" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/b/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/b/u
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/b/u" << std::endl;
        #endif
        
        //::::/c/B/0/c/b/u::::Action::::
        
        // State : entry for: /c/B/0/c/b/G
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::SmartDrive::Exit->PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time : /c/B/0/c/m  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/m/H
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/m/H" << std::endl;
    #endif
    
    //::::/c/B/0/c/m/H::::Action::::
    
    // State : entry for: /c/B/0/c/m/s
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Time::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::/c/B/0/c/m" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::/c/B/0/c/m" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::/c/B/0/c/m" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/I" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/I
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/I" << std::endl;
        #endif
        
        //::::/c/B/0/c/I::::Action::::
        
        // State : entry for: /c/B/0/c/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time->PushTracker_HFSM::On::Settings::Pair_Phone" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Time : /c/B/0/c/m/R  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Time::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/m/R/t
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/m/R/t" << std::endl;
    #endif
    
    //::::/c/B/0/c/m/R/t::::Action::::
    
    // State : entry for: /c/B/0/c/m/R/b
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Time::/c/B/0/c/m/R" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/R::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Time::/c/B/0/c/m/R" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/R::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Time::/c/B/0/c/m/R" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/R::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Time::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Time::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    case Event::BUTTON_RIGHT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/c/m/R/Eh" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/c/m/R/Eh::::Action::::
        
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/p" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/R
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/p
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/p" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/p::::Action::::
        
        // State : entry for: /c/B/0/c/m/z
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Time->PushTracker_HFSM::On::Settings::Time::Set_Date" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes : /c/B/0/c/m/R/1  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::/c/B/0/c/m/R/1" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/R/1::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::/c/B/0/c/m/R/1" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/R/1::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::/c/B/0/c/m/R/1" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/R/1::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/R/o" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/R/1
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/R/o
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/R/o" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/R/o::::Action::::
        
        // State : entry for: /c/B/0/c/m/R/q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes->PushTracker_HFSM::On::Settings::Time::Set_Time::Format" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Time::Format : /c/B/0/c/m/R/q  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Time::Format::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Format::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Format::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Time::Format::/c/B/0/c/m/R/q" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/R/q::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Format::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Time::Format::/c/B/0/c/m/R/q" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/R/q::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Format::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Time::Format::/c/B/0/c/m/R/q" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/R/q::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Time::Format::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Time::Format::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Time::Hours : /c/B/0/c/m/R/b  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::/c/B/0/c/m/R/b" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/R/b::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::/c/B/0/c/m/R/b" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/R/b::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::/c/B/0/c/m/R/b" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/R/b::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Time::Hours::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/R/m" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/R/b
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/R/m
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/R/m" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/R/m::::Action::::
        
        // State : entry for: /c/B/0/c/m/R/I
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Time::Hours->PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes : /c/B/0/c/m/R/I  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::/c/B/0/c/m/R/I" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/R/I::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::/c/B/0/c/m/R/I" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/R/I::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::/c/B/0/c/m/R/I" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/R/I::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/R/Y" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/R/I
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/R/Y
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/R/Y" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/R/Y::::Action::::
        
        // State : entry for: /c/B/0/c/m/R/1
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes->PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Date : /c/B/0/c/m/z  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Date::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/m/z/b
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/m/z/b" << std::endl;
    #endif
    
    //::::/c/B/0/c/m/z/b::::Action::::
    
    // State : entry for: /c/B/0/c/m/z/3
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Date::/c/B/0/c/m/z" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/z::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Date::/c/B/0/c/m/z" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/z::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Date::/c/B/0/c/m/z" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/z::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Date::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Date::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    case Event::BUTTON_RIGHT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/0/c/m/z/A" << std::endl;
        #endif
        // run transition action
        //::::/c/B/0/c/m/z/A::::Action::::
        
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/x" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/z
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/x
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/x" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/x::::Action::::
        
        // State : entry for: /c/B/0/c/m/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Date->PushTracker_HFSM::On::Settings::Time::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Date::Month : /c/B/0/c/m/z/3  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Date::Month::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Month::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Month::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Date::Month::/c/B/0/c/m/z/3" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/z/3::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Month::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Date::Month::/c/B/0/c/m/z/3" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/z/3::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Month::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Date::Month::/c/B/0/c/m/z/3" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/z/3::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Date::Month::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Date::Month::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/z/4" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/z/3
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/z/4
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/z/4" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/z/4::::Action::::
        
        // State : entry for: /c/B/0/c/m/z/G
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Date::Month->PushTracker_HFSM::On::Settings::Time::Set_Date::Day" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Date::Day : /c/B/0/c/m/z/G  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Date::Day::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Day::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Day::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Date::Day::/c/B/0/c/m/z/G" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/z/G::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Day::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Date::Day::/c/B/0/c/m/z/G" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/z/G::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Day::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Date::Day::/c/B/0/c/m/z/G" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/z/G::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Date::Day::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Date::Day::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/z/u" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/z/G
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/z/u
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/z/u" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/z/u::::Action::::
        
        // State : entry for: /c/B/0/c/m/z/j
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Date::Day->PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years : /c/B/0/c/m/z/j  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::/c/B/0/c/m/z/j" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/z/j::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::/c/B/0/c/m/z/j" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/z/j::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::/c/B/0/c/m/z/j" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/z/j::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/z/L" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/z/j
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/z/L
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/z/L" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/z/L::::Action::::
        
        // State : entry for: /c/B/0/c/m/z/X
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years->PushTracker_HFSM::On::Settings::Time::Set_Date::Years" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Set_Date::Years : /c/B/0/c/m/z/X  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Set_Date::Years::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Years::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Years::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Set_Date::Years::/c/B/0/c/m/z/X" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/z/X::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Years::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Set_Date::Years::/c/B/0/c/m/z/X" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/z/X::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Set_Date::Years::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Set_Date::Years::/c/B/0/c/m/z/X" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/z/X::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Set_Date::Years::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Set_Date::Years::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Time::Icon : /c/B/0/c/m/s  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Time::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Time::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Time::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Time::Icon::/c/B/0/c/m/s" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/m/s::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Time::Icon::/c/B/0/c/m/s" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/m/s::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Time::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Time::Icon::/c/B/0/c/m/s" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/m/s::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Time::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Time::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/m/I" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/m/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/m/I
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/m/I" << std::endl;
        #endif
        
        //::::/c/B/0/c/m/I::::Action::::
        
        // State : entry for: /c/B/0/c/m/R
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Time::Icon->PushTracker_HFSM::On::Settings::Time::Set_Time" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::About : /c/B/0/c/N  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::About::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::About::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/N/f
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/N/f" << std::endl;
    #endif
    
    //::::/c/B/0/c/N/f::::Action::::
    
    // State : entry for: /c/B/0/c/N/Q
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::About::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::About::/c/B/0/c/N" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/N::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::About::/c/B/0/c/N" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/N::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::About::/c/B/0/c/N" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/N::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::About::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::About::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/q" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/q
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/q" << std::endl;
        #endif
        
        //::::/c/B/0/c/q::::Action::::
        
        // State : entry for: /c/B/0/c/6
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About->PushTracker_HFSM::On::Settings::Exit" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::About::Icon : /c/B/0/c/N/Q  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::About::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::About::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::About::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::About::Icon::/c/B/0/c/N/Q" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/N/Q::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::About::Icon::/c/B/0/c/N/Q" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/N/Q::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::About::Icon::/c/B/0/c/N/Q" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/N/Q::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::About::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::About::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/9" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/N/9
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/N/9" << std::endl;
        #endif
        
        //::::/c/B/0/c/N/9::::Action::::
        
        // State : entry for: /c/B/0/c/N/o
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Icon->PushTracker_HFSM::On::Settings::About::Versions" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::About::Versions : /c/B/0/c/N/o  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::About::Versions::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::About::Versions::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::About::Versions::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::About::Versions::/c/B/0/c/N/o" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/N/o::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Versions::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::About::Versions::/c/B/0/c/N/o" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/N/o::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Versions::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::About::Versions::/c/B/0/c/N/o" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/N/o::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::About::Versions::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::About::Versions::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/U" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N/o
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/N/U
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/N/U" << std::endl;
        #endif
        
        //::::/c/B/0/c/N/U::::Action::::
        
        // State : entry for: /c/B/0/c/N/Z
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Versions->PushTracker_HFSM::On::Settings::About::Error" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/e" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N/o
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/N/e
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/N/e" << std::endl;
        #endif
        
        //::::/c/B/0/c/N/e::::Action::::
        
        // State : entry for: /c/B/0/c/N/Z
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Versions->PushTracker_HFSM::On::Settings::About::Error" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::About::Error : /c/B/0/c/N/Z  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::About::Error::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::About::Error::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::About::Error::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::About::Error::/c/B/0/c/N/Z" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/N/Z::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Error::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::About::Error::/c/B/0/c/N/Z" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/N/Z::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Error::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::About::Error::/c/B/0/c/N/Z" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/N/Z::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::About::Error::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::About::Error::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/P" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/c/N/p::::Guard::::
          else if ( hasError ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ hasError ] for EXTERNAL TRANSITION:/c/B/0/c/N/p evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exitChildren();
          // State : exit for: /c/B/0/c/N/Z
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exit();
          // External Transition : Action for: /c/B/0/c/N/P
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/P" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/P::::Action::::
          
          // External Transition : Action for: /c/B/0/c/N/p
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/p" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/p::::Action::::
          
          // State : entry for: /c/B/0/c/N/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error->PushTracker_HFSM::On::Settings::About::Error_Info" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/C" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exitChildren();
          // State : exit for: /c/B/0/c/N/Z
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exit();
          // External Transition : Action for: /c/B/0/c/N/P
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/P" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/P::::Action::::
          
          // External Transition : Action for: /c/B/0/c/N/C
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/C" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/C::::Action::::
          
          // State : entry for: /c/B/0/c/N/Q
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error->PushTracker_HFSM::On::Settings::About::Icon" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/J" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/c/N/p::::Guard::::
          else if ( hasError ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ hasError ] for EXTERNAL TRANSITION:/c/B/0/c/N/p evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exitChildren();
          // State : exit for: /c/B/0/c/N/Z
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exit();
          // External Transition : Action for: /c/B/0/c/N/J
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/J" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/J::::Action::::
          
          // External Transition : Action for: /c/B/0/c/N/p
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/p" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/p::::Action::::
          
          // State : entry for: /c/B/0/c/N/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error->PushTracker_HFSM::On::Settings::About::Error_Info" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/C" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exitChildren();
          // State : exit for: /c/B/0/c/N/Z
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ->exit();
          // External Transition : Action for: /c/B/0/c/N/J
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/J" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/J::::Action::::
          
          // External Transition : Action for: /c/B/0/c/N/C
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/c/N/C" << std::endl;
          #endif
          
          //::::/c/B/0/c/N/C::::Action::::
          
          // State : entry for: /c/B/0/c/N/Q
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error->PushTracker_HFSM::On::Settings::About::Icon" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::About::Error_Info : /c/B/0/c/N/c  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::About::Error_Info::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::About::Error_Info::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::About::Error_Info::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::About::Error_Info::/c/B/0/c/N/c" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/N/c::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Error_Info::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::About::Error_Info::/c/B/0/c/N/c" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/N/c::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::About::Error_Info::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::About::Error_Info::/c/B/0/c/N/c" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/N/c::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::About::Error_Info::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::About::Error_Info::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/A" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/N/A
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/N/A" << std::endl;
        #endif
        
        //::::/c/B/0/c/N/A::::Action::::
        
        // State : entry for: /c/B/0/c/N/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error_Info->PushTracker_HFSM::On::Settings::About::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/N/d" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/N/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/N/d
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/N/d" << std::endl;
        #endif
        
        //::::/c/B/0/c/N/d::::Action::::
        
        // State : entry for: /c/B/0/c/N/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::About::Error_Info->PushTracker_HFSM::On::Settings::About::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Units : /c/B/0/c/n  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Units::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Settings::Units::initialize ( void ) {
    // External Transition : Action for: /c/B/0/c/n/F
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/c/n/F" << std::endl;
    #endif
    
    //::::/c/B/0/c/n/F::::Action::::
    
    // State : entry for: /c/B/0/c/n/e
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Settings::Units::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Units::/c/B/0/c/n" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/n::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Units::/c/B/0/c/n" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/n::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Units::/c/B/0/c/n" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/n::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Units::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Units::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::NEXT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/7" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/n
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/7
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/7" << std::endl;
        #endif
        
        //::::/c/B/0/c/7::::Action::::
        
        // State : entry for: /c/B/0/c/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Units->PushTracker_HFSM::On::Settings::About" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Units::Set_Units : /c/B/0/c/n/B  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Units::Set_Units::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Units::Set_Units::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Units::Set_Units::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Units::Set_Units::/c/B/0/c/n/B" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/n/B::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::Set_Units::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Units::Set_Units::/c/B/0/c/n/B" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/n/B::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::Set_Units::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Units::Set_Units::/c/B/0/c/n/B" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/n/B::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Units::Set_Units::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Units::Set_Units::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/n/d" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/n/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/n/d
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/n/d" << std::endl;
        #endif
        
        //::::/c/B/0/c/n/d::::Action::::
        
        // State : entry for: /c/B/0/c/n/e
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Units::Set_Units->PushTracker_HFSM::On::Settings::Units::Icon" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Settings::Units::Icon : /c/B/0/c/n/e  * * */
  // Timer period
  const double PushTracker_HFSM::On::Settings::Units::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Settings::Units::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Settings::Units::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Settings::Units::Icon::/c/B/0/c/n/e" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/c/n/e::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Settings::Units::Icon::/c/B/0/c/n/e" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/c/n/e::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Settings::Units::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Settings::Units::Icon::/c/B/0/c/n/e" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/c/n/e::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Settings::Units::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Settings::Units::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::SELECT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/c/n/h" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/c/n/e
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/c/n/h
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/c/n/h" << std::endl;
        #endif
        
        //::::/c/B/0/c/n/h::::Action::::
        
        // State : entry for: /c/B/0/c/n/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Settings::Units::Icon->PushTracker_HFSM::On::Settings::Units::Set_Units" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info : /c/B/0/s  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Display_Info::initialize ( void ) {
    // Going into a choice pseudo-state, let it handle its
    // guards and perform the state transition
    if (false) { } // makes geneeration easier :)
    //::::/c/B/0/s/e::::Guard::::
    else if ( lowBattery ) {
      #ifdef DEBUG_OUTPUT
      std::cout << "GUARD [ lowBattery ] for EXTERNAL TRANSITION:/c/B/0/s/e evaluated to TRUE" << std::endl;
      #endif
      // Transitioning states!
    // External Transition : Action for: /c/B/0/s/Q
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/Q" << std::endl;
    #endif
    
    //::::/c/B/0/s/Q::::Action::::
    
    // External Transition : Action for: /c/B/0/s/e
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/e" << std::endl;
    #endif
    
    //::::/c/B/0/s/e::::Action::::
    
    // State : entry for: /c/B/0/s/B
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ->entry();
    
      // now initialize the actual next state
      PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ->initialize();
    }else if ( true ) {
      #ifdef DEBUG_OUTPUT
      std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/F" << std::endl;
      #endif
      // Transitioning states!
    // External Transition : Action for: /c/B/0/s/Q
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/Q" << std::endl;
    #endif
    
    //::::/c/B/0/s/Q::::Action::::
    
    // External Transition : Action for: /c/B/0/s/F
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/F" << std::endl;
    #endif
    
    //::::/c/B/0/s/F::::Action::::
    
    // State : entry for: /c/B/0/s/a
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->entry();
    
      // now initialize the actual next state
      PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->initialize();
    }}
  
  void PushTracker_HFSM::On::Display_Info::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::/c/B/0/s" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::/c/B/0/s" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::/c/B/0/s" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::POWER_ASSIST_TOGGLE:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/0" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/Q::::Guard::::
          else if ( SmartDrivePaired ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ SmartDrivePaired ] for EXTERNAL TRANSITION:/c/B/0/Q evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
          // State : exit for: /c/B/0/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
          // External Transition : Action for: /c/B/0/0
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/0" << std::endl;
          #endif
          
          //::::/c/B/0/0::::Action::::
          
          // External Transition : Action for: /c/B/0/Q
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/Q" << std::endl;
          #endif
          
          //::::/c/B/0/Q::::Action::::
          
          // State : entry for: /c/B/0/7
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Power_Assist_Toggle" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/r" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
          // State : exit for: /c/B/0/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
          // External Transition : Action for: /c/B/0/0
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/0" << std::endl;
          #endif
          
          //::::/c/B/0/0::::Action::::
          
          // External Transition : Action for: /c/B/0/r
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/r" << std::endl;
          #endif
          
          //::::/c/B/0/r::::Action::::
          
          // State : entry for: /c/B/0/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
          // State : entry for: /c/B/0/c/o
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Settings::Pair_SmartDrive" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      case Event::ENTER_SETTINGS:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/4" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
        // State : exit for: /c/B/0/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
        // External Transition : Action for: /c/B/0/4
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/4" << std::endl;
        #endif
        
        //::::/c/B/0/4::::Action::::
        
        // State : entry for: /c/B/0/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Settings" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/l" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
        // State : exit for: /c/B/0/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
        // External Transition : Action for: /c/B/0/l
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/l" << std::endl;
        #endif
        
        //::::/c/B/0/l::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::MOTOR_ON:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/G" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
        // State : exit for: /c/B/0/s
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
        // External Transition : Action for: /c/B/0/G
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/G" << std::endl;
        #endif
        
        //::::/c/B/0/G::::Action::::
        
        // State : entry for: /c/B/0/g
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Show_Speed" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::SCAN_APP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/wc" << std::endl;
          #endif
          // Going into a choice pseudo-state, let it handle its
          // guards and perform the state transition
          if (false) { } // makes geneeration easier :)
          //::::/c/B/0/D::::Guard::::
          else if ( PhonePaired ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "GUARD [ PhonePaired ] for EXTERNAL TRANSITION:/c/B/0/D evaluated to TRUE" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
          // State : exit for: /c/B/0/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
          // External Transition : Action for: /c/B/0/wc
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/wc" << std::endl;
          #endif
          
          //::::/c/B/0/wc::::Action::::
          
          // External Transition : Action for: /c/B/0/D
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/D" << std::endl;
          #endif
          
          //::::/c/B/0/D::::Action::::
          
          // State : entry for: /c/B/0/t
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Scan_for_App" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
          else if ( true ) {
            #ifdef DEBUG_OUTPUT
            std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/f" << std::endl;
            #endif
            // Transitioning states!
            // Call all from prev state down exits
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exitChildren();
          // State : exit for: /c/B/0/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ->exit();
          // External Transition : Action for: /c/B/0/wc
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/wc" << std::endl;
          #endif
          
          //::::/c/B/0/wc::::Action::::
          
          // External Transition : Action for: /c/B/0/f
          #ifdef DEBUG_OUTPUT
          std::cout << "TRANSITION::ACTION for /c/B/0/f" << std::endl;
          #endif
          
          //::::/c/B/0/f::::Action::::
          
          // State : entry for: /c/B/0/c
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
          // State : entry for: /c/B/0/c/s
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->entry();
          #ifdef DEBUG_OUTPUT
          std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info->PushTracker_HFSM::On::Settings::Pair_Phone" << std::endl;
          #endif
          
            // going into regular state
            PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ->initialize();
            // make sure nothing else handles this event
            handled = true;
            }
        }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Distance : /c/B/0/s/0  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Distance::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Display_Info::Distance::initialize ( void ) {
    // External Transition : Action for: /c/B/0/s/0/D
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/0/D" << std::endl;
    #endif
    
    //::::/c/B/0/s/0/D::::Action::::
    
    // State : entry for: /c/B/0/s/0/Q
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Distance::/c/B/0/s/0" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/0::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Distance::/c/B/0/s/0" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/0::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Distance::/c/B/0/s/0" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/0::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Distance::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Distance::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/x" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/0
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/x
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/x" << std::endl;
        #endif
        
        //::::/c/B/0/s/x::::Action::::
        
        // State : entry for: /c/B/0/s/a
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Distance->PushTracker_HFSM::On::Display_Info::Time" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Distance::Data : /c/B/0/s/0/l  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Distance::Data::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Distance::Data::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Data::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Distance::Data::/c/B/0/s/0/l" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/0/l::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Data::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Distance::Data::/c/B/0/s/0/l" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/0/l::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Data::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Distance::Data::/c/B/0/s/0/l" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/0/l::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Distance::Data::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Distance::Data::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Distance::Icon : /c/B/0/s/0/Q  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Distance::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Distance::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Distance::Icon::/c/B/0/s/0/Q" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/0/Q::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Distance::Icon::/c/B/0/s/0/Q" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/0/Q::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Distance::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Distance::Icon::/c/B/0/s/0/Q" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/0/Q::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Distance::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Distance::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/0/k" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/0/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/0/k
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/0/k" << std::endl;
        #endif
        
        //::::/c/B/0/s/0/k::::Action::::
        
        // State : entry for: /c/B/0/s/0/l
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Distance::Icon->PushTracker_HFSM::On::Display_Info::Distance::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/0/N" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/0/Q
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/0/N
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/0/N" << std::endl;
        #endif
        
        //::::/c/B/0/s/0/N::::Action::::
        
        // State : entry for: /c/B/0/s/0/l
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Distance::Icon->PushTracker_HFSM::On::Display_Info::Distance::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Drive_Range : /c/B/0/s/i  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Drive_Range::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Drive_Range::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Drive_Range::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Drive_Range::/c/B/0/s/i" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/i::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Drive_Range::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Drive_Range::/c/B/0/s/i" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/i::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Drive_Range::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Drive_Range::/c/B/0/s/i" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/i::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Drive_Range::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Drive_Range::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/A" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/i
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/A
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/A" << std::endl;
        #endif
        
        //::::/c/B/0/s/A::::Action::::
        
        // State : entry for: /c/B/0/s/h
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Drive_Range->PushTracker_HFSM::On::Display_Info::Coast" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Time : /c/B/0/s/a  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Time::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Time::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Time::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Time::/c/B/0/s/a" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/a::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Time::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Time::/c/B/0/s/a" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/a::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Time::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Time::/c/B/0/s/a" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/a::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Time::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Time::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/n" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/a
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/n
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/n" << std::endl;
        #endif
        
        //::::/c/B/0/s/n::::Action::::
        
        // State : entry for: /c/B/0/s/M
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Time->PushTracker_HFSM::On::Display_Info::Pushes" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Battery : /c/B/0/s/m  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Battery::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Battery::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Battery::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Battery::/c/B/0/s/m" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/m::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Battery::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Battery::/c/B/0/s/m" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/m::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Battery::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Battery::/c/B/0/s/m" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/m::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Battery::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Battery::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/I" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/I
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/I" << std::endl;
        #endif
        
        //::::/c/B/0/s/I::::Action::::
        
        // State : entry for: /c/B/0/s/i
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Battery->PushTracker_HFSM::On::Display_Info::Drive_Range" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/b" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/b
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/b" << std::endl;
        #endif
        
        //::::/c/B/0/s/b::::Action::::
        
        // State : entry for: /c/B/0/s/i
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Battery->PushTracker_HFSM::On::Display_Info::Drive_Range" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Pushes : /c/B/0/s/M  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Pushes::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Display_Info::Pushes::initialize ( void ) {
    // External Transition : Action for: /c/B/0/s/M/o
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/M/o" << std::endl;
    #endif
    
    //::::/c/B/0/s/M/o::::Action::::
    
    // State : entry for: /c/B/0/s/M/B
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Pushes::/c/B/0/s/M" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/M::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Pushes::/c/B/0/s/M" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/M::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Pushes::/c/B/0/s/M" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/M::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Pushes::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Pushes::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/U" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/M
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/U
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/U" << std::endl;
        #endif
        
        //::::/c/B/0/s/U::::Action::::
        
        // State : entry for: /c/B/0/s/m
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Pushes->PushTracker_HFSM::On::Display_Info::Battery" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Pushes::Data : /c/B/0/s/M/2  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Pushes::Data::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Data::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Data::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Pushes::Data::/c/B/0/s/M/2" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/M/2::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Data::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Pushes::Data::/c/B/0/s/M/2" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/M/2::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Data::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Pushes::Data::/c/B/0/s/M/2" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/M/2::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Pushes::Data::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Pushes::Data::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Pushes::Icon : /c/B/0/s/M/B  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Pushes::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Pushes::Icon::/c/B/0/s/M/B" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/M/B::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Pushes::Icon::/c/B/0/s/M/B" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/M/B::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Pushes::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Pushes::Icon::/c/B/0/s/M/B" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/M/B::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Pushes::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Pushes::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/M/5" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/M/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/M/5
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/M/5" << std::endl;
        #endif
        
        //::::/c/B/0/s/M/5::::Action::::
        
        // State : entry for: /c/B/0/s/M/2
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Pushes::Icon->PushTracker_HFSM::On::Display_Info::Pushes::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/M/s" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/M/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/M/s
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/M/s" << std::endl;
        #endif
        
        //::::/c/B/0/s/M/s::::Action::::
        
        // State : entry for: /c/B/0/s/M/2
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Pushes::Icon->PushTracker_HFSM::On::Display_Info::Pushes::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Coast : /c/B/0/s/h  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Coast::timerPeriod = 0;
  
  void PushTracker_HFSM::On::Display_Info::Coast::initialize ( void ) {
    // External Transition : Action for: /c/B/0/s/h/e
    #ifdef DEBUG_OUTPUT
    std::cout << "TRANSITION::ACTION for /c/B/0/s/h/e" << std::endl;
    #endif
    
    //::::/c/B/0/s/h/e::::Action::::
    
    // State : entry for: /c/B/0/s/h/g
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->entry();
    
    // initialize our new active state
    PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->initialize();
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Coast::/c/B/0/s/h" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/h::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Coast::/c/B/0/s/h" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/h::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Coast::/c/B/0/s/h" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/h::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Coast::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Coast::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/Z" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/h
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/Z
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/Z" << std::endl;
        #endif
        
        //::::/c/B/0/s/Z::::Action::::
        
        // State : entry for: /c/B/0/s/0
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Coast->PushTracker_HFSM::On::Display_Info::Distance" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Coast::Data : /c/B/0/s/h/T  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Coast::Data::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Coast::Data::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Data::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Coast::Data::/c/B/0/s/h/T" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/h/T::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Data::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Coast::Data::/c/B/0/s/h/T" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/h/T::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Data::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Coast::Data::/c/B/0/s/h/T" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/h/T::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Coast::Data::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Coast::Data::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Coast::Icon : /c/B/0/s/h/g  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Coast::Icon::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Coast::Icon::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Icon::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Coast::Icon::/c/B/0/s/h/g" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/h/g::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Icon::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Coast::Icon::/c/B/0/s/h/g" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/h/g::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Coast::Icon::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Coast::Icon::/c/B/0/s/h/g" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/h/g::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Coast::Icon::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Coast::Icon::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TAP:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/h/q" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/h/g
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/h/q
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/h/q" << std::endl;
        #endif
        
        //::::/c/B/0/s/h/q::::Action::::
        
        // State : entry for: /c/B/0/s/h/T
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Coast::Icon->PushTracker_HFSM::On::Display_Info::Coast::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/h/h" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/h/g
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/h/h
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/h/h" << std::endl;
        #endif
        
        //::::/c/B/0/s/h/h::::Action::::
        
        // State : entry for: /c/B/0/s/h/T
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Coast::Icon->PushTracker_HFSM::On::Display_Info::Coast::Data" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Display_Info::Low_Battery_Warning : /c/B/0/s/B  * * */
  // Timer period
  const double PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::/c/B/0/s/B" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/s/B::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::/c/B/0/s/B" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/s/B::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::/c/B/0/s/B" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/s/B::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Display_Info::Low_Battery_Warning::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/s/3" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ->exitChildren();
        // State : exit for: /c/B/0/s/B
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ->exit();
        // External Transition : Action for: /c/B/0/s/3
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/s/3" << std::endl;
        #endif
        
        //::::/c/B/0/s/3::::Action::::
        
        // State : entry for: /c/B/0/s/a
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Display_Info::Low_Battery_Warning->PushTracker_HFSM::On::Display_Info::Time" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Scan_for_App : /c/B/0/t  * * */
  // Timer period
  const double PushTracker_HFSM::On::Scan_for_App::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Scan_for_App::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Scan_for_App::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Scan_for_App::/c/B/0/t" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/t::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Scan_for_App::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Scan_for_App::/c/B/0/t" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/t::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Scan_for_App::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Scan_for_App::/c/B/0/t" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/t::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Scan_for_App::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Scan_for_App::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::CONNECTED:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/2" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exitChildren();
        // State : exit for: /c/B/0/t
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exit();
        // External Transition : Action for: /c/B/0/2
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/2" << std::endl;
        #endif
        
        //::::/c/B/0/2::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Scan_for_App->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::ENTER_SETTINGS:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/9" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exitChildren();
        // State : exit for: /c/B/0/t
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exit();
        // External Transition : Action for: /c/B/0/9
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/9" << std::endl;
        #endif
        
        //::::/c/B/0/9::::Action::::
        
        // State : entry for: /c/B/0/c
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Scan_for_App->PushTracker_HFSM::On::Settings" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      case Event::TIMEOUT:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/ZB" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exitChildren();
        // State : exit for: /c/B/0/t
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ->exit();
        // External Transition : Action for: /c/B/0/ZB
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/ZB" << std::endl;
        #endif
        
        //::::/c/B/0/ZB::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Scan_for_App->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::On::Show_Speed : /c/B/0/g  * * */
  // Timer period
  const double PushTracker_HFSM::On::Show_Speed::timerPeriod = 1;
  
  void PushTracker_HFSM::On::Show_Speed::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::On::Show_Speed::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::On::Show_Speed::/c/B/0/g" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/0/g::::Entry::::
    
  }
  
  void PushTracker_HFSM::On::Show_Speed::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::On::Show_Speed::/c/B/0/g" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/0/g::::Exit::::
    
  }
  
  void PushTracker_HFSM::On::Show_Speed::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::On::Show_Speed::/c/B/0/g" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/0/g::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::On::Show_Speed::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::On::Show_Speed::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::MOTOR_OFF:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/0/3" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->exitChildren();
        // State : exit for: /c/B/0/g
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ->exit();
        // External Transition : Action for: /c/B/0/3
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/0/3" << std::endl;
        #endif
        
        //::::/c/B/0/3::::Action::::
        
        // State : entry for: /c/B/0/N
        PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::On::Show_Speed->PushTracker_HFSM::On::Idle" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    if (!handled) {
      // now check parent states
      handled = _parentState->handleEvent( event );
    }
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::OTA : /c/B/F  * * */
  // Timer period
  const double PushTracker_HFSM::OTA::timerPeriod = 1;
  
  void PushTracker_HFSM::OTA::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::OTA::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::OTA::/c/B/F" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/F::::Entry::::
    
  }
  
  void PushTracker_HFSM::OTA::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::OTA::/c/B/F" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/F::::Exit::::
    
  }
  
  void PushTracker_HFSM::OTA::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::OTA::/c/B/F" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/F::::Tick::::
    
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::OTA::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::OTA::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::BUTTON_LEFT:
      handled = true;
      break;
    case Event::BUTTON_LEFT_HOLD:
      handled = true;
      break;
    case Event::BUTTON_RIGHT:
      handled = true;
      break;
    case Event::BUTTON_RIGHT_HOLD:
      handled = true;
      break;
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_OFF:
      handled = true;
      break;
    case Event::POWER_ON:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::START_OTA:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      default:
        break;
      }
    }
    // can't buble up, we are a root state.
    return handled;
  }
  /* * *  Definitions for PushTracker_HFSM::Sleep : /c/B/P  * * */
  // Timer period
  const double PushTracker_HFSM::Sleep::timerPeriod = 0.5;
  
  void PushTracker_HFSM::Sleep::initialize ( void ) {
    // if we're a leaf state, make sure we're active
    makeActive();
  }
  
  void PushTracker_HFSM::Sleep::entry ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "ENTRY::PushTracker_HFSM::Sleep::/c/B/P" << std::endl;
    #endif
    // Entry action for this state
    //::::/c/B/P::::Entry::::
    
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
  
  void PushTracker_HFSM::Sleep::exit ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "EXIT::PushTracker_HFSM::Sleep::/c/B/P" << std::endl;
    #endif
    // Call the Exit Action for this state
    //::::/c/B/P::::Exit::::
    
  }
  
  void PushTracker_HFSM::Sleep::tick ( void ) {
    #ifdef DEBUG_OUTPUT
    std::cout << "TICK::PushTracker_HFSM::Sleep::/c/B/P" << std::endl;
    #endif
    // Call the Tick Action for this state
    //::::/c/B/P::::Tick::::
          state_time+=TICKS_TO_MS((uint32)(0.5 * 1000.0));
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
        rtc_time+=TICKS_TO_MS((uint32)(0.5 * 1000.0));
        set_led_all(led_off);
        check_rtc();
        watchdog_kick();
    if ( _activeState != 0 && _activeState != this )
      _activeState->tick();
  }
  
  double PushTracker_HFSM::Sleep::getTimerPeriod ( void ) {
    return timerPeriod;
  }
  
  bool PushTracker_HFSM::Sleep::handleEvent ( StateMachine::Event* event ) {
    bool handled = false;
  
    // take care of all event types that this branch will not handle -
    // for more consistent run-time performnace
    switch ( event->type() ) {
    case Event::CONNECTED:
      handled = true;
      break;
    case Event::ENTER_SETTINGS:
      handled = true;
      break;
    case Event::MOTOR_OFF:
      handled = true;
      break;
    case Event::MOTOR_ON:
      handled = true;
      break;
    case Event::NEXT:
      handled = true;
      break;
    case Event::PAIRED:
      handled = true;
      break;
    case Event::POWER_ASSIST_TOGGLE:
      handled = true;
      break;
    case Event::POWER_OFF:
      handled = true;
      break;
    case Event::SCAN_APP:
      handled = true;
      break;
    case Event::SELECT:
      handled = true;
      break;
    case Event::START_OTA:
      handled = true;
      break;
    case Event::TAP:
      handled = true;
      break;
    case Event::TIMEOUT:
      handled = true;
      break;
    default:
      break;
    }
  
    if (handled) {
      // we didn't actually handle the event, but return anyway
      return false;
    }
  
    // handle internal transitions first
    switch ( event->type() ) {
    case Event::BUTTON_LEFT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/P/g" << std::endl;
        #endif
        // run transition action
        //::::/c/B/P/g::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_ON );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_RIGHT:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/P/L" << std::endl;
        #endif
        // run transition action
        //::::/c/B/P/L::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_ON );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_LEFT_HOLD:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/P/v" << std::endl;
        #endif
        // run transition action
        //::::/c/B/P/v::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_ON );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    case Event::BUTTON_RIGHT_HOLD:
      if ( false ) {  // makes generation easier :)
      }
      else if (true) {
        #ifdef DEBUG_OUTPUT
        std::cout << "NO GUARD on INTERNAL TRANSITION:/c/B/P/b" << std::endl;
        #endif
        // run transition action
        //::::/c/B/P/b::::Action::::
        eventFactory->spawnEvent( StateMachine::Event::POWER_ON );
        // make sure nothing else handles this event
        handled = true;
      }
      break;
    default:
      break;
    }
    if (!handled) {
      // handle external transitions here
      switch ( event->type() ) {
      case Event::POWER_ON:
        if ( false ) { }  // makes generation easier :)
        else if ( true ) {
          #ifdef DEBUG_OUTPUT
          std::cout << "NO GUARD on EXTERNAL TRANSITION:/c/B/T" << std::endl;
          #endif
          // Transitioning states!
          // Call all from prev state down exits
        PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->exitChildren();
        // State : exit for: /c/B/P
        PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ->exit();
        // External Transition : Action for: /c/B/T
        #ifdef DEBUG_OUTPUT
        std::cout << "TRANSITION::ACTION for /c/B/T" << std::endl;
        #endif
        
        //::::/c/B/T::::Action::::
        
        // State : entry for: /c/B/0
        PUSHTRACKER_HFSM_OBJ__ON_OBJ->entry();
        #ifdef DEBUG_OUTPUT
        std::cout << "STATE TRANSITION: PushTracker_HFSM::Sleep->PushTracker_HFSM::On" << std::endl;
        #endif
        
          // going into regular state
          PUSHTRACKER_HFSM_OBJ__ON_OBJ->initialize();
          // make sure nothing else handles this event
          handled = true;
          }
        break;
      default:
        break;
      }
    }
    // can't buble up, we are a root state.
    return handled;
  }
};

// Root of the HFSM
StateMachine::PushTracker_HFSM *const PushTracker_HFSM_root = &StateMachine::PUSHTRACKER_HFSM_OBJ_stateObj;
// Event Factory
StateMachine::EventFactory EVENT_FACTORY;
StateMachine::EventFactory *const eventFactory = &EVENT_FACTORY;

