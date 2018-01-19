#ifndef OLED_INCLUDE_GUARD_
#define OLED_INCLUDE_GUARD_
#ifndef OLED_H
#define OLED_H

#include <blestack/hw.h>
#include <cstdlib>
#include <math.h>

#define OLED_ADDRESS 0x78

#define FIRST_Y  32
#define LAST_Y   95
#define START_Y  FIRST_Y
#define END_Y    LAST_Y

#define DRAM_SIZE    640
#define SCREEN_BYTES 256

enum scrolling_dir{
  scroll_hor = 0,
  scroll_ver =1,
  scroll_right,
  scroll_left,
  scroll_up,
  scroll_down
};

extern uint8 oled_i[10];
extern uint8 oled_d[300];

extern uint8 dram[DRAM_SIZE];
extern uint16 dram_ptr;
extern uint16 pos;
extern uint8 oled_string[15];

extern uint8 start_scroll;
extern uint8 oled_state;
extern enum scrolling_dir scrolling;

enum oled_on_off {
  oled_on = 1,
  oled_off = 0
};

enum oled_reset_on_off {
  oled_reset_on =0,
  oled_reset_off = 1
};



enum oled_sleep_on_off {
  oled_sleep = 1,
  oled_wakeup=0
};

void set_oled_power        (enum oled_on_off on_off);
void set_oled_reset        (enum oled_reset_on_off on_off);
void set_oled_start        (uint8 starty, uint8 endy);
void set_oled_page         (uint8 page);
void set_oled_column       (uint8 column);
void oled_init             (void);
void display_on            (enum oled_on_off on_off);
void display_sleep         (enum oled_sleep_on_off on_off);
void clear_dram            (void);
void display_write         (void);
void display_scrolling     (void);

// text functions
void display_largeFont     (char* str, uint8 len, uint8 col);
void display_largeCentered (char* str, uint8 col);
void display_smallFont     (char* str, uint8 len, uint8 pg, uint8 col);
void display_smallCentered (char* str, uint8 pg, uint8 col);
void display_centeredFloat (float num, uint8 col);
void display_centeredInt   (int num, uint8 col);

enum TimeMask {
  TimeMask_None,
  TimeMask_Hour,
  TimeMask_Minute,
  TimeMask_TenMinute,
  TimeMask_TimeAll,
  TimeMask_Day,
  TimeMask_Month,
  TimeMask_TenYear,
  TimeMask_Year,
  TimeMask_DateAll,
  TimeMask_All
};
//display OTA status

void display_OTA(uint8 col);

// display info items
void display_drive_icon    (uint8 col);
void display_coast_icon    (uint8 col);
void display_push_icon     (uint8 col);
void display_time          (uint8 col);
void display_timeBlank     (uint8 col, enum TimeMask timeMask);
void display_date          (uint8 col);
void display_dateBlank     (uint8 col, enum TimeMask timeMask);
void display_timeFormat    (uint8 col);
void display_batteries     (uint8 col);
void display_ble_state     (uint8 bt_state, uint8 col);
void display_adc           (uint16 result);
void display_pushes		   (uint8 col);
void display_distance	   (uint8 col);
void display_coastTime	   (uint8 col);
void display_units         (uint8 col);
void display_controlMode   (uint8 col);
void display_ezMode        (uint8 col);
void display_est_distance  (uint8 col);

// icons
void display_smallCheckIcon(int pg, int col);
void display_driveUnitIcon (uint8 col);
void display_maxBoldIcon   (uint8 col);
void display_gearIcon      (uint8 col);
void display_distanceIcon  (uint8 col);
void display_clockIcon     (uint8 col);
void display_wirelessIcon  (uint8 col);
void display_phoneIcon     (uint8 col);
void display_batteryFilled (uint8 pg, uint8 col, uint8 percentFilled);

void display_exit1Icon     (uint8 col);
void display_exit2Icon     (uint8 col);

void display_checkIcon        (uint8 col);
void display_xIcon            (uint8 col);
void display_doNotIcon        (uint8 pg, uint8 col);

void display_coastIcon          (uint8 col);
void display_tapSensitivityIcon (uint8 col);
void display_controlPanelIcon   (uint8 col);
void display_bluetoothIcon      (uint8 pg, uint8 col);
void display_downArrowIcon      (uint8 pg, uint8 col);
void display_instructionIcon    (uint8 col);
void display_lowBatteryIcon     (uint8 pg, uint8 col);
void display_sleepIcon          (uint8 col);
void display_unitsIcon          (uint8 col);
void display_warningIcon        (uint8 col);

void display_numberMenu         ( int col );
void display_optionMenu         ( int col );

// settings menu items
void display_setSDOptions  		(uint8 col);
void display_pairPhone  		(uint8 col);
void display_pairPhoneFailed    (uint8 col);
void display_pairPhoneSuccess   (uint8 col);
void display_pairSD        		(uint8 col);
void display_pairSDFailed  		(uint8 col);
void display_pairSDSuccess		(uint8 col);
void display_setClock      		(uint8 col);
void display_setUnits      		(uint8 col);
void display_exitSettings  		(uint8 col);
void display_settings      		(uint8 col);
void display_DeviceInfo			(uint8 col);
void display_Version			(uint8 col);
void display_Error				(uint8 col);
void display_ErrorType			(uint8 col);

// sdOptions menu items
void display_setMaxSpeed       (uint8 col);
void display_setAccel          (uint8 col);
void display_setTapSensitivity (uint8 col);
void display_setControlMode    (uint8 col);
void display_sdOptions_back    (uint8 col);

// utilities
void display_connectingPhone   (uint8 col,uint8 wirelessOnOff);
void display_connectingSD	   (uint8 col,uint8 wirelessOnOff);

#endif
#endif //OLED_INCLUDE_GUARD_