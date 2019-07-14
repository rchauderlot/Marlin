/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "MKS GEN L"

//
// Heaters / Fans
//
// Power outputs EFBF or EFBE
#define MOSFET_D_PIN 7

//
// CS Pins wired to avoid conflict with the LCD
// See https://www.thingiverse.com/asset:66604
//

// #ifndef X_CS_PIN
//   #define X_CS_PIN 59
// #endif

// #ifndef Y_CS_PIN
//   #define Y_CS_PIN 63
// #endif

// AUX-2 Port scheme
//  -----------------------------
// | GND | D63 | D40 | D42 | D65 |
//  -----------------------------
// | 5 V | D59 | D64 | D44 | D66 |
//  -----------------------------

// AUX-2 Port assignations
//  -----------------------------
// |  -  |  Y  |  Z  |  E  |E1/Z1|
//  -----------------------------
// |  -  | SDI | SCK | SDO |  X  |
//  -----------------------------

#ifndef X_CS_PIN
  #define X_CS_PIN         66 // RCH: In AUX2 bottom pin header, the most right pin; Default value 59
#endif

#ifndef Y_CS_PIN
  #define Y_CS_PIN         63 // RCH: In AUX2 upper pin header, the forth pin starting on the right
#endif

#ifndef Z_CS_PIN
  #define Z_CS_PIN         40 // RCH: In AUX2 upper pin header, the third pin starting on the right
#endif

#ifndef E0_CS_PIN
  #define E0_CS_PIN        42 // RCH: In AUX2 upper pin header, the second pin starting on the right
#endif

#ifndef E1_CS_PIN
  #define E1_CS_PIN        65 // RCH: In AUX2 upper pin header, the most right pin; Default value 44
#endif

#if ENABLED(TMC_USE_SW_SPI)
  #ifndef TMC_SW_MOSI
    #define TMC_SW_MOSI    59 // RCH: In AUX2 bottom pin header, the forth pin starting on the right; A.K.A SDI; Default value 66
  #endif
  #ifndef TMC_SW_MISO
    #define TMC_SW_MISO    44 // RCH: pin 66: in AUX2 bottom pin header, the second most right pin; A.K.A SDO; Default value 44
  #endif
  #ifndef TMC_SW_SCK
    #define TMC_SW_SCK     64 // RCH: In AUX2 bottom pin header, the third pin starting on the right; A.K.A SCK; Default value 64
  #endif
#endif


#include "pins_RAMPS.h"
