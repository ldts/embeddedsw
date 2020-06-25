/******************************************************************************
* Copyright (c) 2020 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


#ifndef XPM_DEBUG_H_
#define XPM_DEBUG_H_

#include "xpm_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/*********************** Power domain specific Errors ***********************/
/************************** (0x3000) - (0x30FF) ******************************/
/* Invalid power domain ID error */
#define XPM_INT_ERR_INVALID_PWR_DOMAIN		0x3000U

/*********************** Generic House Cleaning Errors ***********************/
/*************************** (0x3100) - (0x31FF) *****************************/
/* Error during power domain init */
#define XPM_INT_ERR_POWER_DOMAIN_INIT		0x3100U
/* Invalid base address */
#define XPM_INT_ERR_INVALID_BASEADDR		0x3101U
/* Power supply state does not match */
#define XPM_INT_ERR_POWER_SUPPLY		0x3102U
/* Error during apply Ams trim */
#define XPM_INT_ERR_AMS_TRIM			0x3103U
/* Error during pre BISR requirement */
#define XPM_INT_ERR_PRE_BISR_REQ		0x3104U
/* Scan clear done timeout */
#define XPM_INT_ERR_SCAN_CLEAR_TIMEOUT		0x3105U
/* Scan clear pass timeout */
#define XPM_INT_ERR_SCAN_PASS_TIMEOUT		0x3106U
/* LBIST done timeout */
#define XPM_INT_ERR_LBIST_DONE_TIMEOUT		0x3107U
/* Error during BISR repair */
#define XPM_INT_ERR_BISR_REPAIR			0x3108U
/* Mem clear done timeout */
#define XPM_INT_ERR_MEM_CLEAR_DONE_TIMEOUT	0x3109U
/* Mem clear pass timeout */
#define XPM_INT_ERR_MEM_CLEAR_PASS_TIMEOUT	0x310AU
/* MBIST done timeout */
#define XPM_INT_ERR_MBIST_DONE_TIMEOUT		0x310BU
/* MBIST not done proper */
#define XPM_INT_ERR_MBIST_GOOD			0x310CU
/* MBIST GO bit not set */
#define XPM_INT_ERR_MBIST_GO			0x310DU

/************************** LPD specific Errors ******************************/
/************************** (0x3200) - (0x32FF) ******************************/
/* Error during PMC-LPD DFX Isolation enable/disable */
#define XPM_INT_ERR_PMC_LPD_DFX_ISO		0x3200U
/* Error during PMC-LPD Isolation enable/disable */
#define XPM_INT_ERR_PMC_LPD_ISO			0x3201U
/* Error during LPD-SOC Isolation enable/disable */
#define XPM_INT_ERR_LPD_SOC_ISO			0x3202U
/* Error during PS POR reset assert/release */
#define XPM_INT_ERR_PS_POR			0x3203U
/* Error during PS SRST reset assert/release */
#define XPM_INT_ERR_PS_SRST			0x3204U
/* Error during XRAM BISR repair */
#define XPM_INT_ERR_XRAM_BISR_REPAIR		0x3205U
/* Error during XRAM MBIST */
#define XPM_INT_ERR_XRAM_MBIST			0x3206U

/************************* Device specific Errors ****************************/
/************************** (0x3300) - (0x33FF) ******************************/
/* Invalid device ID */
#define XPM_INT_ERR_INVALID_DEVICE		0x3300U

/************************* Reset specific Errors *****************************/
/************************** (0x3400) - (0x34FF) ******************************/
/* Invalid Reset ID */
#define XPM_INT_ERR_INVALID_RST			0x3400U
/* Invalid reset state */
#define XPM_INT_ERR_RST_STATE			0x3401U
/* Error during reset release */
#define XPM_INT_ERR_RST_RELEASE			0x3402U
/* Error during reset assert */
#define XPM_INT_ERR_RST_ASSERT			0x3403U

/************************** FPD specific Errors ******************************/
/************************** (0x3500) - (0x35FF) ******************************/
/* Error during FPD power on reset release/assert */
#define XPM_INT_ERR_FPD_POR			0x3500U
/* Error during FPD-SOC Isolation disable/enable */
#define XPM_INT_ERR_FPD_SOC_ISO			0x3501U
/* Error during SRST FPD reset release/assert */
#define XPM_INT_ERR_SRST_FPD			0x3502U

/************************* Miscellaneous Errors ******************************/
/************************** (0x3600) - (0x36FF) ******************************/
/* Error during IPI send */
#define XPM_INT_ERR_IPI_SEND			0x3600U
/* Error during get IPI status */
#define XPM_INT_ERR_IPI_STATUS			0x3601U
/* PSMFW is not present */
#define XPM_INT_ERR_PSMFW_NOT_PRESENT		0x3602U

#define XPm_PrintDbgErr(Status, DbgErr)			\
	do {						\
		if (XST_SUCCESS != Status) {		\
			PmErr("0x%x\r\n", DbgErr);	\
		}					\
	} while (0)					\

#endif /* XPM_DEBUG_H_ */
