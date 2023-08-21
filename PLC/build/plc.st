TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM program0
  VAR
    AtScaleEntry : BOOL;
    AtScale : BOOL;
    AtScaleExit : BOOL;
    AtLeftEntry : BOOL;
    AtExitLeft : BOOL;
    AtForwardEntry : BOOL;
    AtRightEntry : BOOL;
    Start : BOOL;
    Reset : BOOL;
    Stop : BOOL;
    EmergencyStop : BOOL;
    EntryConveyor : BOOL;
    LoadScale : BOOL;
    SendLeft : BOOL;
    LeftConveyor : BOOL;
    SendRight : BOOL;
    RightConveyor : BOOL;
    SendForward : BOOL;
    FrontConveyor : BOOL;
    StartLight : BOOL;
    ResetLight : BOOL;
    StopLight : BOOL;
    Weight : INT;
    LeftCount : INT;
    ForwardCount : INT;
    RightCount : INT;
    WeightCounter : INT;
  END_VAR
  VAR
    TP0 : TP;
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    CTU0 : CTU;
    CTU1 : CTU;
    CTU2 : CTU;
    _TMP_DIV35_ENO : BOOL;
    _TMP_DIV35_OUT : INT;
    _TMP_GT116_ENO : BOOL;
    _TMP_GT116_OUT : BOOL;
    _TMP_LE119_ENO : BOOL;
    _TMP_LE119_OUT : BOOL;
    _TMP_GT16_ENO : BOOL;
    _TMP_GT16_OUT : BOOL;
    _TMP_LE20_ENO : BOOL;
    _TMP_LE20_OUT : BOOL;
    _TMP_GE123_ENO : BOOL;
    _TMP_GE123_OUT : BOOL;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
  END_VAR

  StopLight := NOT(Stop);
  StartLight := (Start OR StartLight) AND Stop AND NOT(Reset) AND EmergencyStop;
  FrontConveyor := StartLight;
  RightConveyor := StartLight;
  LoadScale := StartLight;
  EntryConveyor := StartLight;
  LeftConveyor := StartLight;
  _TMP_DIV35_OUT := DIV(EN := TRUE, IN1 := Weight, IN2 := 50, ENO => _TMP_DIV35_ENO);
  IF _TMP_DIV35_ENO THEN
      WeightCounter := _TMP_DIV35_OUT;
  END_IF;
  TP0(IN := AtScale, PT := T#3000ms);
  IF TP0.Q THEN
    LoadScale := FALSE; (*reset*)
  END_IF;
  IF (AtLeftEntry OR AtScale OR AtScaleExit) AND NOT(AtScaleEntry) THEN
    EntryConveyor := FALSE; (*reset*)
  END_IF;
  _TMP_GT116_OUT := GT(EN := AtScale, IN1 := WeightCounter, IN2 := 1, ENO => _TMP_GT116_ENO);
  _TMP_LE119_OUT := LE(EN := _TMP_GT116_OUT, IN1 := WeightCounter, IN2 := 8, ENO => _TMP_LE119_ENO);
  TON0(IN := _TMP_LE119_OUT, PT := T#1000ms);
  IF TON0.Q THEN
    SendForward := TRUE; (*set*)
  END_IF;
  IF TON0.Q THEN
    SendLeft := TRUE; (*set*)
  END_IF;
  _TMP_GT16_OUT := GT(EN := AtScale, IN1 := WeightCounter, IN2 := 8, ENO => _TMP_GT16_ENO);
  _TMP_LE20_OUT := LE(EN := _TMP_GT16_OUT, IN1 := WeightCounter, IN2 := 10, ENO => _TMP_LE20_ENO);
  TON1(IN := _TMP_LE20_OUT, PT := T#1000ms);
  IF TON1.Q THEN
    SendForward := TRUE; (*set*)
  END_IF;
  IF TON1.Q THEN
    SendRight := TRUE; (*set*)
  END_IF;
  _TMP_GE123_OUT := GE(EN := AtScale, IN1 := WeightCounter, IN2 := 10, ENO => _TMP_GE123_ENO);
  TON2(IN := _TMP_GE123_OUT, PT := T#1000ms);
  IF TON2.Q THEN
    SendForward := TRUE; (*set*)
  END_IF;
  IF AtLeftEntry THEN
    SendForward := FALSE; (*reset*)
  END_IF;
  IF AtLeftEntry THEN
    SendLeft := FALSE; (*reset*)
  END_IF;
  IF AtRightEntry THEN
    SendForward := FALSE; (*reset*)
  END_IF;
  IF AtRightEntry THEN
    SendRight := FALSE; (*reset*)
  END_IF;
  IF AtForwardEntry THEN
    SendForward := FALSE; (*reset*)
  END_IF;
  R_TRIG1(CLK := AtLeftEntry);
  CTU0(CU := R_TRIG1.Q, R := ResetLight, PV := 9999);
  LeftCount := CTU0.CV;
  R_TRIG2(CLK := AtRightEntry);
  CTU1(CU := R_TRIG2.Q, R := ResetLight, PV := 9999);
  RightCount := CTU1.CV;
  R_TRIG3(CLK := AtForwardEntry);
  CTU2(CU := R_TRIG3.Q, R := ResetLight, PV := 9999);
  ForwardCount := CTU2.CV;
  ResetLight := Reset;
  IF Reset THEN
    LeftConveyor := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    EntryConveyor := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    LoadScale := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    RightConveyor := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    FrontConveyor := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    SendRight := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    SendForward := FALSE; (*reset*)
  END_IF;
  IF Reset THEN
    SendLeft := FALSE; (*reset*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
