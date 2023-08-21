#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// FUNCTION_BLOCK PYTHON_EVAL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_EVAL;

void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain);
// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__);
// FUNCTION_BLOCK PYTHON_POLL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_POLL;

void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain);
// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__);
// FUNCTION_BLOCK PYTHON_GEAR
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,N)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  PYTHON_EVAL PY_EVAL;
  __DECLARE_VAR(UINT,COUNTER)
  __DECLARE_VAR(UINT,_TMP_ADD10_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ13_OUT)
  __DECLARE_VAR(UINT,_TMP_SEL15_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND7_OUT)

} PYTHON_GEAR;

void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain);
// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__);
// PROGRAM PROGRAM0
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,ATSCALEENTRY)
  __DECLARE_VAR(BOOL,ATSCALE)
  __DECLARE_VAR(BOOL,ATSCALEEXIT)
  __DECLARE_VAR(BOOL,ATLEFTENTRY)
  __DECLARE_VAR(BOOL,ATEXITLEFT)
  __DECLARE_VAR(BOOL,ATFORWARDENTRY)
  __DECLARE_VAR(BOOL,ATRIGHTENTRY)
  __DECLARE_VAR(BOOL,START)
  __DECLARE_VAR(BOOL,RESET)
  __DECLARE_VAR(BOOL,STOP)
  __DECLARE_VAR(BOOL,EMERGENCYSTOP)
  __DECLARE_VAR(BOOL,ENTRYCONVEYOR)
  __DECLARE_VAR(BOOL,LOADSCALE)
  __DECLARE_VAR(BOOL,SENDLEFT)
  __DECLARE_VAR(BOOL,LEFTCONVEYOR)
  __DECLARE_VAR(BOOL,SENDRIGHT)
  __DECLARE_VAR(BOOL,RIGHTCONVEYOR)
  __DECLARE_VAR(BOOL,SENDFORWARD)
  __DECLARE_VAR(BOOL,FRONTCONVEYOR)
  __DECLARE_VAR(BOOL,STARTLIGHT)
  __DECLARE_VAR(BOOL,RESETLIGHT)
  __DECLARE_VAR(BOOL,STOPLIGHT)
  __DECLARE_VAR(INT,WEIGHT)
  __DECLARE_VAR(INT,LEFTCOUNT)
  __DECLARE_VAR(INT,FORWARDCOUNT)
  __DECLARE_VAR(INT,RIGHTCOUNT)
  __DECLARE_VAR(INT,WEIGHTCOUNTER)
  TP TP0;
  TON TON0;
  TON TON1;
  TON TON2;
  CTU CTU0;
  CTU CTU1;
  CTU CTU2;
  __DECLARE_VAR(BOOL,_TMP_DIV35_ENO)
  __DECLARE_VAR(INT,_TMP_DIV35_OUT)
  __DECLARE_VAR(BOOL,_TMP_GT116_ENO)
  __DECLARE_VAR(BOOL,_TMP_GT116_OUT)
  __DECLARE_VAR(BOOL,_TMP_LE119_ENO)
  __DECLARE_VAR(BOOL,_TMP_LE119_OUT)
  __DECLARE_VAR(BOOL,_TMP_GT16_ENO)
  __DECLARE_VAR(BOOL,_TMP_GT16_OUT)
  __DECLARE_VAR(BOOL,_TMP_LE20_ENO)
  __DECLARE_VAR(BOOL,_TMP_LE20_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE123_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE123_OUT)
  R_TRIG R_TRIG1;
  R_TRIG R_TRIG2;
  R_TRIG R_TRIG3;

} PROGRAM0;

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain);
// Code part
void PROGRAM0_body__(PROGRAM0 *data__);
#endif //__POUS_H
