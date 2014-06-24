/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
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
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* XILINX CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xosd_g.c
*
* This file contains a template for configuration table of Xilinx MVI Video
* On-Screen-Display (OSD) devices. For a real hardware system, Xilinx Platform
* Studio (XPS) will automatically generate a real configuration table to match
* the configuration of the OSD devices.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00a xd   08/18/08 First release
* </pre>
*
******************************************************************************/


/***************************** Include Files *********************************/


#include "xparameters.h"
#include "xosd.h"

/**
 * The configuration table for On-Screen-Display devices
 */
XOSD_Config XOSD_ConfigTable[] =
{
	{
		XPAR_OSD_0_DEVICE_ID,
		XPAR_OSD_0_BASEADDR,
		XPAR_OSD_0_NUM_LAYERS,
    XPAR_OSD_0_S_AXIS_VIDEO_DATA_WIDTH,

		XPAR_OSD_0_LAYER0_TYPE,
		XPAR_OSD_0_LAYER1_TYPE,
		XPAR_OSD_0_LAYER2_TYPE,
		XPAR_OSD_0_LAYER3_TYPE,
		XPAR_OSD_0_LAYER4_TYPE,
		XPAR_OSD_0_LAYER5_TYPE,
		XPAR_OSD_0_LAYER6_TYPE,
		XPAR_OSD_0_LAYER7_TYPE,

		XPAR_OSD_0_LAYER0_IMEM_SIZE,
		XPAR_OSD_0_LAYER0_INS_BOX_EN,
		XPAR_OSD_0_LAYER0_INS_LINE_EN,
		XPAR_OSD_0_LAYER0_INS_TEXT_EN,
		XPAR_OSD_0_LAYER0_CLUT_SIZE,
		XPAR_OSD_0_LAYER0_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER0_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER0_FONT_WIDTH,
		XPAR_OSD_0_LAYER0_FONT_HEIGHT,
		XPAR_OSD_0_LAYER0_FONT_BPP,
		XPAR_OSD_0_LAYER0_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER0_TEXT_NUM_STRINGS,
      		  XPAR_OSD_0_LAYER0_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER1_IMEM_SIZE,
		XPAR_OSD_0_LAYER1_INS_BOX_EN,
		XPAR_OSD_0_LAYER1_INS_LINE_EN,
		XPAR_OSD_0_LAYER1_INS_TEXT_EN,
		XPAR_OSD_0_LAYER1_CLUT_SIZE,
		XPAR_OSD_0_LAYER1_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER1_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER1_FONT_WIDTH,
		XPAR_OSD_0_LAYER1_FONT_HEIGHT,
		XPAR_OSD_0_LAYER1_FONT_BPP,
		XPAR_OSD_0_LAYER1_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER1_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER1_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER2_IMEM_SIZE,
		XPAR_OSD_0_LAYER2_INS_BOX_EN,
		XPAR_OSD_0_LAYER2_INS_LINE_EN,
		XPAR_OSD_0_LAYER2_INS_TEXT_EN,
		XPAR_OSD_0_LAYER2_CLUT_SIZE,
		XPAR_OSD_0_LAYER2_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER2_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER2_FONT_WIDTH,
		XPAR_OSD_0_LAYER2_FONT_HEIGHT,
		XPAR_OSD_0_LAYER2_FONT_BPP,
		XPAR_OSD_0_LAYER2_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER2_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER2_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER3_IMEM_SIZE,
		XPAR_OSD_0_LAYER3_INS_BOX_EN,
		XPAR_OSD_0_LAYER3_INS_LINE_EN,
		XPAR_OSD_0_LAYER3_INS_TEXT_EN,
		XPAR_OSD_0_LAYER3_CLUT_SIZE,
		XPAR_OSD_0_LAYER3_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER3_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER3_FONT_WIDTH,
		XPAR_OSD_0_LAYER3_FONT_HEIGHT,
		XPAR_OSD_0_LAYER3_FONT_BPP,
		XPAR_OSD_0_LAYER3_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER3_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER3_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER4_IMEM_SIZE,
		XPAR_OSD_0_LAYER4_INS_BOX_EN,
		XPAR_OSD_0_LAYER4_INS_LINE_EN,
		XPAR_OSD_0_LAYER4_INS_TEXT_EN,
		XPAR_OSD_0_LAYER4_CLUT_SIZE,
		XPAR_OSD_0_LAYER4_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER4_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER4_FONT_WIDTH,
		XPAR_OSD_0_LAYER4_FONT_HEIGHT,
		XPAR_OSD_0_LAYER4_FONT_BPP,
		XPAR_OSD_0_LAYER4_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER4_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER4_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER5_IMEM_SIZE,
		XPAR_OSD_0_LAYER5_INS_BOX_EN,
		XPAR_OSD_0_LAYER5_INS_LINE_EN,
		XPAR_OSD_0_LAYER5_INS_TEXT_EN,
		XPAR_OSD_0_LAYER5_CLUT_SIZE,
		XPAR_OSD_0_LAYER5_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER5_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER5_FONT_WIDTH,
		XPAR_OSD_0_LAYER5_FONT_HEIGHT,
		XPAR_OSD_0_LAYER5_FONT_BPP,
		XPAR_OSD_0_LAYER5_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER5_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER5_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER6_IMEM_SIZE,
		XPAR_OSD_0_LAYER6_INS_BOX_EN,
		XPAR_OSD_0_LAYER6_INS_LINE_EN,
		XPAR_OSD_0_LAYER6_INS_TEXT_EN,
		XPAR_OSD_0_LAYER6_CLUT_SIZE,
		XPAR_OSD_0_LAYER6_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER6_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER6_FONT_WIDTH,
		XPAR_OSD_0_LAYER6_FONT_HEIGHT,
		XPAR_OSD_0_LAYER6_FONT_BPP,
		XPAR_OSD_0_LAYER6_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER6_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER6_TEXT_MAX_STRING_LENGTH,

		XPAR_OSD_0_LAYER7_IMEM_SIZE,
		XPAR_OSD_0_LAYER7_INS_BOX_EN,
		XPAR_OSD_0_LAYER7_INS_LINE_EN,
		XPAR_OSD_0_LAYER7_INS_TEXT_EN,
		XPAR_OSD_0_LAYER7_CLUT_SIZE,
		XPAR_OSD_0_LAYER7_CLUT_MEMTYPE,
		XPAR_OSD_0_LAYER7_FONT_NUM_CHARS,
		XPAR_OSD_0_LAYER7_FONT_WIDTH,
		XPAR_OSD_0_LAYER7_FONT_HEIGHT,
		XPAR_OSD_0_LAYER7_FONT_BPP,
		XPAR_OSD_0_LAYER7_FONT_ASCII_OFFSET,
		XPAR_OSD_0_LAYER7_TEXT_NUM_STRINGS,
		XPAR_OSD_0_LAYER7_TEXT_MAX_STRING_LENGTH
	}
};
