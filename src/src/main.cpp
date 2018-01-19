/* ==========================================================================
 * Bluegiga BLE C SDK project file - BLE project main template
 * http://www.bluegiga.com/support
 * ==========================================================================
 * This is free software distributed under the terms of the MIT license
 * reproduced below.
 *
 * Copyright (c) 2014 Bluegiga Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * ========================================================================== */
#define CC2541
extern "C" {
#include <blestack/blestack.h>
#include <blestack/gap.h>
#include <blestack/hw.h>
#include <blestack/dma.h>
  
#include "adc.h"
#include "ble.h"
#include "stubs.h"
#include "i2c.h"
#include "oled.h"
#include "display_data.h"
#include "acc.h"
#include "ioint.h"
#include "leds.h"
#include "motor.h"
#include "pstore.h"
#include "rtc.h"
#include "globals.h"
#include "Timer1.h"
}

#include "PushTracker_HFSM_Events.hpp"
#include "PushTracker_HFSM_GeneratedStates.hpp"

extern "C" void timer_update(uint8 context, uint8 event)
{
  StateMachine::Event* e;
  e = eventFactory->getNextEvent();
  while (e != 0) {
    bool handled = PushTracker_HFSM_root->handleEvent( e );
    eventFactory->consumeEvent( e );
    e = eventFactory->getNextEvent();
  }
  
  PushTracker_HFSM_root->tick();
  
  e = eventFactory->getNextEvent();
  while (e != 0) {
    bool handled = PushTracker_HFSM_root->handleEvent( e );
    eventFactory->consumeEvent( e );
    e = eventFactory->getNextEvent();
  }

  task_timed_cancel_masked((enum task_id)task_id_timer_update, 0, 0, 0, 0);
  if (!PushTracker_HFSM_root->hasStopped()) {
    task_send_timed((enum task_id)task_id_timer_update, 0, 1, (int)(PushTracker_HFSM_root->getActiveLeaf()->getTimerPeriod() * 32768.0) );
  }
}

void main(void)
{
    ////////////////////////////////////////////////////////////////
    // TODO: MAKE SURE YOU UPDATE THE CONTENT OF THE <address> TAG
    // AND THE <license> TAG FOUND IN THE "/config/license.xml" FILE
    // THAT COMES WITH THIS TEMPLATE.
    //
    // Use the Bluegiga BLE SW Update application and the "Info"
    // button to get the target module's current MAC address and
    // 64-character license key, and copy them into the two tags in
    // this file prior to flashing any firmware built with IAR onto
    // the module; otherwise, you may erase the license key and
    // render the BLE radio inoperable until you obtain a new
    // replacement from Bluegiga support.
    //
    // The project will generate a Pre-build action compiler error
    // if you have not supplied a valid license.
    //
    // Also, if you switch out the target module during development
    // and use a new module, ensure that you update the MAC address
    // and license key at the same time. Each module requires its
    // own MAC address and license key.
    ////////////////////////////////////////////////////////////////
   // CLKCONCMD = (CLKCONCMD & ~(CLKCON_OSC | CLKCON_CLKSPD)) | CLKCON_CLKSPD_32M;
    // Wait until clock source has changed
   // while (CLKCONSTA & CLKCON_OSC);
    // setup configuration, clock, DMA controller, etc.
    blestack_config_init();

    // initialize BLE stack
    blestack_init();
    
    PushTracker_HFSM_root->initialize();
  
    // Start the state timer
    task_send_timed((enum task_id)task_id_timer_update, 0, 1, 0);
    
    // start advertisement mode for discoverable/connectable
    // gap_set_mode(gap_general_discoverable, gap_undirected_connectable);

    // start main stack loop
    blestack_loop();
}