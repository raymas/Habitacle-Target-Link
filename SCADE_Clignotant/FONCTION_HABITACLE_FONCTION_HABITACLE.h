/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _FONCTION_HABITACLE_FONCTION_HABITACLE_H_
#define _FONCTION_HABITACLE_FONCTION_HABITACLE_H_

#include "kcg_types.h"
#include "FONCTION_FREINAGE_FONCTION_HABITACLE.h"
#include "TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE.h"
#include "TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE.h"
#include "FONCTION_CLIGNOTANT_FONCTION_HABITACLE.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L4/, leftIndicatorSignal/ */ leftIndicatorSignal;
  kcg_bool /* _L3/, rightIndicatorSignal/ */ rightIndicatorSignal;
  kcg_bool /* _L5/, brakeSignal/ */ brakeSignal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE /* _L4=(FONCTION_HABITACLE::FONCTION_CLIGNOTANT#1)/ */ Context_FONCTION_CLIGNOTANT_1;
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE /* _L10=(FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT#1)/ */ Context_TRAITEMENT_CLIGNOTANT_1;
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE /* _L8=(FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE#1)/ */ Context_TRAITEMENT_FREINAGE_URGENCE_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_FONCTION_HABITACLE_FONCTION_HABITACLE;

/* ===========  node initialization and cycle functions  =========== */
/* FONCTION_HABITACLE::FONCTION_HABITACLE/ */
#ifdef __cplusplus
extern "C" {
#endif
extern void FONCTION_HABITACLE_FONCTION_HABITACLE(
  /* Indicator_Input/, _L1/ */
  kcg_int8 Indicator_Input,
  /* Warning_Input/, _L2/ */
  kcg_bool Warning_Input,
  /* Brake_Input/, _L6/ */
  kcg_int16 Brake_Input,
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC);
#ifdef __cplusplus
}
#endif

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FONCTION_HABITACLE_reset_FONCTION_HABITACLE(
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FONCTION_HABITACLE_init_FONCTION_HABITACLE(
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FONCTION_HABITACLE_FONCTION_HABITACLE_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FONCTION_HABITACLE_FONCTION_HABITACLE.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

