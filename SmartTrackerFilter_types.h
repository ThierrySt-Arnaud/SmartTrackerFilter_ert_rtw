//
// File: SmartTrackerFilter_types.h
//
// Code generated for Simulink model 'SmartTrackerFilter'.
//
// Model version                  : 1.11
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Tue Jan 11 10:05:40 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Custom Processor->Custom
// Emulation hardware selection:
//    Differs from embedded hardware (Custom Processor->MATLAB Host Computer)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Passed (11), Warnings (2), Error (0)
//
#ifndef RTW_HEADER_SmartTrackerFilter_types_h_
#define RTW_HEADER_SmartTrackerFilter_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_svRMMPEUlKM8qjwqJZ0JXqB
#define struct_tag_svRMMPEUlKM8qjwqJZ0JXqB

struct tag_svRMMPEUlKM8qjwqJZ0JXqB
{
  real32_T Branch1[2];
  real32_T Branch2[2];
};

#endif                                 //struct_tag_svRMMPEUlKM8qjwqJZ0JXqB

#ifndef typedef_svRMMPEUlKM8qjwqJZ0JXqB
#define typedef_svRMMPEUlKM8qjwqJZ0JXqB

typedef struct tag_svRMMPEUlKM8qjwqJZ0JXqB svRMMPEUlKM8qjwqJZ0JXqB;

#endif                                 //typedef_svRMMPEUlKM8qjwqJZ0JXqB

#ifndef struct_tag_sfYHht4BcoLXT44M6eWvZ8C
#define struct_tag_sfYHht4BcoLXT44M6eWvZ8C

struct tag_sfYHht4BcoLXT44M6eWvZ8C
{
  real32_T Branch1[2];
};

#endif                                 //struct_tag_sfYHht4BcoLXT44M6eWvZ8C

#ifndef typedef_sfYHht4BcoLXT44M6eWvZ8C
#define typedef_sfYHht4BcoLXT44M6eWvZ8C

typedef struct tag_sfYHht4BcoLXT44M6eWvZ8C sfYHht4BcoLXT44M6eWvZ8C;

#endif                                 //typedef_sfYHht4BcoLXT44M6eWvZ8C

#ifndef struct_tag_shcLhZeMq0dzE7rrne4jMSC
#define struct_tag_shcLhZeMq0dzE7rrne4jMSC

struct tag_shcLhZeMq0dzE7rrne4jMSC
{
  real32_T FirstOrderSectionCoeffs;
};

#endif                                 //struct_tag_shcLhZeMq0dzE7rrne4jMSC

#ifndef typedef_shcLhZeMq0dzE7rrne4jMSC
#define typedef_shcLhZeMq0dzE7rrne4jMSC

typedef struct tag_shcLhZeMq0dzE7rrne4jMSC shcLhZeMq0dzE7rrne4jMSC;

#endif                                 //typedef_shcLhZeMq0dzE7rrne4jMSC

#ifndef struct_tag_sPLK0aIwEfQaIHWWu8cdYZH
#define struct_tag_sPLK0aIwEfQaIHWWu8cdYZH

struct tag_sPLK0aIwEfQaIHWWu8cdYZH
{
  real32_T FirstOrderSectionCoeffs[2];
};

#endif                                 //struct_tag_sPLK0aIwEfQaIHWWu8cdYZH

#ifndef typedef_sPLK0aIwEfQaIHWWu8cdYZH
#define typedef_sPLK0aIwEfQaIHWWu8cdYZH

typedef struct tag_sPLK0aIwEfQaIHWWu8cdYZH sPLK0aIwEfQaIHWWu8cdYZH;

#endif                                 //typedef_sPLK0aIwEfQaIHWWu8cdYZH

#ifndef struct_tag_scdPu8fwUisdOQswRUaepZ
#define struct_tag_scdPu8fwUisdOQswRUaepZ

struct tag_scdPu8fwUisdOQswRUaepZ
{
  uint32_T MaxOrder;
  uint32_T NumFOS;
  uint32_T NumSOS;
};

#endif                                 //struct_tag_scdPu8fwUisdOQswRUaepZ

#ifndef typedef_scdPu8fwUisdOQswRUaepZ
#define typedef_scdPu8fwUisdOQswRUaepZ

typedef struct tag_scdPu8fwUisdOQswRUaepZ scdPu8fwUisdOQswRUaepZ;

#endif                                 //typedef_scdPu8fwUisdOQswRUaepZ

#ifndef struct_tag_sr4hT1w9HLAUTYI3w3RiNbF
#define struct_tag_sr4hT1w9HLAUTYI3w3RiNbF

struct tag_sr4hT1w9HLAUTYI3w3RiNbF
{
  real32_T Branch1[4];
  real32_T Branch2[2];
};

#endif                                 //struct_tag_sr4hT1w9HLAUTYI3w3RiNbF

#ifndef typedef_sr4hT1w9HLAUTYI3w3RiNbF
#define typedef_sr4hT1w9HLAUTYI3w3RiNbF

typedef struct tag_sr4hT1w9HLAUTYI3w3RiNbF sr4hT1w9HLAUTYI3w3RiNbF;

#endif                                 //typedef_sr4hT1w9HLAUTYI3w3RiNbF

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 //typedef_cell_wrap

#ifndef typedef_dsp_simulink_IIRHalfbandDecimat
#define typedef_dsp_simulink_IIRHalfbandDecimat

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  sr4hT1w9HLAUTYI3w3RiNbF pStates;
  real32_T pBranch2Carry;
  int8_T pNumChannels;
  sPLK0aIwEfQaIHWWu8cdYZH pBranchCoef1;
  shcLhZeMq0dzE7rrne4jMSC pBranchCoef2;
} dsp_simulink_IIRHalfbandDecimat;

#endif                                 //typedef_dsp_simulink_IIRHalfbandDecimat

#ifndef typedef_dsp_simulink_IIRHalfbandDecim_b
#define typedef_dsp_simulink_IIRHalfbandDecim_b

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  svRMMPEUlKM8qjwqJZ0JXqB pStates;
  real32_T pBranch2Carry;
  int8_T pNumChannels;
  shcLhZeMq0dzE7rrne4jMSC pBranchCoef1;
  shcLhZeMq0dzE7rrne4jMSC pBranchCoef2;
} dsp_simulink_IIRHalfbandDecim_b;

#endif                                 //typedef_dsp_simulink_IIRHalfbandDecim_b

#ifndef typedef_dsp_simulink_IIRHalfbandDeci_bg
#define typedef_dsp_simulink_IIRHalfbandDeci_bg

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  sfYHht4BcoLXT44M6eWvZ8C pStates;
  real32_T pBranch2Carry;
  int8_T pNumChannels;
  shcLhZeMq0dzE7rrne4jMSC pBranchCoef1;
} dsp_simulink_IIRHalfbandDeci_bg;

#endif                                 //typedef_dsp_simulink_IIRHalfbandDeci_bg

// Forward declaration for rtModel
typedef struct tag_RTM RT_MODEL;

#endif                                 // RTW_HEADER_SmartTrackerFilter_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
