/* -----------------------------------------------------------------------------
  Filename:    drv_par.c
  Description: Toolversion: 02.01.13.01.10.01.32.00.00.00
                
                Serial Number: CBD1100132
                Customer Info: BEIQI Foton Motor Co., Ltd.
                               Foton
                               Microcontroller: Infineon TriCore TC1767
                               Compiler: Tasking V3.3r1
                
                
                Generator Fwk   : GENy 
                Generator Module: GenTool_GenyDriverBase
                
                Configuration   : D:\TaskingTc&GENywork\R1556\BMS_R1556\Bsw\Can\configCAN\configGENy\R1556.gny
                
                ECU: 
                        TargetSystem: Hw_TricoreCpu
                        Compiler:     Tasking
                        Derivates:    INFINEON_TC1767
                
                Channel "Channel0":
                        Databasefile: D:\DBC WORK\R1556\R1556_Veh_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu
                Channel "Channel1":
                        Databasefile: D:\DBC WORK\R1556\R1556_Inter_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu

  Generated by , 2015-12-25  17:24:00
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2008 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#include "v_inc.h"
#include "can_inc.h"

#include "drv_par.h"
/* -----------------------------------------------------------------------------
    &&&~ Message Buffers
 ----------------------------------------------------------------------------- */

/* RAM CATEGORY 2 START */
V_MEMRAM0 V_MEMRAM1 _c_TxXCP_buf V_MEMRAM2 TxXCP;
V_MEMRAM0 V_MEMRAM1 _c_RxXCP_buf V_MEMRAM2 RxXCP;
V_MEMRAM0 V_MEMRAM1 _c_UdsRx_buf V_MEMRAM2 UdsRx;
V_MEMRAM0 V_MEMRAM1 _c_UdsTx_buf V_MEMRAM2 UdsTx;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD1_buf V_MEMRAM2 BcuSD1;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD2_buf V_MEMRAM2 BcuSD2;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD3_buf V_MEMRAM2 BcuSD3;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD4_buf V_MEMRAM2 BcuSD4;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD6_buf V_MEMRAM2 BcuSD6;
V_MEMRAM0 V_MEMRAM1 _c_BcuSD5_buf V_MEMRAM2 BcuSD5;
V_MEMRAM0 V_MEMRAM1 _c_BcuTime_buf V_MEMRAM2 BcuTime;
V_MEMRAM0 V_MEMRAM1 _c_Bcu_CarCharB_buf V_MEMRAM2 Bcu_CarCharB;
V_MEMRAM0 V_MEMRAM1 _c_Bcu_CarCharA_buf V_MEMRAM2 Bcu_CarCharA;
V_MEMRAM0 V_MEMRAM1 _c_VcuToBms_buf V_MEMRAM2 VcuToBms;
V_MEMRAM0 V_MEMRAM1 _c_BmsToVcu_E_buf V_MEMRAM2 BmsToVcu_E;
V_MEMRAM0 V_MEMRAM1 _c_BmsToVcu_D_buf V_MEMRAM2 BmsToVcu_D;
V_MEMRAM0 V_MEMRAM1 _c_BmsToVcu_C_buf V_MEMRAM2 BmsToVcu_C;
V_MEMRAM0 V_MEMRAM1 _c_BmsTxVcu_B_buf V_MEMRAM2 BmsTxVcu_B;
V_MEMRAM0 V_MEMRAM1 _c_BcuToVcu_A_buf V_MEMRAM2 BcuToVcu_A;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData02_buf V_MEMRAM2 Mc33BData02;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData15_buf V_MEMRAM2 Mc60AData15;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData01_buf V_MEMRAM2 Mc33BData01;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData00_buf V_MEMRAM2 Mc33BData00;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData15_buf V_MEMRAM2 Mc33BData15;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData02_buf V_MEMRAM2 Mc60AData02;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData01_buf V_MEMRAM2 Mc60AData01;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData00_buf V_MEMRAM2 Mc60AData00;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BBalState_0_buf V_MEMRAM2 Mc33BBalState_0;
V_MEMRAM0 V_MEMRAM1 _c_Mc60ABalState_0_buf V_MEMRAM2 Mc60ABalState_0;
V_MEMRAM0 V_MEMRAM1 _c_HcuData0_buf V_MEMRAM2 HcuData0;
V_MEMRAM0 V_MEMRAM1 _c_McInit_buf V_MEMRAM2 McInit;
V_MEMRAM0 V_MEMRAM1 _c_BcuInit_buf V_MEMRAM2 BcuInit;
V_MEMRAM0 V_MEMRAM1 _c_RtcTxMulReq_buf V_MEMRAM2 RtcTxMulReq;
V_MEMRAM0 V_MEMRAM1 _c_RtcRxMulData_buf V_MEMRAM2 RtcRxMulData;
V_MEMRAM0 V_MEMRAM1 _c_RtcRxMulReq_buf V_MEMRAM2 RtcRxMulReq;
V_MEMRAM0 V_MEMRAM1 _c_RtcTxMsg_buf V_MEMRAM2 RtcTxMsg;
V_MEMRAM0 V_MEMRAM1 _c_RtcRxMsg_buf V_MEMRAM2 RtcRxMsg;
V_MEMRAM0 V_MEMRAM1 _c_RtcTime_buf V_MEMRAM2 RtcTime;
V_MEMRAM0 V_MEMRAM1 _c_RtcIo_buf V_MEMRAM2 RtcIo;
V_MEMRAM0 V_MEMRAM1 _c_HcuData3_buf V_MEMRAM2 HcuData3;
V_MEMRAM0 V_MEMRAM1 _c_BcuBalCmdMc33B_0_buf V_MEMRAM2 BcuBalCmdMc33B_0;
V_MEMRAM0 V_MEMRAM1 _c_BcuBalCmdMc60A_0_buf V_MEMRAM2 BcuBalCmdMc60A_0;
V_MEMRAM0 V_MEMRAM1 _c_HcuData1_buf V_MEMRAM2 HcuData1;
V_MEMRAM0 V_MEMRAM1 _c_BcuSyc100msMsg_buf V_MEMRAM2 BcuSyc100msMsg;
V_MEMRAM0 V_MEMRAM1 _c_UdsInterTx_buf V_MEMRAM2 UdsInterTx;
V_MEMRAM0 V_MEMRAM1 _c_UdsInterRx_buf V_MEMRAM2 UdsInterRx;
V_MEMRAM0 V_MEMRAM1 _c_BcuCHAInfo2_buf V_MEMRAM2 BcuCHAInfo2;
V_MEMRAM0 V_MEMRAM1 _c_BcuCHAInfo1_buf V_MEMRAM2 BcuCHAInfo1;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData05_buf V_MEMRAM2 Mc33BData05;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData04_buf V_MEMRAM2 Mc33BData04;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData03_buf V_MEMRAM2 Mc33BData03;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData03_buf V_MEMRAM2 Mc60AData03;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData04_buf V_MEMRAM2 Mc60AData04;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData05_buf V_MEMRAM2 Mc60AData05;
V_MEMRAM0 V_MEMRAM1 _c_Mc60ABalState_1_buf V_MEMRAM2 Mc60ABalState_1;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData06_buf V_MEMRAM2 Mc60AData06;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData07_buf V_MEMRAM2 Mc60AData07;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData08_buf V_MEMRAM2 Mc60AData08;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData06_buf V_MEMRAM2 Mc33BData06;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData07_buf V_MEMRAM2 Mc33BData07;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BData08_buf V_MEMRAM2 Mc33BData08;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AState_buf V_MEMRAM2 Mc60AState;
V_MEMRAM0 V_MEMRAM1 _c_Mc33BState_buf V_MEMRAM2 Mc33BState;
V_MEMRAM0 V_MEMRAM1 _c_BcuBalCmdMc60A_1_buf V_MEMRAM2 BcuBalCmdMc60A_1;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData14_buf V_MEMRAM2 Mc60AData14;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData13_buf V_MEMRAM2 Mc60AData13;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData12_buf V_MEMRAM2 Mc60AData12;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData11_buf V_MEMRAM2 Mc60AData11;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData10_buf V_MEMRAM2 Mc60AData10;
V_MEMRAM0 V_MEMRAM1 _c_Mc60AData09_buf V_MEMRAM2 Mc60AData09;
/* RAM CATEGORY 2 END */





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 210607152
      #error "The magic number of the generated file <D:\workspace\R1556\drv_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\workspace\R1556\drv_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

