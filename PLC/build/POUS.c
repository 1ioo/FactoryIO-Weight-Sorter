void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





static inline INT __PROGRAM0_DIV__INT__INT__INT1(BOOL EN,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV35_ENO,);
  __res = DIV__INT__INT__INT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV35_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GT__BOOL__INT2(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GT116_ENO,);
  __res = GT__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GT116_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LE__BOOL__INT3(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LE119_ENO,);
  __res = LE__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LE119_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GT__BOOL__INT4(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GT16_ENO,);
  __res = GT__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GT16_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LE__BOOL__INT5(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LE20_ENO,);
  __res = LE__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LE20_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__INT6(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE123_ENO,);
  __res = GE__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE123_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->ATSCALEENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATSCALE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATSCALEEXIT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATLEFTENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATEXITLEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATFORWARDENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ATRIGHTENTRY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->START,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->EMERGENCYSTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENTRYCONVEYOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADSCALE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDLEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEFTCONVEYOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDRIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIGHTCONVEYOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDFORWARD,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FRONTCONVEYOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STARTLIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESETLIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPLIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->WEIGHT,0,retain)
  __INIT_VAR(data__->LEFTCOUNT,0,retain)
  __INIT_VAR(data__->FORWARDCOUNT,0,retain)
  __INIT_VAR(data__->RIGHTCOUNT,0,retain)
  __INIT_VAR(data__->WEIGHTCOUNTER,0,retain)
  TP_init__(&data__->TP0,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  CTU_init__(&data__->CTU0,retain);
  CTU_init__(&data__->CTU1,retain);
  CTU_init__(&data__->CTU2,retain);
  __INIT_VAR(data__->_TMP_DIV35_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV35_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GT116_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GT116_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LE119_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LE119_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GT16_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GT16_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LE20_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LE20_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE123_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE123_OUT,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,STOPLIGHT,,!(__GET_VAR(data__->STOP,)));
  __SET_VAR(data__->,STARTLIGHT,,((((__GET_VAR(data__->START,) || __GET_VAR(data__->STARTLIGHT,)) && __GET_VAR(data__->STOP,)) && !(__GET_VAR(data__->RESET,))) && __GET_VAR(data__->EMERGENCYSTOP,)));
  __SET_VAR(data__->,FRONTCONVEYOR,,__GET_VAR(data__->STARTLIGHT,));
  __SET_VAR(data__->,RIGHTCONVEYOR,,__GET_VAR(data__->STARTLIGHT,));
  __SET_VAR(data__->,LOADSCALE,,__GET_VAR(data__->STARTLIGHT,));
  __SET_VAR(data__->,ENTRYCONVEYOR,,__GET_VAR(data__->STARTLIGHT,));
  __SET_VAR(data__->,LEFTCONVEYOR,,__GET_VAR(data__->STARTLIGHT,));
  __SET_VAR(data__->,_TMP_DIV35_OUT,,__PROGRAM0_DIV__INT__INT__INT1(
    (BOOL)__BOOL_LITERAL(TRUE),
    (INT)__GET_VAR(data__->WEIGHT,),
    (INT)50,
    data__));
  if (__GET_VAR(data__->_TMP_DIV35_ENO,)) {
    __SET_VAR(data__->,WEIGHTCOUNTER,,__GET_VAR(data__->_TMP_DIV35_OUT,));
  };
  __SET_VAR(data__->TP0.,IN,,__GET_VAR(data__->ATSCALE,));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TP_body__(&data__->TP0);
  if (__GET_VAR(data__->TP0.Q,)) {
    __SET_VAR(data__->,LOADSCALE,,__BOOL_LITERAL(FALSE));
  };
  if ((((__GET_VAR(data__->ATLEFTENTRY,) || __GET_VAR(data__->ATSCALE,)) || __GET_VAR(data__->ATSCALEEXIT,)) && !(__GET_VAR(data__->ATSCALEENTRY,)))) {
    __SET_VAR(data__->,ENTRYCONVEYOR,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_GT116_OUT,,__PROGRAM0_GT__BOOL__INT2(
    (BOOL)__GET_VAR(data__->ATSCALE,),
    (UINT)2,
    (INT)__GET_VAR(data__->WEIGHTCOUNTER,),
    (INT)1,
    data__));
  __SET_VAR(data__->,_TMP_LE119_OUT,,__PROGRAM0_LE__BOOL__INT3(
    (BOOL)__GET_VAR(data__->_TMP_GT116_OUT,),
    (UINT)2,
    (INT)__GET_VAR(data__->WEIGHTCOUNTER,),
    (INT)8,
    data__));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_LE119_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,SENDLEFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_GT16_OUT,,__PROGRAM0_GT__BOOL__INT4(
    (BOOL)__GET_VAR(data__->ATSCALE,),
    (UINT)2,
    (INT)__GET_VAR(data__->WEIGHTCOUNTER,),
    (INT)8,
    data__));
  __SET_VAR(data__->,_TMP_LE20_OUT,,__PROGRAM0_LE__BOOL__INT5(
    (BOOL)__GET_VAR(data__->_TMP_GT16_OUT,),
    (UINT)2,
    (INT)__GET_VAR(data__->WEIGHTCOUNTER,),
    (INT)10,
    data__));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->_TMP_LE20_OUT,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,SENDRIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_GE123_OUT,,__PROGRAM0_GE__BOOL__INT6(
    (BOOL)__GET_VAR(data__->ATSCALE,),
    (UINT)2,
    (INT)__GET_VAR(data__->WEIGHTCOUNTER,),
    (INT)10,
    data__));
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->_TMP_GE123_OUT,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->ATLEFTENTRY,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->ATLEFTENTRY,)) {
    __SET_VAR(data__->,SENDLEFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->ATRIGHTENTRY,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->ATRIGHTENTRY,)) {
    __SET_VAR(data__->,SENDRIGHT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->ATFORWARDENTRY,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->ATLEFTENTRY,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->RESETLIGHT,));
  __SET_VAR(data__->CTU0.,PV,,9999);
  CTU_body__(&data__->CTU0);
  __SET_VAR(data__->,LEFTCOUNT,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->ATRIGHTENTRY,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->RESETLIGHT,));
  __SET_VAR(data__->CTU1.,PV,,9999);
  CTU_body__(&data__->CTU1);
  __SET_VAR(data__->,RIGHTCOUNT,,__GET_VAR(data__->CTU1.CV,));
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->ATFORWARDENTRY,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->CTU2.,CU,,__GET_VAR(data__->R_TRIG3.Q,));
  __SET_VAR(data__->CTU2.,R,,__GET_VAR(data__->RESETLIGHT,));
  __SET_VAR(data__->CTU2.,PV,,9999);
  CTU_body__(&data__->CTU2);
  __SET_VAR(data__->,FORWARDCOUNT,,__GET_VAR(data__->CTU2.CV,));
  __SET_VAR(data__->,RESETLIGHT,,__GET_VAR(data__->RESET,));
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,LEFTCONVEYOR,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,ENTRYCONVEYOR,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,LOADSCALE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,RIGHTCONVEYOR,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,FRONTCONVEYOR,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,SENDRIGHT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,SENDFORWARD,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->RESET,)) {
    __SET_VAR(data__->,SENDLEFT,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





