/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _System_System_H_
#define _System_System_H_

#include "kcg_types.h"
#include "FONCTION_HABITACLE_FONCTION_HABITACLE.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int8 /* Indicator_Input/, _L1/ */ Indicator_Input;
  kcg_bool /* Warning_Input/, _L2/ */ Warning_Input;
  kcg_int16 /* Brake_Input/, _L3/ */ Brake_Input;
} inC_System_System;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L4/, leftIndicatorSignal/ */ leftIndicatorSignal;
  kcg_bool /* _L5/, rightIndicatorSignal/ */ rightIndicatorSignal;
  kcg_bool /* _L6/, brakeSignal/ */ brakeSignal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE /* _L4=(FONCTION_HABITACLE::FONCTION_HABITACLE#1)/ */ Context_FONCTION_HABITACLE_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_System_System;

/* ===========  node initialization and cycle functions  =========== */
/* System::System/ */
extern void System_System(inC_System_System *inC, outC_System_System *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void System_reset_System(outC_System_System *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void System_init_System(outC_System_System *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _System_System_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** System_System.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

