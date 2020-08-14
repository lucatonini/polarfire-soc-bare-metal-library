/*******************************************************************************
 * Copyright 2019-2020 Microchip FPGA Embedded Systems Solutions.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_clk_mss_cfm.h
 * @author Microchip-FPGA Embedded Systems Solutions
 * 
 * Generated using Libero version: 10.0.0
 * Libero design name: test design
 * MPFS part number used in design: M2PFS250T_ES
 * Date generated by Libero: 2019-11-28 16:59:04
 * Format version of XML description: 0.2.7
 * PolarFire SoC Configuration Generator version: 0.2.7
 * 
 * Note 1: This file should not be edited. If you need to modify a parameter,
 * without going through the Libero flow or editing the associated xml file,
 * the following method is recommended:
 *   1. edit the file platform//config//software//mpfs_hal//mss_sw_config.h
 *   2. define the value you want to override there. (Note: There is a 
 *      commented example in mss_sw_config.h)
 * Note 2: The definition in mss_sw_config.h takes precedence, as 
 * mss_sw_config.h is included prior to the hw_clk_mss_cfm.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_CLK_MSS_CFM_H_
#define HW_CLK_MSS_CFM_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_MSS_INMUX0_BCLKMUX)
/*Input mux selections */ 
#define LIBERO_SETTING_MSS_INMUX0_BCLKMUX    0x02108608UL
    /* CIMUX_GEN0_SEL                    [0:4]   RW value= 0x8 */ 
    /* CIMUX_GEN1_SEL                    [4:4]   RW value= 0x0 */ 
    /* CIMUX_GEN2_SEL                    [8:4]   RW value= 0x6 */ 
    /* CIMUX_GEN3_SEL                    [12:4]  RW value= 0x8 */ 
    /* CIMUX_GEN4_SEL                    [16:2]  RW value= 0x0 */ 
    /* CIMUX_GEN5_SEL                    [18:2]  RW value= 0x0 */ 
    /* CIMUX_REF0_SEL                    [20:4]  RW value= 0x1 */ 
    /* CIMUX_REF1_SEL                    [24:4]  RW value= 0x2 */ 
    /* CIMUX_REF2_SEL                    [28:4]  RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_INMUX1_PLL_CKMUX)
/*Input mux selections */ 
#define LIBERO_SETTING_MSS_INMUX1_PLL_CKMUX    0x00000155UL
    /* CIMUX_REF3_SEL                    [0:4]   RW value= 0x5 */ 
    /* CIMUX_REF4_SEL                    [4:4]   RW value= 0x5 */ 
    /* CIMUX_REF5_SEL                    [8:4]   RW value= 0x1 */ 
    /* CIMUX_REF6_SEL                    [12:4]  RW value= 0x0 */ 
    /* CIMUX_REF7_SEL                    [16:4]  RW value= 0x0 */ 
    /* CIMUX_REF8_SEL                    [20:4]  RW value= 0x0 */ 
    /* CIMUX_REF9_SEL                    [24:4]  RW value= 0x0 */ 
    /* CDMUX0_SEL                        [28:2]  RW value= 0x0 */ 
    /* CDMUX1_SEL                        [30:1]  RW value= 0x0 */ 
    /* CDMUX2_SEL                        [31:1]  RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_INMUX2_MSS_CLK_MUX)
/*Configurable delay line selections */ 
#define LIBERO_SETTING_MSS_INMUX2_MSS_CLK_MUX    0x00000001UL
    /* CDMUX3_SEL                        [0:2]   RW value= 0x1 */ 
    /* CDMUX4_SEL                        [2:1]   RW value= 0x0 */ 
    /* CDMUX5_SEL                        [3:1]   RW value= 0x0 */ 
    /* CDMUX6_SEL                        [4:1]   RW value= 0x0 */ 
    /* CDELAY0_SEL                       [5:8]   RW value= 0x0 */ 
    /* CDELAY1_SEL                       [13:8]  RW value= 0x0 */ 
    /* CDELAY0_EN                        [21:1]  RW value= 0x0 */ 
    /* CDELAY1_EN                        [22:1]  RW value= 0x0 */ 
    /* DELAY_TEST_EN                     [23:1]  RW value= 0x0 */ 
    /* DELAY_TEST_A                      [24:1]  RO */ 
    /* DELAY_TEST_B                      [25:1]  RO */ 
    /* RESERVE13                         [26:6]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_OUTMUX0)
/*output mux selection */ 
#define LIBERO_SETTING_MSS_OUTMUX0    0x00000000UL
    /* COMUX0_SEL                        [0:4]   RW value= 0x0 */ 
    /* COMUX1_SEL                        [4:4]   RW value= 0x0 */ 
    /* COMUX2_SEL                        [8:4]   RW value= 0x0 */ 
    /* COMUX3_SEL                        [12:4]  RW value= 0x0 */ 
    /* COMUX4_SEL                        [16:4]  RW value= 0x0 */ 
    /* COMUX5_SEL                        [20:4]  RW value= 0x0 */ 
    /* COMUX6_SEL                        [24:4]  RW value= 0x0 */ 
    /* COMUX7_SEL                        [28:4]  RW value= 0x0 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_OUTMUX1)
/*Feeder clocks enable */ 
#define LIBERO_SETTING_MSS_OUTMUX1    0x00000000UL
    /* CRNFDR_HORZ_EN                    [0:8]   RW value= 0x0 */ 
    /* CRNFDR_VERT_EN                    [8:8]   RW value= 0x0 */ 
    /* SRMUX0_SEL                        [16:4]  RW value= 0x0 */ 
    /* SRMUX1_SEL                        [20:4]  RW value= 0x0 */ 
    /* RESERVE15                         [24:8]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_SPARE0)
/*spare logic */ 
#define LIBERO_SETTING_MSS_SPARE0    0x00002011UL
    /* SPARE0                            [0:28]  RW value= 0x2011 */ 
