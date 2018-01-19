#ifndef DISPLAY_DATA_INCLUDE_GUARD_
#define DISPLAY_DATA_INCLUDE_GUARD_
#include <blestack/hw.h>

#define PAGE_SIZE    64
#define SCREEN_WIDTH 64
#define SCREEN_SIZE  256

#define PAGE_0  0
#define PAGE_1  64
#define PAGE_2  128
#define PAGE_3  192
#define PAGE_4  256
#define PAGE_5  320
#define PAGE_6  384

#define ICON_SIZE             256

#define CLOCK_ICON_SIZE       96
#define BATTERY_ICON_SIZE     96
#define CHECK_ICON_SIZE       42
#define PHONE_ICON_SIZE       72
#define WIRELESS_ICON_SIZE    48

#define SMALL_FONT_START   32   // SPACE
#define SMALL_FONT_WIDTH   8
#define SMALL_FONT_HEIGHT  16
#define SMALL_FONT_OFFSET  ((SMALL_FONT_START * SMALL_FONT_WIDTH * SMALL_FONT_HEIGHT) / 8) //# 1552  # 33( ) * char_width * char height/8

#define LARGE_FONT_START   32   // SPACE
#define LARGE_FONT_WIDTH   12
#define LARGE_FONT_HEIGHT  32
#define LARGE_FONT_OFFSET  ((LARGE_FONT_START * LARGE_FONT_WIDTH * LARGE_FONT_HEIGHT) / 8)

extern const uint8 __code smallFont[1520];
extern const uint8 __code largeFont[4552];

extern const uint8 __code clockIcon[96];
extern const uint8 __code phoneIcon[72];
extern const uint8 __code batteryIcon[96];
extern const uint8 __code distanceIcon[256];
extern const uint8 __code driveUnitIcon[256];
extern const uint8 __code gearIcon[256];
extern const uint8 __code maxBoldIcon[256];
extern const uint8 __code omniWheelIcon[256];
extern const uint8 __code accelIcon[256];
extern const uint8 __code speedIcon[256];

#define smallCheckIcon_WIDTH  8
#define smallCheckIcon_HEIGHT 16
#define smallCheckIcon_SIZE   16
extern const uint8 __code smallCheckIcon[16];

#define checkIcon_WIDTH  16
#define checkIcon_HEIGHT 32
#define checkIcon_SIZE   64
extern const uint8 __code checkIcon[64];

#define xIcon_WIDTH  13
#define xIcon_HEIGHT 32
#define xIcon_SIZE   52
extern const uint8 __code xIcon[52];

#define instructionIcon_WIDTH  64
#define instructionIcon_HEIGHT 32
#define instructionIcon_SIZE   256
extern const uint8 __code instructionIcon[256];

#define tapSensitivityIcon_WIDTH  64
#define tapSensitivityIcon_HEIGHT 32
#define tapSensitivityIcon_SIZE   256
extern const uint8 __code tapSensitivityIcon[256];

#define warningIcon_WIDTH  64
#define warningIcon_HEIGHT 32
#define warningIcon_SIZE   256
extern const uint8 __code warningIcon[256];

#define coastIcon_WIDTH  46
#define coastIcon_HEIGHT 32
#define coastIcon_SIZE   184
extern const uint8 __code coastIcon[184];

#define exit1Icon_WIDTH  64
#define exit1Icon_HEIGHT 32
#define exit1Icon_SIZE   256
extern const uint8 __code exit1Icon[256];

#define exit2Icon_WIDTH  64
#define exit2Icon_HEIGHT 32
#define exit2Icon_SIZE   256
extern const uint8 __code exit2Icon[256];

#define pushIcon_WIDTH  64
#define pushIcon_HEIGHT 32
#define pushIcon_SIZE   256
extern const uint8 __code pushIcon[256];

#define sleepIcon_WIDTH  30
#define sleepIcon_HEIGHT 32
#define sleepIcon_SIZE   120
extern const uint8 __code sleepIcon[120];

#define wirelessIcon_WIDTH  12
#define wirelessIcon_HEIGHT 32
#define wirelessIcon_SIZE   48
extern const uint8 __code wirelessIcon[48];

#define bluetoothIcon_WIDTH  8
#define bluetoothIcon_HEIGHT 16
#define bluetoothIcon_SIZE   16
extern const uint8 __code bluetoothIcon[16];

#define doNotIcon_WIDTH  16
#define doNotIcon_HEIGHT 16
#define doNotIcon_SIZE   32
extern const uint8 __code doNotIcon[32];

#define controlPanelIcon_WIDTH  32
#define controlPanelIcon_HEIGHT 32
#define controlPanelIcon_SIZE   128
extern const uint8 __code controlPanelIcon[128];

#define downArrowIcon_WIDTH  8
#define downArrowIcon_HEIGHT 16
#define downArrowIcon_SIZE   16
extern const uint8 __code downArrowIcon[16];

#define lowBatteryIcon_WIDTH  8
#define lowBatteryIcon_HEIGHT 16
#define lowBatteryIcon_SIZE   16
extern const uint8 __code lowBatteryIcon[16];

#define unitsIcon_WIDTH  30
#define unitsIcon_HEIGHT 32
#define unitsIcon_SIZE   120
extern const uint8 __code unitsIcon[120];
#endif //DISPLAY_DATA_INCLUDE_GUARD_