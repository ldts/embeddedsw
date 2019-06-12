/******************************************************************************
*
* Copyright (C) 2015 Xilinx, Inc.  All rights reserved.
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
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
* 
*
******************************************************************************/

#ifndef _CRF_APB_H_
#define _CRF_APB_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * CRF_APB Base Address
 */
#define CRF_APB_BASEADDR      ((u32)0XFD1A0000U)

/**
 * Register: CRF_APB_ERR_CTRL
 */
#define CRF_APB_ERR_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000000U) )

#define CRF_APB_ERR_CTRL_SLVERR_ENABLE_SHIFT   0
#define CRF_APB_ERR_CTRL_SLVERR_ENABLE_WIDTH   1
#define CRF_APB_ERR_CTRL_SLVERR_ENABLE_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_IR_STATUS
 */
#define CRF_APB_IR_STATUS    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000004U) )

#define CRF_APB_IR_STATUS_ADDR_DECODE_ERR_SHIFT   0
#define CRF_APB_IR_STATUS_ADDR_DECODE_ERR_WIDTH   1
#define CRF_APB_IR_STATUS_ADDR_DECODE_ERR_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_IR_MASK
 */
#define CRF_APB_IR_MASK    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000008U) )

#define CRF_APB_IR_MASK_ADDR_DECODE_ERR_SHIFT   0
#define CRF_APB_IR_MASK_ADDR_DECODE_ERR_WIDTH   1
#define CRF_APB_IR_MASK_ADDR_DECODE_ERR_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_IR_ENABLE
 */
#define CRF_APB_IR_ENABLE    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000000CU) )

#define CRF_APB_IR_ENABLE_ADDR_DECODE_ERR_SHIFT   0
#define CRF_APB_IR_ENABLE_ADDR_DECODE_ERR_WIDTH   1
#define CRF_APB_IR_ENABLE_ADDR_DECODE_ERR_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_IR_DISABLE
 */
#define CRF_APB_IR_DISABLE    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000010U) )

#define CRF_APB_IR_DISABLE_ADDR_DECODE_ERR_SHIFT   0
#define CRF_APB_IR_DISABLE_ADDR_DECODE_ERR_WIDTH   1
#define CRF_APB_IR_DISABLE_ADDR_DECODE_ERR_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_CRF_ECO
 */
#define CRF_APB_CRF_ECO    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000018U) )

#define CRF_APB_CRF_ECO_REG_SHIFT   0
#define CRF_APB_CRF_ECO_REG_WIDTH   32
#define CRF_APB_CRF_ECO_REG_MASK    ((u32)0XFFFFFFFFU)

/**
 * Register: CRF_APB_CRF_WPROT
 */
#define CRF_APB_CRF_WPROT    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000001CU) )

#define CRF_APB_CRF_WPROT_ACTIVE_SHIFT   0
#define CRF_APB_CRF_WPROT_ACTIVE_WIDTH   1
#define CRF_APB_CRF_WPROT_ACTIVE_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_APLL_CTRL
 */
#define CRF_APB_APLL_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000020U) )

#define CRF_APB_APLL_CTRL_POST_SRC_SHIFT   24
#define CRF_APB_APLL_CTRL_POST_SRC_WIDTH   3
#define CRF_APB_APLL_CTRL_POST_SRC_MASK    ((u32)0X07000000U)

#define CRF_APB_APLL_CTRL_PRE_SRC_SHIFT   20
#define CRF_APB_APLL_CTRL_PRE_SRC_WIDTH   3
#define CRF_APB_APLL_CTRL_PRE_SRC_MASK    ((u32)0X00700000U)

#define CRF_APB_APLL_CTRL_CLKOUTDIV_SHIFT   17
#define CRF_APB_APLL_CTRL_CLKOUTDIV_WIDTH   1
#define CRF_APB_APLL_CTRL_CLKOUTDIV_MASK    ((u32)0X00020000U)

#define CRF_APB_APLL_CTRL_DIV2_SHIFT   16
#define CRF_APB_APLL_CTRL_DIV2_WIDTH   1
#define CRF_APB_APLL_CTRL_DIV2_MASK    ((u32)0X00010000U)

#define CRF_APB_APLL_CTRL_FBDIV_SHIFT   8
#define CRF_APB_APLL_CTRL_FBDIV_WIDTH   7
#define CRF_APB_APLL_CTRL_FBDIV_MASK    ((u32)0X00007F00U)

#define CRF_APB_APLL_CTRL_BYPASS_SHIFT   3
#define CRF_APB_APLL_CTRL_BYPASS_WIDTH   1
#define CRF_APB_APLL_CTRL_BYPASS_MASK    ((u32)0X00000008U)

