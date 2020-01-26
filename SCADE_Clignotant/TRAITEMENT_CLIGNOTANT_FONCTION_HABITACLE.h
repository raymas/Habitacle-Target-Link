/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE_H_
#define _TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L20/, leftIndicatorCommand/ */ leftIndicatorCommand;
  kcg_bool /* _L21/, rightIndicatorCommand/ */ rightIndicatorCommand;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* _L16/, touchActivation/ */ _L16;
  kcg_uint16 /* ctr2/ */ ctr2;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE;

/* ===========  node initialization and cycle functions  =========== */
/* FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT/ */
extern void TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE(
  /* Indicator_Input/, _L8/, indicatorActivation/ */
  kcg_int8 Indicator_Input,
  /* Warning_Input/, _L24/ */
  kcg_bool Warning_Input,
  /* EmergencyCommand/, _L25/ */
  kcg_bool EmergencyCommand,
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAITEMENT_CLIGNOTANT_reset_FONCTION_HABITACLE(
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAITEMENT_CLIGNOTANT_init_FONCTION_HABITACLE(
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

