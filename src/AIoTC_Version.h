/*
   This file is part of ArduinoIoTCloud.

   Copyright 2020 ARDUINO SA (http://www.arduino.cc/)

   This software is released under the GNU General Public License version 3,
   which covers the main part of arduino-cli.
   The terms of this license can be found at:
   https://www.gnu.org/licenses/gpl-3.0.en.html

   You can be released from the requirements of the above licenses by purchasing
   a commercial license. Buying such a license is mandatory if you want to modify or
   otherwise use the software for commercial activities involving the Arduino
   software without disclosing the source code of your own applications. To purchase
   a commercial license, send an email to license@arduino.cc.
*/

#ifndef ARDUINO_AIOTC_VERSION_H_
#define ARDUINO_AIOTC_VERSION_H_

/******************************************************************************
 * INCLUDE
 ******************************************************************************/

#include <stdint.h>

/******************************************************************************
 * TYPEDEF
 ******************************************************************************/

typedef struct __attribute__((__packed__))
{
  uint8_t  major;
  uint8_t  minor;
  uint8_t  patch;
  uint32_t rev_num;
} AIoTC_Version;

/******************************************************************************
 * CONSTANT
 ******************************************************************************/

static AIoTC_Version const AIOTC_VERSION __attribute__((section (".version_section"))) =
{
  .major = 0,
  .minor = 1,
  .patch = 0,
  .rev_num = 0
};

#endif /* ARDUINO_AIOTC_VERSION_H_ */