#define CRF_APB_APLL_CTRL_RESET_SHIFT   0
#define CRF_APB_APLL_CTRL_RESET_WIDTH   1
#define CRF_APB_APLL_CTRL_RESET_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_APLL_CFG
 */
#define CRF_APB_APLL_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000024U) )

#define CRF_APB_APLL_CFG_LOCK_DLY_SHIFT   25
#define CRF_APB_APLL_CFG_LOCK_DLY_WIDTH   7
#define CRF_APB_APLL_CFG_LOCK_DLY_MASK    ((u32)0XFE000000U)

#define CRF_APB_APLL_CFG_LOCK_CNT_SHIFT   13
#define CRF_APB_APLL_CFG_LOCK_CNT_WIDTH   10
#define CRF_APB_APLL_CFG_LOCK_CNT_MASK    ((u32)0X007FE000U)

#define CRF_APB_APLL_CFG_LFHF_SHIFT   10
#define CRF_APB_APLL_CFG_LFHF_WIDTH   2
#define CRF_APB_APLL_CFG_LFHF_MASK    ((u32)0X00000C00U)

#define CRF_APB_APLL_CFG_CP_SHIFT   5
#define CRF_APB_APLL_CFG_CP_WIDTH   4
#define CRF_APB_APLL_CFG_CP_MASK    ((u32)0X000001E0U)

#define CRF_APB_APLL_CFG_RES_SHIFT   0
#define CRF_APB_APLL_CFG_RES_WIDTH   4
#define CRF_APB_APLL_CFG_RES_MASK    ((u32)0X0000000FU)

/**
 * Register: CRF_APB_APLL_FRAC_CFG
 */
#define CRF_APB_APLL_FRAC_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000028U) )

#define CRF_APB_APLL_FRAC_CFG_ENABLED_SHIFT   31
#define CRF_APB_APLL_FRAC_CFG_ENABLED_WIDTH   1
#define CRF_APB_APLL_FRAC_CFG_ENABLED_MASK    ((u32)0X80000000U)

#define CRF_APB_APLL_FRAC_CFG_SEED_SHIFT   22
#define CRF_APB_APLL_FRAC_CFG_SEED_WIDTH   3
#define CRF_APB_APLL_FRAC_CFG_SEED_MASK    ((u32)0X01C00000U)

#define CRF_APB_APLL_FRAC_CFG_ALGRTHM_SHIFT   19
#define CRF_APB_APLL_FRAC_CFG_ALGRTHM_WIDTH   1
#define CRF_APB_APLL_FRAC_CFG_ALGRTHM_MASK    ((u32)0X00080000U)

#define CRF_APB_APLL_FRAC_CFG_ORDER_SHIFT   18
#define CRF_APB_APLL_FRAC_CFG_ORDER_WIDTH   1
#define CRF_APB_APLL_FRAC_CFG_ORDER_MASK    ((u32)0X00040000U)

#define CRF_APB_APLL_FRAC_CFG_DATA_SHIFT   0
#define CRF_APB_APLL_FRAC_CFG_DATA_WIDTH   16
#define CRF_APB_APLL_FRAC_CFG_DATA_MASK    ((u32)0X0000FFFFU)

/**
 * Register: CRF_APB_DPLL_CTRL
 */
#define CRF_APB_DPLL_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000002CU) )

#define CRF_APB_DPLL_CTRL_POST_SRC_SHIFT   24
#define CRF_APB_DPLL_CTRL_POST_SRC_WIDTH   3
#define CRF_APB_DPLL_CTRL_POST_SRC_MASK    ((u32)0X07000000U)

#define CRF_APB_DPLL_CTRL_PRE_SRC_SHIFT   20
#define CRF_APB_DPLL_CTRL_PRE_SRC_WIDTH   3
#define CRF_APB_DPLL_CTRL_PRE_SRC_MASK    ((u32)0X00700000U)

#define CRF_APB_DPLL_CTRL_CLKOUTDIV_SHIFT   17
#define CRF_APB_DPLL_CTRL_CLKOUTDIV_WIDTH   1
#define CRF_APB_DPLL_CTRL_CLKOUTDIV_MASK    ((u32)0X00020000U)

#define CRF_APB_DPLL_CTRL_DIV2_SHIFT   16
#define CRF_APB_DPLL_CTRL_DIV2_WIDTH   1
#define CRF_APB_DPLL_CTRL_DIV2_MASK    ((u32)0X00010000U)

#define CRF_APB_DPLL_CTRL_FBDIV_SHIFT   8
#define CRF_APB_DPLL_CTRL_FBDIV_WIDTH   7
#define CRF_APB_DPLL_CTRL_FBDIV_MASK    ((u32)0X00007F00U)

