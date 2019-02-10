/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   drv_mdcirq.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Low level interrupt controller driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * UESIM, cirq support
 *
 * removed!
 * removed!
 * add FPGA/ASIC different setting
 *
 * removed!
 * removed!
 * mdcirq register definition re-arch
 ****************************************************************************/

#ifndef __DRV_MDCIRQ_REG_H__
#define __DRV_MDCIRQ_REG_H__

#include "reg_base.h"

#if defined(__FPGA__)
#define MDCIRQ_128_64_VERSION 0
#else /* __FPGA__ */
#define MDCIRQ_128_64_VERSION 1
#endif /* __FPGA__ */

#if MDCIRQ_128_64_VERSION

/* Global MDCIRQ Definition  */
#define MAX_ISR_NUM                 128
#define MDCIRQ_LOWEST_PRI           (0x3FU)
#define MDCIRQ_HIGHEST_PRI          (0x0U)
#define MDCIRQ_TOTAL_PRI_LEVEL      (64U)   /* Priority Level */

#define MDCIRQ_BASE        (BASE_ADDR_MDCIRQ)
#define MDCIRQ_ISAR3100    (MDCIRQ_BASE + 0x0000)
#define MDCIRQ_ISAR6332    (MDCIRQ_BASE + 0x0004)
#define MDCIRQ_ISAR9564    (MDCIRQ_BASE + 0x0008)
#define MDCIRQ_ISAR12796   (MDCIRQ_BASE + 0x000C)
#define MDCIRQ_IMKR3100    (MDCIRQ_BASE + 0x0010)
#define MDCIRQ_IMKR6332    (MDCIRQ_BASE + 0x0014)
#define MDCIRQ_IMKR9564    (MDCIRQ_BASE + 0x0018)
#define MDCIRQ_IMKR12796   (MDCIRQ_BASE + 0x001C)
#define MDCIRQ_IMCR3100    (MDCIRQ_BASE + 0x0020)
#define MDCIRQ_IMCR6332    (MDCIRQ_BASE + 0x0024)
#define MDCIRQ_IMCR9564    (MDCIRQ_BASE + 0x0028)
#define MDCIRQ_IMCR12796   (MDCIRQ_BASE + 0x002C)
#define MDCIRQ_IMSR3100    (MDCIRQ_BASE + 0x0030)
#define MDCIRQ_IMSR6332    (MDCIRQ_BASE + 0x0034)
#define MDCIRQ_IMSR9564    (MDCIRQ_BASE + 0x0038)
#define MDCIRQ_IMSR12796   (MDCIRQ_BASE + 0x003C)
#define MDCIRQ_ISTR3100    (MDCIRQ_BASE + 0x0040)
#define MDCIRQ_ISTR6332    (MDCIRQ_BASE + 0x0044)
#define MDCIRQ_ISTR9564    (MDCIRQ_BASE + 0x0048)
#define MDCIRQ_ISTR12796   (MDCIRQ_BASE + 0x004C)
#define MDCIRQ_ISENR3100   (MDCIRQ_BASE + 0x0050)
#define MDCIRQ_ISENR6332   (MDCIRQ_BASE + 0x0054)
#define MDCIRQ_ISENR9564   (MDCIRQ_BASE + 0x0058)
#define MDCIRQ_ISENR12796  (MDCIRQ_BASE + 0x005C)
#define MDCIRQ_FIQCONR     (MDCIRQ_BASE + 0x0060)
#define MDCIRQ_IVCTR3100   (MDCIRQ_BASE + 0x0064)
#define MDCIRQ_IVCTR6332   (MDCIRQ_BASE + 0x0068)
#define MDCIRQ_IVCTR9564   (MDCIRQ_BASE + 0x006C)
#define MDCIRQ_IVCTR12796  (MDCIRQ_BASE + 0x0070)
#define MDCIRQ_INTID_CURR  (MDCIRQ_BASE + 0x0074)
#define MDCIRQ_PRLV_CURR   (MDCIRQ_BASE + 0x0078)
#define MDCIRQ_INTID_SPUR  (MDCIRQ_BASE + 0x007C)
#define MDCIRQ_CTRL_REG    (MDCIRQ_BASE + 0x0080)
#define MDCIRQ_DBG         (MDCIRQ_BASE + 0x0084)
#define MDCIRQ_SW_PRIACK   (MDCIRQ_BASE + 0x0088)
#define MDCIRQ_MIN_PRLV    (MDCIRQ_BASE + 0x008C)
#define MDCIRQ_PRLV_BASE   (MDCIRQ_BASE + 0x0090)
#define MDCIRQ_PRLV(n)     (MDCIRQ_PRLV_BASE + (n)*4 )
#define MDCIRQ_VEC_BASE    (MDCIRQ_BASE+0x0290)
#define MDCIRQ_VEC_ADDR(n) (MDCIRQ_VEC_BASE + (n)*4 )
#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_VEC_ADDR(MAX_ISR_NUM))


#else /* else of MDCIRQ_128_64_VERSION */

