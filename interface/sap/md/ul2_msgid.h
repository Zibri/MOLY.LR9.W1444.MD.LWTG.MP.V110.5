/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   ul2_sap.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================================
 * $Log:$
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * 	.
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 * 
 * removed!
 * removed!
 * .
 * 
 * removed!
 * removed!
 * .
 * 
 * removed!
 * removed!
 * Remove __TX_NEW_ARCHITECTURE__.
 * 
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * Differ URLC, DRLC Messages between TDD & FDD.
 *
 * removed!
 * removed!
 * 1) confirm all _msgid.h is same as old (exclude fold ../delete/);
 * 2) fix range error in module_msg_range.h.
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 02 16 2012 jy.ou
 * removed!
 * .
 *
 * removed!
 * removed!
 * <saved by Perforce>
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * 01 16 2012 jy.ou
 * removed!
 * .
 *
 * 01 13 2012 ij.liao
 * removed!
 * .
 *
 * removed!
 * removed!
 * <saved by Perforce>
 *
 * removed!
 * removed!
 * Migrate RLC RX part of make file, sap, urlc\inc.
 *
 * removed!
 * removed!
 * make new.
 *
 * removed!
 * removed!
 * merge MSBB.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * 05 11 2011 jy.ou
 * removed!
 * .
 *
 * 05 05 2011 jy.ou
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * MAUI_02622100: [MT6276][3G Gemini][UMAC] Gemini 2.0 check-in
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * PS HAL UL2 SAP Header files move 
 *
 * removed!
 * removed!
 * Merge TDD128 backto MAUI, based on 10AW1032MP_ASTRO w10.48 Tue. P1
 *
 * 11 01 2010 jy.ou
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *===========================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _UL2_MSG_H
#define _UL2_MSG_H