#define CRF_APB_DPLL_CTRL_BYPASS_SHIFT   3
#define CRF_APB_DPLL_CTRL_BYPASS_WIDTH   1
#define CRF_APB_DPLL_CTRL_BYPASS_MASK    ((u32)0X00000008U)

#define CRF_APB_DPLL_CTRL_RESET_SHIFT   0
#define CRF_APB_DPLL_CTRL_RESET_WIDTH   1
#define CRF_APB_DPLL_CTRL_RESET_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_DPLL_CFG
 */
#define CRF_APB_DPLL_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000030U) )

#define CRF_APB_DPLL_CFG_LOCK_DLY_SHIFT   25
#define CRF_APB_DPLL_CFG_LOCK_DLY_WIDTH   7
#define CRF_APB_DPLL_CFG_LOCK_DLY_MASK    ((u32)0XFE000000U)

#define CRF_APB_DPLL_CFG_LOCK_CNT_SHIFT   13
#define CRF_APB_DPLL_CFG_LOCK_CNT_WIDTH   10
#define CRF_APB_DPLL_CFG_LOCK_CNT_MASK    ((u32)0X007FE000U)

#define CRF_APB_DPLL_CFG_LFHF_SHIFT   10
#define CRF_APB_DPLL_CFG_LFHF_WIDTH   2
#define CRF_APB_DPLL_CFG_LFHF_MASK    ((u32)0X00000C00U)

#define CRF_APB_DPLL_CFG_CP_SHIFT   5
#define CRF_APB_DPLL_CFG_CP_WIDTH   4
#define CRF_APB_DPLL_CFG_CP_MASK    ((u32)0X000001E0U)

#define CRF_APB_DPLL_CFG_RES_SHIFT   0
#define CRF_APB_DPLL_CFG_RES_WIDTH   4
#define CRF_APB_DPLL_CFG_RES_MASK    ((u32)0X0000000FU)

/**
 * Register: CRF_APB_DPLL_FRAC_CFG
 */
#define CRF_APB_DPLL_FRAC_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000034U) )

#define CRF_APB_DPLL_FRAC_CFG_ENABLED_SHIFT   31
#define CRF_APB_DPLL_FRAC_CFG_ENABLED_WIDTH   1
#define CRF_APB_DPLL_FRAC_CFG_ENABLED_MASK    ((u32)0X80000000U)

#define CRF_APB_DPLL_FRAC_CFG_SEED_SHIFT   22
#define CRF_APB_DPLL_FRAC_CFG_SEED_WIDTH   3
#define CRF_APB_DPLL_FRAC_CFG_SEED_MASK    ((u32)0X01C00000U)

#define CRF_APB_DPLL_FRAC_CFG_ALGRTHM_SHIFT   19
#define CRF_APB_DPLL_FRAC_CFG_ALGRTHM_WIDTH   1
#define CRF_APB_DPLL_FRAC_CFG_ALGRTHM_MASK    ((u32)0X00080000U)

#define CRF_APB_DPLL_FRAC_CFG_ORDER_SHIFT   18
#define CRF_APB_DPLL_FRAC_CFG_ORDER_WIDTH   1
#define CRF_APB_DPLL_FRAC_CFG_ORDER_MASK    ((u32)0X00040000U)

#define CRF_APB_DPLL_FRAC_CFG_DATA_SHIFT   0
#define CRF_APB_DPLL_FRAC_CFG_DATA_WIDTH   16
#define CRF_APB_DPLL_FRAC_CFG_DATA_MASK    ((u32)0X0000FFFFU)

/**
 * Register: CRF_APB_VPLL_CTRL
 */
#define CRF_APB_VPLL_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000038U) )

#define CRF_APB_VPLL_CTRL_POST_SRC_SHIFT   24
#define CRF_APB_VPLL_CTRL_POST_SRC_WIDTH   3
#define CRF_APB_VPLL_CTRL_POST_SRC_MASK    ((u32)0X07000000U)

#define CRF_APB_VPLL_CTRL_PRE_SRC_SHIFT   20
#define CRF_APB_VPLL_CTRL_PRE_SRC_WIDTH   3
#define CRF_APB_VPLL_CTRL_PRE_SRC_MASK    ((u32)0X00700000U)

#define CRF_APB_VPLL_CTRL_CLKOUTDIV_SHIFT   17
#define CRF_APB_VPLL_CTRL_CLKOUTDIV_WIDTH   1
#define CRF_APB_VPLL_CTRL_CLKOUTDIV_MASK    ((u32)0X00020000U)

