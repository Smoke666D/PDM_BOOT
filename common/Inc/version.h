/*
 * version.h
 *
 *  Created on: 9 февр. 2022 г.
 *      Author: 79110
 */

#ifndef INC_VERSION_H_
#define INC_VERSION_H_

#include "stm32f4xx_hal.h"

#define FIRMWARE_VERSION_ADR    0x8007FF0U

#define FIRMWARE_VERSION_MAJOR  1
#define FIRMWARE_VERSION_MINOR  0
#define FIRMWARE_VERSION_PATCH  3

#if ( FIRMWARE_VERSION_MAJOR > 255U )
#error( "Major version too big" )
#endif
#if ( FIRMWARE_VERSION_MINOR > 255U )
#error( "Minor version too big" )
#endif
#if ( FIRMWARE_VERSION_FIX > 255U )
#error( "Fix version too big" )
#endif


#endif /* INC_VERSION_H_ */
