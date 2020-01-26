/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _SIGNAL_GENERATION_FONCTION_HABITACLE_H_
#define _SIGNAL_GENERATION_FONCTION_HABITACLE_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* indicatorSignal/ */ indicatorSignal;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  SSM_ST_SM2_Clignotement_SM1 /* SM1:Clignotement:SM2: */ SM2_state_nxt_Clignotement_SM1;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_uint8 /* clock_count/ */ clock_count;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SIGNAL_GENERATION_FONCTION_HABITACLE;

/* ===========  node initialization and cycle functions  =========== */
/* FONCTION_HABITACLE::SIGNAL_GENERATION/ */
extern void SIGNAL_GENERATION_FONCTION_HABITACLE(
  /* indicatorCommand/ */
  kcg_bool indicatorCommand,
  /* EmergencyCommand/, _L2/ */
  kcg_bool EmergencyCommand,
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SIGNAL_GENERATION_reset_FONCTION_HABITACLE(
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SIGNAL_GENERATION_init_FONCTION_HABITACLE(
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SIGNAL_GENERATION_FONCTION_HABITACLE_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SIGNAL_GENERATION_FONCTION_HABITACLE.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

