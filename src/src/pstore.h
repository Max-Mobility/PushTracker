#ifndef PSTORE_INCLUDE_GUARD_
#define PSTORE_INCLUDE_GUARD_
#ifndef PSTORE_H
#define PSTORE_H

#include <blestack/hw.h>
#include <blestack/ps.h>
#include <blestack/flash.h>
#include "globals.h"
#include "rtc.h"



extern const uint16 ps_cleaning;
extern const uint16 ps_bond;
extern const uint16 ps_motorMode;
extern const uint16 ps_setting;
extern const uint16 key_wb_data_offset;
extern const uint16 key_wb_data_count;
extern const uint16 ps_pairing;
extern const uint16 ps_time;
extern const uint16 ps_currentDay_info;
extern const uint16 ps_version;
extern const uint16 ps_motor_distance;

extern const uint16 ps_error_info ;
extern const uint16 ps_battery_cali;
extern const uint16 ps_est_distance;




extern uint8 ps_data_len;
extern uint8 ps_data[32];
extern uint32 erase_page;

extern uint8 wb_data_index;
extern uint8 wb_data_count;
extern uint8 wb_data[32];
extern uint8 ps_data_temp[2];

void init_flash(void);
void cleaningFlash(void);
void saveMotorMode(uint8 m_mode);
void loadMotorMode(void);
void saveSettings(void);
void loadSettings(void);
void ps_save_daily_info(void);
void ps_save_time(void);
void ps_load_time(void);
void ps_save_currentDay_info(void);
void ps_load_currentDay_info(void);
void ps_load_version(void);
void ps_save_version(void);
void ps_load_error(void);
void ps_save_error(void);
void ps_save_batCali(void);
void ps_load_batCali(void);
void ps_reset_error(void);
void ps_save_motorDistance(void);
void ps_load_motorDistance(void);
void ps_load_est_dis(void);
void ps_save_est_dis(void);



#endif

#endif //PSTORE_INCLUDE_GUARD_