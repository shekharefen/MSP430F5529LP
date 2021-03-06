
/* ########################################################################## */
/*
 * This file was created by www.DavesMotleyProjects.com
 *
 * This software is provided under the following conditions:
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *                                                                            */
/* ########################################################################## */


/* ===========================================================================*/
/*
 * FileName:      MSP430F5529LP_TIMERA2.h
 *
 * This file provides functions for the Timer A2 module on the
 * Texas Instruments MSP430F5529 Launchpad development board.
 *
 * Version 1.0
 *
 * Rev. 1.0, Initial Release
 * Rev. 1.1, minor editorial updates.
 * Rev. 2.0, Added the Expired and Expired32 functions.
 *
 *                                                                            */
/* ===========================================================================*/

#ifndef __MSP430F5529LP_TIMERA2_H__
#define __MSP430F5529LP_TIMERA2_H__

#include "MSP430F5529LP.h"


/******************************************************************************
   PUBLIC DEFINITIONS
******************************************************************************/

    typedef void (*TIMERA2_ButtonService_t) (void);


/******************************************************************************
   PUBLIC FUNCTION PROTOTYPES
******************************************************************************/

   void MSP430F5529LP_TIMERA2_Initialize(void);

   void delay(uint16_t ms);

   uint16_t GetTick(void);

   uint16_t Elapse(uint16_t start,
                   uint16_t stop);

   uint16_t Expired(uint16_t duration,
                    uint16_t start,
                    uint16_t stop);

   uint32_t millis(void);

   uint32_t GetTick32(void);

   uint32_t Elapse32(uint32_t start,
                     uint32_t stop);

   uint32_t Expired32(uint32_t duration,
                      uint32_t start,
                      uint32_t stop);


/******************************************************************************
   PUBLIC VARIABLES (extern)
******************************************************************************/


/******************************************************************************
	End MSP430F5529LP_TIMERA2.h
******************************************************************************/

#endif   // __MSP430F5529LP_TIMERA2_H__

