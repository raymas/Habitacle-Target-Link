/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _FONCTION_CLIGNOTANT_FONCTION_HABITACLE_H_
#define _FONCTION_CLIGNOTANT_FONCTION_HABITACLE_H_

#include "kcg_types.h"
#include "SIGNAL_GENERATION_FONCTION_HABITACLE.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L5/, leftIndicatorSignal/ */ leftIndicatorSignal;
  kcg_bool /* _L6/, rightIndicatorSignal/ */ rightIndicatorSignal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE /* _L7=(FONCTION_HABITACLE::SIGNAL_GENERATION#1)/ */ Context_SIGNAL_GENERATION_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE;

/* ===========  node initialization and cycle functions  =========== */
/* FONCTION_HABITACLE::FONCTION_CLIGNOTANT/ */
extern void FONCTION_CLIGNOTANT_FONCTION_HABITACLE(
  /* EmergencyCommand/, _L3/ */
  kcg_bool EmergencyCommand,
  /* _L1/, leftIndicatorCommand/ */
  kcg_bool leftIndicatorCommand,
  /* _L2/, rightIndicatorCommand/ */
  kcg_bool rightIndicatorCommand,
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FONCTION_CLIGNOTANT_reset_FONCTION_HABITACLE(
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FONCTION_CLIGNOTANT_init_FONCTION_HABITACLE(
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FONCTION_CLIGNOTANT_FONCTION_HABITACLE_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FONCTION_CLIGNOTANT_FONCTION_HABITACLE.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