/* Global MDCIRQ Definition  */
#ifdef __UE_SIMULATOR__
/* mtk53009. Workaround for L1SIM interrupt controller adaptation MT6290 */
#define MAX_ISR_NUM                 (128U)
#else
#define MAX_ISR_NUM                 (96U)
#endif /* __UE_SIMULATOR__ */
#define MDCIRQ_LOWEST_PRI           (0xFU)
#define MDCIRQ_HIGHEST_PRI          (0x0U)
#define MDCIRQ_TOTAL_PRI_LEVEL      (16U)   /* Priority Level: 0 ~ 15 */

#define MDCIRQ_BASE        (BASE_ADDR_MDCIRQ)
#define MDCIRQ_ISAR9564    (MDCIRQ_BASE + 0x0000)
#define MDCIRQ_ISAR6332    (MDCIRQ_BASE + 0x0004)
#define MDCIRQ_ISAR3100    (MDCIRQ_BASE + 0x0008)
#define MDCIRQ_IMKR9564    (MDCIRQ_BASE + 0x000C)
#define MDCIRQ_IMKR6332    (MDCIRQ_BASE + 0x0010)
#define MDCIRQ_IMKR3100    (MDCIRQ_BASE + 0x0014)
#define MDCIRQ_IMCR9564    (MDCIRQ_BASE + 0x0018)
#define MDCIRQ_IMCR6332    (MDCIRQ_BASE + 0x001C)
#define MDCIRQ_IMCR3100    (MDCIRQ_BASE + 0x0020)
#define MDCIRQ_IMSR9564    (MDCIRQ_BASE + 0x0024)
#define MDCIRQ_IMSR6332    (MDCIRQ_BASE + 0x0028)
#define MDCIRQ_IMSR3100    (MDCIRQ_BASE + 0x002C)
#define MDCIRQ_ISTR9564    (MDCIRQ_BASE + 0x0030)
#define MDCIRQ_ISTR6332    (MDCIRQ_BASE + 0x0034)
#define MDCIRQ_ISTR3100    (MDCIRQ_BASE + 0x0038)
#define MDCIRQ_ISENR9564   (MDCIRQ_BASE + 0x003C)
#define MDCIRQ_ISENR6332   (MDCIRQ_BASE + 0x0040)
#define MDCIRQ_ISENR3100   (MDCIRQ_BASE + 0x0044)
#define MDCIRQ_FIQCONR     (MDCIRQ_BASE + 0x0048)
#define MDCIRQ_IVCTR9564   (MDCIRQ_BASE + 0x004C)
#define MDCIRQ_IVCTR6332   (MDCIRQ_BASE + 0x0050)
#define MDCIRQ_IVCTR3100   (MDCIRQ_BASE + 0x0054)
#define MDCIRQ_INTID_CURR  (MDCIRQ_BASE + 0x0058)
#define MDCIRQ_PRLV_CURR   (MDCIRQ_BASE + 0x005C)
#define MDCIRQ_INTID_SPUR  (MDCIRQ_BASE + 0x0060)
#define MDCIRQ_CTRL_REG    (MDCIRQ_BASE + 0x0064)
#define MDCIRQ_DBG         (MDCIRQ_BASE + 0x0068)
#define MDCIRQ_SW_PRIACK   (MDCIRQ_BASE + 0x006C)
#define MDCIRQ_MIN_PRLV    (MDCIRQ_BASE + 0x0070)
#define MDCIRQ_PRLV_BASE   (MDCIRQ_BASE + 0x0074)
#define MDCIRQ_PRLV(n)     (MDCIRQ_PRLV_BASE + (n)*4 )
#define MDCIRQ_VEC_BASE    (MDCIRQ_BASE+0x01F4)
#define MDCIRQ_VEC_ADDR(n) (MDCIRQ_VEC_BASE + (n)*4 )
#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_VEC_ADDR(MAX_ISR_NUM))

#endif /* end of "else of MDCIRQ_128_64_VERSION" */


/* MDCIRQ_FIQCONR Field */
#define MDCIRQ_FIQCONR_FIQ_MASK     (1UL << 0)
#define MDCIRQ_FIQCONR_FIQ_SEL(n)   ((n) << 8) /* n = 0 ~ MAX_ISR_NUM-1 */

/* MDCIRQ_CTRL_REG Field */
#define MDCIRQ_CTRL_REG_VIC_EN      (1UL << 0)
#define MDCIRQ_CTRL_REG_USE_IDSET   (1UL << 1)
//#define NUM_IRQ_SOURCES             MAX_ISR_NUM
#define MDCIRQ_ISAR_BASE  MDCIRQ_ISAR3100
#define MDCIRQ_IMKR_BASE  MDCIRQ_IMKR3100
#define MDCIRQ_IMCR_BASE  MDCIRQ_IMCR3100
#define MDCIRQ_IMSR_BASE  MDCIRQ_IMSR3100
#define MDCIRQ_ISTR_BASE  MDCIRQ_ISTR3100
#define MDCIRQ_ISENR_BASE MDCIRQ_ISENR3100
#define MDCIRQ_IVCTR_BASE MDCIRQ_IVCTR3100



#endif /* end of __DRV_MDCIRQ_REG_H__ */