#ifdef __SOURCE_INSIGHT_PARSE__
typedef enum {
#endif

/* mtk80197, merge TDD128 back to MAUI */
#if defined(__UMTS_FDD_MODE__)
MODULE_MSG_BEGIN( MSG_ID_UMAC_CODE_BEGIN )
//MSG_ID_UMAC_CODE_BEGIN,
/* SLCE-UMAC */
MSG_ID_CMAC_CONFIG_TX_CCTRCH_REQ = MSG_ID_UMAC_CODE_BEGIN,
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_REQ,
MSG_ID_CMAC_CONFIG_RX_CCTRCH_REQ,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_RX_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_REQ,
MSG_ID_CMAC_TRAFFIC_VOLUME_MEASUREMENT_REQ,
MSG_ID_CMAC_CONFIG_CIPHERING_REQ,
MSG_ID_CMAC_CONFIG_UE_REQ,
MSG_ID_CMAC_CONFIG_RACH_REQ,
MSG_ID_CMAC_COUNT_C_REQ,
MSG_ID_CMAC_CONFIG_TX_RLC_REESTABLISH_REQ,
MSG_ID_CMAC_CONFIG_RX_RLC_REESTABLISH_REQ,
MSG_ID_CMAC_DELETE_CIPHERING_REQ,
//MSG_ID_CMAC_HS_RESET_REQ,
MSG_ID_CMAC_ES_RESET_REQ,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_REQ,
MSG_ID_CMAC_QUALITY_MEASUREMENT_REQ,
MSG_ID_CMAC_ADDITIONAL_TVM_REQ,
MSG_ID_CMAC_CONFIG_CPCH_REQ,
MSG_ID_CMAC_CONFIG_ABORT_REQ,
/* CSR-UMAC */
MSG_ID_CSR_UMAC_DEACTIVATE_REPORT_REQ,
MSG_ID_CSR_UMAC_STATUS_REQ,
/* URLC-UMAC*/
MSG_ID_URLC_UMAC_TX_DATA_REQ,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GEMINI_RESET,   /* for UMAC UT */

/* MEME-UMAC */
MSG_ID_MEME_UMAC_SIMULATE_GET_COUNTC,   /* for UMAC UT */
/* RRCE-UMAC */
MSG_ID_RRCE_UMAC_SIMULATE_GET_COUNTC_ACTIVATION_TIME,   /* for UMAC UT */

/* UMAC-UMAC */  
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_CCTRCH_RSP,
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_CCTRCH_RESULT,
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_POWER_IND, 
MSG_ID_UMAC_UMAC_NO_R99_CMD_TO_SEQ_IND,
MSG_ID_UMAC_UMAC_NO_R99_DATA_TO_SEQ_IND,
MSG_ID_UMAC_UMAC_NO_R5_CMD_TO_SEQ_IND,
MSG_ID_UMAC_UMAC_NO_R5_DATA_TO_SEQ_IND,
MSG_ID_UMAC_UMAC_CHECK_DATA_REF_COUNT_IND,
MSG_ID_UMAC_UMAC_T1_TIMER_ACTION_IND,
MSG_ID_UMAC_UMAC_EDCH_TICK1_IND,
MSG_ID_UMAC_UMAC_EDCH_TICK2_IND,
MSG_ID_UMAC_UMAC_EDCH_TICK3_IND,
MSG_ID_UMAC_UMAC_ABORT_IND,
MSG_ID_UMAC_UMAC_FREE_NEXT_DESCRIPTOR_IND, /* for Mac-ehs UT */
MSG_ID_UMAC_UMAC_MAC_EHS_DSC_IND, /* for Mac-ehs UT */
MSG_ID_UMAC_UMAC_COUNTC_VERDICT_IND,    /* for UMAC UT */
MSG_ID_UMAC_UMAC_IS_MACTICK_VERDICT_IND,    /* for UMAC UT */
MSG_ID_UMAC_EM_INFO_EDCH_IND,
MSG_ID_UMAC_UMAC_USE_MAX_PRIO_LOGCH_PO_IND, /* for UMAC UT, EDCH */
MSG_ID_UMAC_EM_INFO_DCH_IND,

/* UMAC R7 */
/* Author : David */
/* For c-model */
MSG_ID_UMAC_CMODEL_GENERATE_SPECIFIC_MAC_EHS_PDU,
MSG_ID_UMAC_CMODEL_SETUP_MAC_EHS_CONFIGURATION,
MSG_ID_UMAC_CMODEL_GENERATE_RANDOM_MAC_EHS_PDU,
MSG_ID_UMAC_CMODEL_GENERATE_SPECIFIC_MAC_HS_PDU,
MSG_ID_UMAC_MAC_EHS_DSC_SETTING_REQ,


/* UMAC - UMACHISR */
MSG_ID_UMACHISR_UMAC_R5_FLUSH_DONE_IND, 
MSG_ID_UMACHISR_UMAC_R7_FLUSH_DONE_IND, 
MSG_ID_UMACHISR_UMAC_R99_DATA_DONE_IND, 
MSG_ID_UMACHISR_UMAC_HW_HANG_DET, 
MSG_ID_UMACHISR_UMAC_R7_ERROR_IND,

/* UMAC-SEQ */
MSG_ID_UMAC_SEQ_REGISTER_VERDICT_IND,

MSG_ID_UMAC_UMAC_POST_TX_VERDICT_IND,
/* DRLC-UMAC */
MSG_ID_DRLC_UMAC_SIMULATE_IS_MACTICK_AVAILABLE, /* for UMAC UT */
MSG_ID_DRLC_UMAC_DATA_PENDING_REQ,

MSG_ID_UMAC_CODE_END = MSG_ID_DRLC_UMAC_DATA_PENDING_REQ,
//MSG_ID_UMAC_CODE_END,
MODULE_MSG_END( MSG_ID_UMAC_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_URLC_CODE_BEGIN )
/***** URLC - start *****/
/* URLC - RATCM, RATDM */
MSG_ID_RATCM_URLC_UTEST_ACTIVATE_LOOP_REQ = MSG_ID_URLC_CODE_BEGIN,
MSG_ID_RATCM_URLC_UTEST_DEACTIVATE_LOOP_REQ,
MSG_ID_RATCM_URLC_UTEST_OPEN_LOOP_REQ,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M1_REQ,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M2_REQ,
MSG_ID_RATDM_URLC_DEACTIVATE_PS_RAB_REQ,
MSG_ID_RATDM_URLC_DEACTIVATE_PS_RAB_ABORT_REQ,

/* URLC - DRLC */
MSG_ID_DRLC_URLC_START_DISCARD_TIMER_REQ,

/* URLC - SLCE */
MSG_ID_CRLC_CONFIG_RAB_REQ,
MSG_ID_CRLC_CONFIG_TM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_UM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_AM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_RELEASE_REQ,
MSG_ID_CRLC_SUSPEND_REQ,
MSG_ID_CRLC_RESUME_REQ,
MSG_ID_CRLC_CONFIG_TX_CIPHERING_REQ,
MSG_ID_CRLC_CONFIG_RX_CIPHERING_REQ,
MSG_ID_CRLC_COUNT_C_REQ,
MSG_ID_CRLC_RB_CONTROL_REQ,
MSG_ID_CRLC_REESTABLISH_REQ,
MSG_ID_CRLC_PS_RATE_INFO_REQ, //20101206 Send PS RATE INFO to RLC for adaptive padding
MSG_ID_CRLC_ABORT_REQ,    /* [20110413/ALPS00039979/MengSung] CRLC needs to know L1 abort happened, otherwise pending re-establish configuration won't be clear */
/* URLC - UMAC */
MSG_ID_L2L_MAC_DATA_IND,
MSG_ID_URLC_UMAC_POST_TX_IND,
MSG_ID_URLC_UMAC_STATUS_REPORT_REQUIRED_IND, 
MSG_ID_URLC_UMAC_TX_DCH_MODIFY_IND,
MSG_ID_URLC_UMAC_TX_EDCH_MODIFY_IND,
MSG_ID_URLC_UMAC_TX_STATUS_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_AM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_AM_CONTROL_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_TM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_UM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_AM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_TM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_UM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_SIMULATE_UMAC_BUFFER_OCCUPANCY_REQ, /* for UMAC UT */
MSG_ID_URLC_SIMULATE_UMAC_RB_TO_LOGICAL_CHANNEL_MAPPING_REQ, /* for UMAC UT */
MSG_ID_URLC_SIMULATE_UMAC_RLC_REESTABLISH_ACTIVATION_IND, /* for UMAC UT */
MSG_ID_URLC_SIMULATE_UMAC_END_RX_REESTABLISH_AM_USER_RB_LOG_CH_IND, /* for URLC UT */
MSG_ID_URLC_UMAC_INJECT_SADR_REQ, //DEREK
MSG_ID_URLC_UMAC_INJECT_HSUPA_CMD_REQ,  //DEREK

/* DRLC - URLC */
MSG_ID_DRLC_URLC_RELEASE_REQ,
MSG_ID_DRLC_URLC_REASSEMBLE_CNF,
MSG_ID_DRLC_URLC_DEINIT_CNF,
MSG_ID_DRLC_URLC_TX_PRESEG_REQ,
MSG_ID_DRLC_URLC_ENTER_PCH_CNF,

/* DRLC - L2HWREASM */
MSG_ID_DRLC_L2HWREASMSIM_CMD_IND, 
MSG_ID_L2HWREASMSIM_SEQ_INTR_IND,
MSG_ID_UL2D_BYTECOPY_SIM_CMD_IND,
MSG_ID_BYTECOPY_SIM_UL2D_INTR_IND,

/* URLC - URLC */
MSG_ID_L2L_DEBUG_INFO_IND,
MSG_ID_L2L_BO_DEBUG_INFO_IND,
MSG_ID_L2L_RELEASE_REQ,
MSG_ID_L2L_USE_OLD_KEY_REQ,
MSG_ID_L2L_TRIGGER_RESET_REQ,
MSG_ID_L2L_RESET_ACK_RECEIVED,
MSG_ID_L2L_RESET_DETECTED,
MSG_ID_L2L_SUSPEND_REQ,
MSG_ID_L2L_RESUME_REQ,
MSG_ID_L2L_RLC_ACC_RX_CONFIG_REQ,
MSG_ID_L2L_RLC_ACC_RX_EVENT_IND,
MSG_ID_L2L_RLC_ACC_HW_RESET_IND,
MSG_ID_L2L_RLC_ACC_TX_CMD_REQ,
MSG_ID_L2L_RLC_ACC_TX_CMD_VERDICT_IND,  //DEREK
//#ifdef __UL2_HSPA_PLUS_TX_COPRO__
/* no writeback */
/* for not enclose MSG_ID_URLC_CODE_END into compile option, we decide not to use compile option here */
/* if we add more msg in the future, we can add back these compile options */
//#else
MSG_ID_L2L_TX_CONTAINER_ALLOC_IND,
MSG_ID_L2L_TX_CONTAINER_DEALLOC_IND,
//#endif

#ifdef __UL2_ACC_TEST_FPGA__ //DEREK_L2S_REFINE#20: add a message
MSG_ID_L2L_URLC_COSIM_DONE_IND,
#endif /* __UL2_ACC_TEST_FPGA__ */

/* URLC - SEQ */
MSG_ID_URLC_SEQ_RRC_STATE_CHANGE_IND, /* To notify RRC state change */
MSG_ID_URLC_SEQ_RESTORE_RB_REQ, /* for URLC UT or driver UT */
MSG_ID_URLC_SEQ_ENTER_PCH_REQ,
MSG_ID_URLC_SEQ_UL2ACC_SLEEP_ATTEMPT_REQ,
MSG_ID_URLC_CODE_END = MSG_ID_URLC_SEQ_UL2ACC_SLEEP_ATTEMPT_REQ,

/* URLC - RRCE */
#ifdef __TC7__CS__SUPPORT__
MSG_ID_RRCE_URLC_USR_DATA_AVAILABLE_REQ,
#endif /* __TC7__CS__SUPPORT__ */

MODULE_MSG_END( MSG_ID_URLC_CODE_TAIL )
/***** URLC -end *****/


MODULE_MSG_BEGIN( MSG_ID_SEQ_CODE_BEGIN )
/* SEQ - URLC */
MSG_ID_URLC_SEQ_ENQUEUE_CMD_REQ = MSG_ID_SEQ_CODE_BEGIN,
MSG_ID_URLC_SEQ_URB_ESTABLISH_REQ,
MSG_ID_URLC_SEQ_URB_RELEASE_REQ,
MSG_ID_URLC_SEQ_ENTER_PCH_CNF,
MSG_ID_SEQ_SEQ_ENQUEUE_CMD_REQ,
MSG_ID_SEQ_SEQ_CMD_VERDICT_IND,
/* add by Jackal for UL2 DNT verdict, 2010/4/16 */
MSG_ID_SEQ_SEQ_DNT_HW_REG_VERDICT_IND,
MSG_ID_SEQ_URLC_CMD_REGISTER_IND,
MSG_ID_UMAC_SEQ_ENQUEUE_CMD_REQ,
MSG_ID_UMAC_SEQ_TICK_REQ,
MSG_ID_URLC_SEQ_UL2ACC_SLEEP_ATTEMPT_CNF,

/* SEQ - SLCE */
MSG_ID_CSEQ_CONFIG_UL2ACC_CLK_ON_INFO_REQ,
MSG_ID_CSEQ_CONFIG_UL2ACC_CLK_OFF_INFO_REQ,
MSG_ID_SEQ_CODE_END = MSG_ID_CSEQ_CONFIG_UL2ACC_CLK_OFF_INFO_REQ,

/* CSR */
MSG_ID_CSR_SET_ROUTING_REQ,
MSG_ID_CSR_CODEC_DATA_REQ,

/* UL2 - L2ACCSIM */
MSG_ID_SEQ_HWACCSIM_CMD_IND,   
MSG_ID_HWACCSIM_SEQ_INTR_IND, 

#ifndef __MTK_TARGET__
MSG_ID_CSR_TM_DATA_REQ,

    /* L1Aud interface */
MSG_ID_CSR_SP3G_ACTIVATE_REQ,
MSG_ID_CSR_SP3G_SET_FRAME_REQ,
MSG_ID_CSR_SP3G_GET_FRAME_IND,
MSG_ID_CSR_SP3G_PUT_FRAME_REQ,
MSG_ID_CSR_SP3G_CALLBACK_REQ,

    /* CSD interface */
MSG_ID_CSR_RATCM_ACTIVATE_REQ,
MSG_ID_CSR_RATCM_DEACTIVATE_REQ,
MSG_ID_CSR_RATCM_DATA_IND,
MSG_ID_CSR_RATCM_DATA_REQ,

    /* VT interface */
MSG_ID_CSR_VT_ACTIVATE_REQ,
MSG_ID_CSR_VT_DEACTIVATE_REQ,
MSG_ID_CSR_VT_DATA_IND,
MSG_ID_CSR_VT_DATA_REQ,

MSG_ID_CSR_SP3GHSPA_SET_CSDELAY_IND,
MSG_ID_CSR_SP3GHSPA_GET_FRAME_IND,
MSG_ID_CSR_SP3GHSPA_PUT_FRAME_REQ,

MSG_ID_CSR_SHAQ_DATA_REQ,
MSG_ID_RLC_CSR_DATA_IND,


#endif
/**** CSR end *****/
MODULE_MSG_END( MSG_ID_SEQ_CODE_TAIL )
#endif /* __UMTS_FDD_MODE__ */

/* mtk80197, merge TDD128 back to MAUI */
#if defined(__UMTS_TDD128_MODE__)
MODULE_MSG_BEGIN( MSG_ID_UMAC_CODE_BEGIN )
//MSG_ID_UMAC_CODE_BEGIN,
/* SLCE-UMAC */
MSG_ID_CMAC_CONFIG_TX_CCTRCH_REQ = MSG_ID_UMAC_CODE_BEGIN,
#ifdef __HSUPA_SUPPORT__
MSG_ID_CMAC_CONFIG_EDCH_CCTRCH_REQ, /* mtk80197, 2010-06-22 */
#endif
MSG_ID_CMAC_CONFIG_RX_CCTRCH_REQ,
MSG_ID_CMAC_CONFIG_HSDSCH_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_TX_CCTRCH_REQ,
#ifdef __HSUPA_SUPPORT__
MSG_ID_CMAC_REMOVE_EDCH_CCTRCH_REQ, /* mtk80197, 2010-06-22 */
#endif
MSG_ID_CMAC_REMOVE_RX_CCTRCH_REQ,
MSG_ID_CMAC_REMOVE_HSDSCH_CCTRCH_REQ,
MSG_ID_CMAC_TRAFFIC_VOLUME_MEASUREMENT_REQ,
MSG_ID_CMAC_CONFIG_CIPHERING_REQ,
MSG_ID_CMAC_CONFIG_UE_REQ,
MSG_ID_CMAC_CONFIG_RACH_REQ,
MSG_ID_CMAC_COUNT_C_REQ,
MSG_ID_CMAC_CONFIG_TX_RLC_MODIFY_REQ,
MSG_ID_CMAC_CONFIG_RX_RLC_MODIFY_REQ,
MSG_ID_CMAC_DELETE_CIPHERING_REQ,
MSG_ID_CMAC_HS_RESET_REQ,
MSG_ID_CMAC_CONFIG_TFC_SUBSET_REQ,
MSG_ID_CMAC_QUALITY_MEASUREMENT_REQ,
MSG_ID_CMAC_ADDITIONAL_TVM_REQ,
MSG_ID_CMAC_CONFIG_CPCH_REQ,
MSG_ID_CMAC_CONFIG_ABORT_REQ,
MSG_ID_CMAC_ABORT_IGNORE_INIT_SYNC_REQ,
MSG_ID_CMAC_WORKFREQ_CHANGE_REQ, /* mtk80760, HSDPA Local Reset */

/* CSR-UMAC */
MSG_ID_CSR_UMAC_DEACTIVATE_REPORT_REQ,
MSG_ID_CSR_UMAC_STATUS_REQ,
/* URLC-UMAC*/
MSG_ID_URLC_UMAC_TX_DATA_REQ,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GEMINI_RESET,   /* for UMAC UT */

/* UMAC-UMAC */  
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_CCTRCH_RSP,
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_CCTRCH_RESULT,
MSG_ID_UMAC_UMAC_DCH_UL_DPCH_POWER_IND, 
#ifdef __HSUPA_SUPPORT__
MSG_ID_UMAC_UMAC_EDCH_TICK1_IND,    /* for E-DCH callback simulation, mtk80197, 2010-06-22 */
MSG_ID_UMAC_UMAC_EDCH_TICK2_IND,    /* for E-DCH callback simulation, mtk80197, 2010-06-22 */
#endif
MSG_ID_UMAC_UMAC_T1_TIMER_ACTION_IND,
MSG_ID_UMAC_UMAC_ABORT_IND,

/* DRLC-UMAC */
MSG_ID_DRLC_UMAC_DATA_PENDING_REQ,

MSG_ID_UMAC_CODE_END = MSG_ID_DRLC_UMAC_DATA_PENDING_REQ,
MODULE_MSG_END( MSG_ID_UMAC_CODE_TAIL )
//MSG_ID_UMAC_CODE_END,

/***** URLC - start *****/
/* URLC - RATCM, RATDM */
MODULE_MSG_BEGIN( MSG_ID_URLC_TDD_CODE_BEGIN )
MSG_ID_RATCM_URLC_UTEST_ACTIVATE_LOOP_REQ = MSG_ID_URLC_TDD_CODE_BEGIN,
MSG_ID_RATCM_URLC_UTEST_DEACTIVATE_LOOP_REQ,
MSG_ID_RATCM_URLC_UTEST_OPEN_LOOP_REQ,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M1_REQ,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M2_REQ,
MSG_ID_RATDM_URLC_DEACTIVATE_PS_RAB_REQ,
MSG_ID_RATDM_URLC_DEACTIVATE_PS_RAB_ABORT_REQ,

/* URLC - DRLC */
MSG_ID_DRLC_URLC_START_DISCARD_TIMER_REQ,

/* URLC - SLCE */
MSG_ID_CRLC_CONFIG_RAB_REQ,
MSG_ID_CRLC_CONFIG_TM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_UM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_AM_ESTABLISH_REQ,
MSG_ID_CRLC_CONFIG_RELEASE_REQ,
MSG_ID_CRLC_SUSPEND_REQ,
MSG_ID_CRLC_RESUME_REQ,
MSG_ID_CRLC_CONFIG_TX_CIPHERING_REQ,
MSG_ID_CRLC_CONFIG_RX_CIPHERING_REQ,
MSG_ID_CRLC_COUNT_C_REQ,
MSG_ID_CRLC_RB_CONTROL_REQ,
MSG_ID_CRLC_REESTABLISH_REQ,
MSG_ID_CRLC_PS_RATE_INFO_REQ,
MSG_ID_CRLC_ABORT_REQ,

/* URLC - UMAC */
MSG_ID_L2L_MAC_DATA_IND,
MSG_ID_URLC_UMAC_POST_TX_IND,
MSG_ID_URLC_UMAC_STATUS_REPORT_REQUIRED_IND, 
MSG_ID_URLC_UMAC_TX_DCH_MODIFY_IND,
MSG_ID_URLC_UMAC_RLC_MODIFY_IND,
#ifdef __HSUPA_SUPPORT__
MSG_ID_URLC_UMAC_TX_EDCH_MODIFY_IND,
#endif
MSG_ID_URLC_UMAC_TX_STATUS_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_AM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_AM_CONTROL_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_TM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_GET_UM_BO_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_AM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_TM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_TRANSMIT_UM_PDU_IND,    /* for URLC UT or UL2 IT */
MSG_ID_URLC_UMAC_INJECT_SADR_REQ, //DEREK
MSG_ID_URLC_UMAC_INJECT_HSUPA_CMD_REQ,  //DEREK

/* DRLC - URLC */
MSG_ID_DRLC_URLC_RELEASE_REQ,
MSG_ID_DRLC_URLC_REASSEMBLE_CNF,
MSG_ID_DRLC_URLC_TX_PRESEG_REQ,      /* mtk80437, 2010-08-04 */

/* URLC - URLC */
MSG_ID_L2L_DEBUG_INFO_IND,
MSG_ID_L2L_BO_DEBUG_INFO_IND,
MSG_ID_L2L_RELEASE_REQ,
MSG_ID_L2L_TRIGGER_RESET_REQ,
MSG_ID_L2L_RESET_ACK_RECEIVED,
MSG_ID_L2L_RESET_DETECTED,
MSG_ID_L2L_SUSPEND_REQ,
MSG_ID_L2L_RESUME_REQ,
MSG_ID_URLC_CODE_END = MSG_ID_L2L_RESUME_REQ,
/***** URLC -end *****/
/* CSR */
MSG_ID_CSR_SET_ROUTING_REQ,
MSG_ID_CSR_CODEC_DATA_REQ,

#ifndef __MTK_TARGET__
MSG_ID_CSR_TM_DATA_REQ,

    /* L1Aud interface */
MSG_ID_CSR_SP3G_ACTIVATE_REQ,
MSG_ID_CSR_SP3G_SET_FRAME_REQ,
MSG_ID_CSR_SP3G_GET_FRAME_IND,
MSG_ID_CSR_SP3G_PUT_FRAME_REQ,
MSG_ID_CSR_SP3G_CALLBACK_REQ,

    /* CSD interface */
MSG_ID_CSR_RATCM_ACTIVATE_REQ,
MSG_ID_CSR_RATCM_DEACTIVATE_REQ,
MSG_ID_CSR_RATCM_DATA_IND,
MSG_ID_CSR_RATCM_DATA_REQ,

    /* VT interface */
MSG_ID_CSR_VT_ACTIVATE_REQ,
MSG_ID_CSR_VT_DEACTIVATE_REQ,
MSG_ID_CSR_VT_DATA_IND,
MSG_ID_CSR_VT_DATA_REQ,

MSG_ID_CSR_SHAQ_DATA_REQ,

#endif
/**** CSR end *****/

MODULE_MSG_END( MSG_ID_URLC_TDD_CODE_TAIL )

#endif /* __UMTS_TDD128_MODE__ */

#ifdef __SOURCE_INSIGHT_PARSE__
};
#endif

#endif  //UL2_MSG_H