#define CRF_APB_VPLL_CTRL_DIV2_SHIFT   16
#define CRF_APB_VPLL_CTRL_DIV2_WIDTH   1
#define CRF_APB_VPLL_CTRL_DIV2_MASK    ((u32)0X00010000U)

#define CRF_APB_VPLL_CTRL_FBDIV_SHIFT   8
#define CRF_APB_VPLL_CTRL_FBDIV_WIDTH   7
#define CRF_APB_VPLL_CTRL_FBDIV_MASK    ((u32)0X00007F00U)

#define CRF_APB_VPLL_CTRL_BYPASS_SHIFT   3
#define CRF_APB_VPLL_CTRL_BYPASS_WIDTH   1
#define CRF_APB_VPLL_CTRL_BYPASS_MASK    ((u32)0X00000008U)

#define CRF_APB_VPLL_CTRL_RESET_SHIFT   0
#define CRF_APB_VPLL_CTRL_RESET_WIDTH   1
#define CRF_APB_VPLL_CTRL_RESET_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_VPLL_CFG
 */
#define CRF_APB_VPLL_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000003CU) )

#define CRF_APB_VPLL_CFG_LOCK_DLY_SHIFT   25
#define CRF_APB_VPLL_CFG_LOCK_DLY_WIDTH   7
#define CRF_APB_VPLL_CFG_LOCK_DLY_MASK    ((u32)0XFE000000U)

#define CRF_APB_VPLL_CFG_LOCK_CNT_SHIFT   13
#define CRF_APB_VPLL_CFG_LOCK_CNT_WIDTH   10
#define CRF_APB_VPLL_CFG_LOCK_CNT_MASK    ((u32)0X007FE000U)

#define CRF_APB_VPLL_CFG_LFHF_SHIFT   10
#define CRF_APB_VPLL_CFG_LFHF_WIDTH   2
#define CRF_APB_VPLL_CFG_LFHF_MASK    ((u32)0X00000C00U)

#define CRF_APB_VPLL_CFG_CP_SHIFT   5
#define CRF_APB_VPLL_CFG_CP_WIDTH   4
#define CRF_APB_VPLL_CFG_CP_MASK    ((u32)0X000001E0U)

#define CRF_APB_VPLL_CFG_RES_SHIFT   0
#define CRF_APB_VPLL_CFG_RES_WIDTH   4
#define CRF_APB_VPLL_CFG_RES_MASK    ((u32)0X0000000FU)

/**
 * Register: CRF_APB_VPLL_FRAC_CFG
 */
#define CRF_APB_VPLL_FRAC_CFG    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000040U) )

#define CRF_APB_VPLL_FRAC_CFG_ENABLED_SHIFT   31
#define CRF_APB_VPLL_FRAC_CFG_ENABLED_WIDTH   1
#define CRF_APB_VPLL_FRAC_CFG_ENABLED_MASK    ((u32)0X80000000U)

#define CRF_APB_VPLL_FRAC_CFG_SEED_SHIFT   22
#define CRF_APB_VPLL_FRAC_CFG_SEED_WIDTH   3
#define CRF_APB_VPLL_FRAC_CFG_SEED_MASK    ((u32)0X01C00000U)

#define CRF_APB_VPLL_FRAC_CFG_ALGRTHM_SHIFT   19
#define CRF_APB_VPLL_FRAC_CFG_ALGRTHM_WIDTH   1
#define CRF_APB_VPLL_FRAC_CFG_ALGRTHM_MASK    ((u32)0X00080000U)

#define CRF_APB_VPLL_FRAC_CFG_ORDER_SHIFT   18
#define CRF_APB_VPLL_FRAC_CFG_ORDER_WIDTH   1
#define CRF_APB_VPLL_FRAC_CFG_ORDER_MASK    ((u32)0X00040000U)

#define CRF_APB_VPLL_FRAC_CFG_DATA_SHIFT   0
#define CRF_APB_VPLL_FRAC_CFG_DATA_WIDTH   16
#define CRF_APB_VPLL_FRAC_CFG_DATA_MASK    ((u32)0X0000FFFFU)

/**
 * Register: CRF_APB_PLL_STATUS
 */
#define CRF_APB_PLL_STATUS    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000044U) )

#define CRF_APB_PLL_STATUS_VPLL_STABLE_SHIFT   5
#define CRF_APB_PLL_STATUS_VPLL_STABLE_WIDTH   1
#define CRF_APB_PLL_STATUS_VPLL_STABLE_MASK    ((u32)0X00000020U)

#define CRF_APB_PLL_STATUS_DPLL_STABLE_SHIFT   4
#define CRF_APB_PLL_STATUS_DPLL_STABLE_WIDTH   1
#define CRF_APB_PLL_STATUS_DPLL_STABLE_MASK    ((u32)0X00000010U)