#endif
#if !defined (LIBERO_SETTING_MSS_IMIRROR_CTRL)
/*Imirror_control_selections */ 
#define LIBERO_SETTING_MSS_IMIRROR_CTRL    0x00000000UL
    /* CALIB_RST_B                       [0:1]   RW value= 0x0 */ 
    /* CALIB_DIRECTION                   [1:1]   RW value= 0x0 */ 
    /* CALIB_LOAD                        [2:1]   RW value= 0x0 */ 
    /* CALIB_LOCK                        [3:1]   RW value= 0x0 */ 
    /* CALIB_MOVE_PCODE                  [4:1]   RW value= 0x0 */ 
    /* CALIB_START                       [5:1]   RW value= 0x0 */ 
    /* CALIB_TRIM                        [6:1]   RW value= 0x0 */ 
    /* CALIB_PCODE                       [7:8]   RW value= 0x0 */ 
    /* CALIB_POFFSET                     [15:6]  RW value= 0x0 */ 
    /* CALIB_POFFSET_DIR                 [21:1]  RW value= 0x0 */ 
    /* EN_V1P2BUF                        [22:1]  RW value= 0x0 */ 
    /* RESERVE16                         [23:9]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_IMIRROR_STAT)
/*Imirror_status_register */ 
#define LIBERO_SETTING_MSS_IMIRROR_STAT    0x00000000UL
    /* SRO_CALIB_INTRPT                  [0:1]   RO */ 
    /* SRO_CALIB_STATUS                  [1:1]   RO */ 
    /* SRO_COMP_EN                       [2:1]   RO */ 
    /* SRO_REF_CC_CODE                   [3:8]   RO */ 
    /* SRO_COMP_SEL                      [11:1]  RO */ 
    /* SRO_IOEN_OUT                      [12:1]  RO */ 
    /* SRO_CC_CODE                       [13:8]  RO */ 
    /* SRO_POWER_ON                      [21:1]  RO */ 
    /* SRO_COMP_OUT                      [22:1]  RO */ 
    /* SRO_BG_CODE                       [23:3]  RO */ 
    /* SRO_REF_BG_CODE                   [26:3]  RO */ 
    /* RESERVE17                         [29:3]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_FMETER_ADDR)
/*Frequency_meter_address_selections */ 
#define LIBERO_SETTING_MSS_FMETER_ADDR    0x00000000UL
    /* ADDR10                            [0:2]   RSVD */ 
    /* ADDR                              [2:4]   RW value= 0x0 */ 
    /* RESERVE18                         [6:26]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_FMETER_DATAW)
/*Frequency_meter_data_write */ 
#define LIBERO_SETTING_MSS_FMETER_DATAW    0x00000000UL
    /* DATA                              [0:24]  RW value= 0x0 */ 
    /* STROBE                            [24:1]  W1P */ 
    /* RESERVE19                         [25:7]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_FMETER_DATAR)
/*Frequency_meter_data_read */ 
#define LIBERO_SETTING_MSS_FMETER_DATAR    0x00000000UL
    /* DATA                              [0:24]  RO */ 
    /* RESERVE20                         [24:8]  RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_IMIRROR_TRIM)
/*Imirror TRIM Bits */ 
#define LIBERO_SETTING_MSS_IMIRROR_TRIM    0x00000000UL
    /* BG_CODE                           [0:3]   RW value= 0x0 */ 
    /* CC_CODE                           [3:8]   RW value= 0x0 */ 
    /* RESERVE21                         [11:21] RSVD */ 
#endif
#if !defined (LIBERO_SETTING_MSS_TEST_CTRL)
/*Test MUX Controls */ 
#define LIBERO_SETTING_MSS_TEST_CTRL    0x00000000UL
    /* OSC_ENABLE                        [0:4]   RW value= 0x0 */ 
    /* ATEST_EN                          [4:1]   RW value= 0x0 */ 
    /* ATEST_SEL                         [5:5]   RW value= 0x0 */ 
    /* DTEST_EN                          [10:1]  RW value= 0x0 */ 
    /* DTEST_SEL                         [11:5]  RW value= 0x0 */ 
    /* RESERVE22                         [16:16] RSVD */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_CLK_MSS_CFM_H_ */

