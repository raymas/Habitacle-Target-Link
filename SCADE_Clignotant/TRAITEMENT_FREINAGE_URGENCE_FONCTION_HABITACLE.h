/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */
#ifndef _TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE_H_
#define _TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE_H_

#include "kcg_types.h"
#include "Saturation_FONCTION_HABITACLE.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EmergencyCommand/, _L14/ */ EmergencyCommand;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int16 /* lbrake_input/ */ lbrake_input;
  kcg_float32 /* cntr/ */ cntr;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE;

/* ===========  node initialization and cycle functions  =========== */
/* FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE/ */
extern void TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE(
  /* Brake_Input/, _L2/ */
  kcg_int16 Brake_Input,
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAITEMENT_FREINAGE_URGENCE_reset_FONCTION_HABITACLE(
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAITEMENT_FREINAGE_URGENCE_init_FONCTION_HABITACLE(
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE.h
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