#define CRF_APB_PLL_STATUS_APLL_STABLE_SHIFT   3
#define CRF_APB_PLL_STATUS_APLL_STABLE_WIDTH   1
#define CRF_APB_PLL_STATUS_APLL_STABLE_MASK    ((u32)0X00000008U)

#define CRF_APB_PLL_STATUS_VPLL_LOCK_SHIFT   2
#define CRF_APB_PLL_STATUS_VPLL_LOCK_WIDTH   1
#define CRF_APB_PLL_STATUS_VPLL_LOCK_MASK    ((u32)0X00000004U)

#define CRF_APB_PLL_STATUS_DPLL_LOCK_SHIFT   1
#define CRF_APB_PLL_STATUS_DPLL_LOCK_WIDTH   1
#define CRF_APB_PLL_STATUS_DPLL_LOCK_MASK    ((u32)0X00000002U)

#define CRF_APB_PLL_STATUS_APLL_LOCK_SHIFT   0
#define CRF_APB_PLL_STATUS_APLL_LOCK_WIDTH   1
#define CRF_APB_PLL_STATUS_APLL_LOCK_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_APLL_TO_LPD_CTRL
 */
#define CRF_APB_APLL_TO_LPD_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000048U) )

#define CRF_APB_APLL_TO_LPD_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_APLL_TO_LPD_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_APLL_TO_LPD_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

/**
 * Register: CRF_APB_DPLL_TO_LPD_CTRL
 */
#define CRF_APB_DPLL_TO_LPD_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000004CU) )

#define CRF_APB_DPLL_TO_LPD_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DPLL_TO_LPD_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DPLL_TO_LPD_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

/**
 * Register: CRF_APB_VPLL_TO_LPD_CTRL
 */
#define CRF_APB_VPLL_TO_LPD_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000050U) )

#define CRF_APB_VPLL_TO_LPD_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_VPLL_TO_LPD_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_VPLL_TO_LPD_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

/**
 * Register: CRF_APB_ACPU_CTRL
 */
#define CRF_APB_ACPU_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000060U) )

#define CRF_APB_ACPU_CTRL_CLKACT_HALF_SHIFT   25
#define CRF_APB_ACPU_CTRL_CLKACT_HALF_WIDTH   1
#define CRF_APB_ACPU_CTRL_CLKACT_HALF_MASK    ((u32)0X02000000U)

#define CRF_APB_ACPU_CTRL_CLKACT_FULL_SHIFT   24
#define CRF_APB_ACPU_CTRL_CLKACT_FULL_WIDTH   1
#define CRF_APB_ACPU_CTRL_CLKACT_FULL_MASK    ((u32)0X01000000U)

#define CRF_APB_ACPU_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_ACPU_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_ACPU_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_ACPU_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_ACPU_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_ACPU_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DBG_TRACE_CTRL
 */
#define CRF_APB_DBG_TRACE_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000064U) )

#define CRF_APB_DBG_TRACE_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DBG_TRACE_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DBG_TRACE_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DBG_TRACE_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DBG_TRACE_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DBG_TRACE_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DBG_TRACE_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DBG_TRACE_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DBG_TRACE_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DBG_FPD_CTRL
 */
#define CRF_APB_DBG_FPD_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000068U) )

#define CRF_APB_DBG_FPD_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DBG_FPD_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DBG_FPD_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DBG_FPD_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DBG_FPD_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DBG_FPD_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DBG_FPD_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DBG_FPD_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DBG_FPD_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DP_VIDEO_REF_CTRL
 */
#define CRF_APB_DP_VIDEO_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000070U) )

#define CRF_APB_DP_VIDEO_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DP_VIDEO_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DP_VIDEO_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR1_SHIFT   16
#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR1_WIDTH   6
#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR1_MASK    ((u32)0X003F0000U)

#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DP_VIDEO_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DP_VIDEO_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DP_VIDEO_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DP_VIDEO_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DP_AUDIO_REF_CTRL
 */
#define CRF_APB_DP_AUDIO_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000074U) )

#define CRF_APB_DP_AUDIO_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DP_AUDIO_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DP_AUDIO_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR1_SHIFT   16
#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR1_WIDTH   6
#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR1_MASK    ((u32)0X003F0000U)

#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DP_AUDIO_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DP_AUDIO_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DP_AUDIO_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DP_AUDIO_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DP_STC_REF_CTRL
 */
#define CRF_APB_DP_STC_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X0000007CU) )

