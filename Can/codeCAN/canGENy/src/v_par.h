/* -----------------------------------------------------------------------------
  Filename:    v_par.h
  Description: Toolversion: 02.01.13.01.10.01.32.00.00.00
                
                Serial Number: CBD1100132
                Customer Info: BEIQI Foton Motor Co., Ltd.
                               Foton
                               Microcontroller: Infineon TriCore TC1767
                               Compiler: Tasking V3.3r1
                
                
                Generator Fwk   : GENy 
                Generator Module: GenTool_GenyVcfgNameDecorator
                
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

#if !defined(__V_PAR_H__)
#define __V_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ BaseEnv_PHF_Includes
 ----------------------------------------------------------------------------- */

#include "v_cfg.h"
#include "v_def.h"


/* -----------------------------------------------------------------------------
    &&&~ GENy Version Information
 ----------------------------------------------------------------------------- */

#define VGEN_DELIVERY_VERSION_BYTE_0         0x02
#define VGEN_DELIVERY_VERSION_BYTE_1         0x01
#define VGEN_DELIVERY_VERSION_BYTE_2         0x13
#define VGEN_DELIVERY_VERSION_BYTE_3         0x01
#define VGEN_DELIVERY_VERSION_BYTE_4         0x10
#define VGEN_DELIVERY_VERSION_BYTE_5         0x01
#define VGEN_DELIVERY_VERSION_BYTE_6         0x32
#define VGEN_DELIVERY_VERSION_BYTE_7         0x00
#define VGEN_DELIVERY_VERSION_BYTE_8         0x00
#define VGEN_DELIVERY_VERSION_BYTE_9         0x00
#define kGENyVersionNumberOfBytes            10
/* ROM CATEGORY 4 START */
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kGENyVersion[kGENyVersionNumberOfBytes];
/* ROM CATEGORY 4 END */




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 210607152
      #error "The magic number of the generated file <D:\workspace\R1556\v_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 210607152
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_PAR_H__ */