#define CRF_APB_DP_STC_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DP_STC_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DP_STC_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DP_STC_REF_CTRL_DIVISOR1_SHIFT   16
#define CRF_APB_DP_STC_REF_CTRL_DIVISOR1_WIDTH   6
#define CRF_APB_DP_STC_REF_CTRL_DIVISOR1_MASK    ((u32)0X003F0000U)

#define CRF_APB_DP_STC_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DP_STC_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DP_STC_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DP_STC_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DP_STC_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DP_STC_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DDR_CTRL
 */
#define CRF_APB_DDR_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000080U) )

#define CRF_APB_DDR_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DDR_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DDR_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DDR_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DDR_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DDR_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DDR_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DDR_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DDR_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_GPU_REF_CTRL
 */
#define CRF_APB_GPU_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000084U) )

#define CRF_APB_GPU_REF_CTRL_PP1_CLKACT_SHIFT   26
#define CRF_APB_GPU_REF_CTRL_PP1_CLKACT_WIDTH   1
#define CRF_APB_GPU_REF_CTRL_PP1_CLKACT_MASK    ((u32)0X04000000U)

#define CRF_APB_GPU_REF_CTRL_PP0_CLKACT_SHIFT   25
#define CRF_APB_GPU_REF_CTRL_PP0_CLKACT_WIDTH   1
#define CRF_APB_GPU_REF_CTRL_PP0_CLKACT_MASK    ((u32)0X02000000U)

#define CRF_APB_GPU_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_GPU_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_GPU_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_GPU_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_GPU_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_GPU_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_GPU_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_GPU_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_GPU_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_SATA_REF_CTRL
 */
#define CRF_APB_SATA_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000A0U) )

#define CRF_APB_SATA_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_SATA_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_SATA_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_SATA_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_SATA_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_SATA_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_SATA_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_SATA_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_SATA_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_PCIE_REF_CTRL
 */
#define CRF_APB_PCIE_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000B4U) )

#define CRF_APB_PCIE_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_PCIE_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_PCIE_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_PCIE_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_PCIE_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_PCIE_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_PCIE_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_PCIE_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_PCIE_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_GDMA_REF_CTRL
 */
#define CRF_APB_GDMA_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000B8U) )

#define CRF_APB_GDMA_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_GDMA_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_GDMA_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_GDMA_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_GDMA_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_GDMA_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_GDMA_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_GDMA_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_GDMA_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DPDMA_REF_CTRL
 */
#define CRF_APB_DPDMA_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000BCU) )

#define CRF_APB_DPDMA_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DPDMA_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DPDMA_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DPDMA_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DPDMA_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DPDMA_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DPDMA_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DPDMA_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DPDMA_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_TOPSW_MAIN_CTRL
 */
#define CRF_APB_TOPSW_MAIN_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000C0U) )

#define CRF_APB_TOPSW_MAIN_CTRL_CLKACT_SHIFT   24
#define CRF_APB_TOPSW_MAIN_CTRL_CLKACT_WIDTH   1
#define CRF_APB_TOPSW_MAIN_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_TOPSW_MAIN_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_TOPSW_MAIN_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_TOPSW_MAIN_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_TOPSW_MAIN_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_TOPSW_MAIN_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_TOPSW_MAIN_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_TOPSW_LSBUS_CTRL
 */
#define CRF_APB_TOPSW_LSBUS_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000C4U) )

#define CRF_APB_TOPSW_LSBUS_CTRL_CLKACT_SHIFT   24
#define CRF_APB_TOPSW_LSBUS_CTRL_CLKACT_WIDTH   1
#define CRF_APB_TOPSW_LSBUS_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_TOPSW_LSBUS_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_TOPSW_LSBUS_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_TOPSW_LSBUS_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_TOPSW_LSBUS_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_TOPSW_LSBUS_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_TOPSW_LSBUS_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_GTGREF0_REF_CTRL
 */
#define CRF_APB_GTGREF0_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000C8U) )

#define CRF_APB_GTGREF0_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_GTGREF0_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_GTGREF0_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_GTGREF0_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_GTGREF0_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_GTGREF0_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_GTGREF0_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_GTGREF0_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_GTGREF0_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT300_REF_CTRL
 */
#define CRF_APB_DFT300_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000D0U) )

#define CRF_APB_DFT300_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT300_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT300_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT300_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT300_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT300_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT300_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT300_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT300_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT270_REF_CTRL
 */
#define CRF_APB_DFT270_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000D4U) )

#define CRF_APB_DFT270_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT270_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT270_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT270_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT270_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT270_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT270_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT270_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT270_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT250_REF_CTRL
 */
#define CRF_APB_DFT250_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000D8U) )

#define CRF_APB_DFT250_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT250_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT250_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT250_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT250_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT250_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT250_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT250_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT250_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT125_REF_CTRL
 */
#define CRF_APB_DFT125_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000DCU) )

#define CRF_APB_DFT125_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT125_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT125_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT125_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT125_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT125_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT125_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT125_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT125_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT150_REF_CTRL
 */
#define CRF_APB_DFT150_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000F0U) )

#define CRF_APB_DFT150_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT150_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT150_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT150_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT150_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT150_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT150_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT150_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT150_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DFT333_REF_CTRL
 */
#define CRF_APB_DFT333_REF_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000F4U) )

#define CRF_APB_DFT333_REF_CTRL_CLKACT_SHIFT   24
#define CRF_APB_DFT333_REF_CTRL_CLKACT_WIDTH   1
#define CRF_APB_DFT333_REF_CTRL_CLKACT_MASK    ((u32)0X01000000U)

#define CRF_APB_DFT333_REF_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DFT333_REF_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DFT333_REF_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DFT333_REF_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DFT333_REF_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DFT333_REF_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_DBG_TSTMP_CTRL
 */
#define CRF_APB_DBG_TSTMP_CTRL    ( ( CRF_APB_BASEADDR ) + ((u32)0X000000F8U) )

#define CRF_APB_DBG_TSTMP_CTRL_DIVISOR0_SHIFT   8
#define CRF_APB_DBG_TSTMP_CTRL_DIVISOR0_WIDTH   6
#define CRF_APB_DBG_TSTMP_CTRL_DIVISOR0_MASK    ((u32)0X00003F00U)

#define CRF_APB_DBG_TSTMP_CTRL_SRCSEL_SHIFT   0
#define CRF_APB_DBG_TSTMP_CTRL_SRCSEL_WIDTH   3
#define CRF_APB_DBG_TSTMP_CTRL_SRCSEL_MASK    ((u32)0X00000007U)

/**
 * Register: CRF_APB_RST_FPD_TOP
 */
#define CRF_APB_RST_FPD_TOP    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000100U) )

#define CRF_APB_RST_FPD_TOP_PCIE_CFG_RESET_SHIFT   19
#define CRF_APB_RST_FPD_TOP_PCIE_CFG_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_PCIE_CFG_RESET_MASK    ((u32)0X00080000U)

#define CRF_APB_RST_FPD_TOP_PCIE_BRIDGE_RESET_SHIFT   18
#define CRF_APB_RST_FPD_TOP_PCIE_BRIDGE_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_PCIE_BRIDGE_RESET_MASK    ((u32)0X00040000U)

#define CRF_APB_RST_FPD_TOP_PCIE_CTRL_RESET_SHIFT   17
#define CRF_APB_RST_FPD_TOP_PCIE_CTRL_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_PCIE_CTRL_RESET_MASK    ((u32)0X00020000U)

#define CRF_APB_RST_FPD_TOP_DP_RESET_SHIFT   16
#define CRF_APB_RST_FPD_TOP_DP_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_DP_RESET_MASK    ((u32)0X00010000U)

#define CRF_APB_RST_FPD_TOP_SWDT_RESET_SHIFT   15
#define CRF_APB_RST_FPD_TOP_SWDT_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_SWDT_RESET_MASK    ((u32)0X00008000U)

#define CRF_APB_RST_FPD_TOP_AFI_FM5_RESET_SHIFT   12
#define CRF_APB_RST_FPD_TOP_AFI_FM5_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM5_RESET_MASK    ((u32)0X00001000U)

#define CRF_APB_RST_FPD_TOP_AFI_FM4_RESET_SHIFT   11
#define CRF_APB_RST_FPD_TOP_AFI_FM4_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM4_RESET_MASK    ((u32)0X00000800U)

#define CRF_APB_RST_FPD_TOP_AFI_FM3_RESET_SHIFT   10
#define CRF_APB_RST_FPD_TOP_AFI_FM3_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM3_RESET_MASK    ((u32)0X00000400U)

#define CRF_APB_RST_FPD_TOP_AFI_FM2_RESET_SHIFT   9
#define CRF_APB_RST_FPD_TOP_AFI_FM2_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM2_RESET_MASK    ((u32)0X00000200U)

#define CRF_APB_RST_FPD_TOP_AFI_FM1_RESET_SHIFT   8
#define CRF_APB_RST_FPD_TOP_AFI_FM1_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM1_RESET_MASK    ((u32)0X00000100U)

#define CRF_APB_RST_FPD_TOP_AFI_FM0_RESET_SHIFT   7
#define CRF_APB_RST_FPD_TOP_AFI_FM0_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_AFI_FM0_RESET_MASK    ((u32)0X00000080U)

#define CRF_APB_RST_FPD_TOP_GDMA_RESET_SHIFT   6
#define CRF_APB_RST_FPD_TOP_GDMA_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_GDMA_RESET_MASK    ((u32)0X00000040U)

#define CRF_APB_RST_FPD_TOP_GPU_PP1_RESET_SHIFT   5
#define CRF_APB_RST_FPD_TOP_GPU_PP1_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_GPU_PP1_RESET_MASK    ((u32)0X00000020U)

#define CRF_APB_RST_FPD_TOP_GPU_PP0_RESET_SHIFT   4
#define CRF_APB_RST_FPD_TOP_GPU_PP0_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_GPU_PP0_RESET_MASK    ((u32)0X00000010U)

#define CRF_APB_RST_FPD_TOP_GPU_RESET_SHIFT   3
#define CRF_APB_RST_FPD_TOP_GPU_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_GPU_RESET_MASK    ((u32)0X00000008U)

#define CRF_APB_RST_FPD_TOP_GT_RESET_SHIFT   2
#define CRF_APB_RST_FPD_TOP_GT_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_GT_RESET_MASK    ((u32)0X00000004U)

#define CRF_APB_RST_FPD_TOP_SATA_RESET_SHIFT   1
#define CRF_APB_RST_FPD_TOP_SATA_RESET_WIDTH   1
#define CRF_APB_RST_FPD_TOP_SATA_RESET_MASK    ((u32)0X00000002U)

/**
 * Register: CRF_APB_RST_FPD_APU
 */
#define CRF_APB_RST_FPD_APU    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000104U) )

#define CRF_APB_RST_FPD_APU_ACPU3_PWRON_RESET_SHIFT   13
#define CRF_APB_RST_FPD_APU_ACPU3_PWRON_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU3_PWRON_RESET_MASK    ((u32)0X00002000U)

#define CRF_APB_RST_FPD_APU_ACPU2_PWRON_RESET_SHIFT   12
#define CRF_APB_RST_FPD_APU_ACPU2_PWRON_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU2_PWRON_RESET_MASK    ((u32)0X00001000U)

#define CRF_APB_RST_FPD_APU_ACPU1_PWRON_RESET_SHIFT   11
#define CRF_APB_RST_FPD_APU_ACPU1_PWRON_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU1_PWRON_RESET_MASK    ((u32)0X00000800U)

#define CRF_APB_RST_FPD_APU_ACPU0_PWRON_RESET_SHIFT   10
#define CRF_APB_RST_FPD_APU_ACPU0_PWRON_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU0_PWRON_RESET_MASK    ((u32)0X00000400U)

#define CRF_APB_RST_FPD_APU_APU_L2_RESET_SHIFT   8
#define CRF_APB_RST_FPD_APU_APU_L2_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_APU_L2_RESET_MASK    ((u32)0X00000100U)

#define CRF_APB_RST_FPD_APU_ACPU3_RESET_SHIFT   3
#define CRF_APB_RST_FPD_APU_ACPU3_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU3_RESET_MASK    ((u32)0X00000008U)

#define CRF_APB_RST_FPD_APU_ACPU2_RESET_SHIFT   2
#define CRF_APB_RST_FPD_APU_ACPU2_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU2_RESET_MASK    ((u32)0X00000004U)

#define CRF_APB_RST_FPD_APU_ACPU1_RESET_SHIFT   1
#define CRF_APB_RST_FPD_APU_ACPU1_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU1_RESET_MASK    ((u32)0X00000002U)

#define CRF_APB_RST_FPD_APU_ACPU0_RESET_SHIFT   0
#define CRF_APB_RST_FPD_APU_ACPU0_RESET_WIDTH   1
#define CRF_APB_RST_FPD_APU_ACPU0_RESET_MASK    ((u32)0X00000001U)

/**
 * Register: CRF_APB_RST_DDR_SS
 */
#define CRF_APB_RST_DDR_SS    ( ( CRF_APB_BASEADDR ) + ((u32)0X00000108U) )

#define CRF_APB_RST_DDR_SS_DDR_RESET_SHIFT   3
#define CRF_APB_RST_DDR_SS_DDR_RESET_WIDTH   1
#define CRF_APB_RST_DDR_SS_DDR_RESET_MASK    ((u32)0X00000008U)

#define CRF_APB_RST_DDR_SS_APM_RESET_SHIFT   2
#define CRF_APB_RST_DDR_SS_APM_RESET_WIDTH   1
#define CRF_APB_RST_DDR_SS_APM_RESET_MASK    ((u32)0X00000004U)

#ifdef __cplusplus
}
#endif


#endif /* _CRF_APB_H_ */
