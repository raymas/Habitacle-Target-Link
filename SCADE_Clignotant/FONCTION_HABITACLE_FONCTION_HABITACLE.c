/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FONCTION_HABITACLE_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::FONCTION_HABITACLE/ */
void FONCTION_HABITACLE_FONCTION_HABITACLE(
  /* Indicator_Input/, _L1/ */
  kcg_int8 Indicator_Input,
  /* Warning_Input/, _L2/ */
  kcg_bool Warning_Input,
  /* Brake_Input/, _L6/ */
  kcg_int16 Brake_Input,
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC)
{
  /* _L8=(FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE#1)/ */
  TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE(
    Brake_Input,
    &outC->Context_TRAITEMENT_FREINAGE_URGENCE_1);
  /* _L10=(FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT#1)/ */
  TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE(
    Indicator_Input,
    Warning_Input,
    outC->Context_TRAITEMENT_FREINAGE_URGENCE_1.EmergencyCommand,
    &outC->Context_TRAITEMENT_CLIGNOTANT_1);
  outC->brakeSignal = /* _L5=(FONCTION_HABITACLE::FONCTION_FREINAGE#1)/ */
    FONCTION_FREINAGE_FONCTION_HABITACLE(Brake_Input);
  /* _L4=(FONCTION_HABITACLE::FONCTION_CLIGNOTANT#1)/ */
  FONCTION_CLIGNOTANT_FONCTION_HABITACLE(
    outC->Context_TRAITEMENT_FREINAGE_URGENCE_1.EmergencyCommand,
    outC->Context_TRAITEMENT_CLIGNOTANT_1.leftIndicatorCommand,
    outC->Context_TRAITEMENT_CLIGNOTANT_1.rightIndicatorCommand,
    &outC->Context_FONCTION_CLIGNOTANT_1);
  outC->leftIndicatorSignal =
    outC->Context_FONCTION_CLIGNOTANT_1.leftIndicatorSignal;
  outC->rightIndicatorSignal =
    outC->Context_FONCTION_CLIGNOTANT_1.rightIndicatorSignal;
}

#ifndef KCG_USER_DEFINED_INIT
void FONCTION_HABITACLE_init_FONCTION_HABITACLE(
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC)
{
  outC->leftIndicatorSignal = kcg_true;
  outC->rightIndicatorSignal = kcg_true;
  outC->brakeSignal = kcg_true;
  /* _L4=(FONCTION_HABITACLE::FONCTION_CLIGNOTANT#1)/ */
  FONCTION_CLIGNOTANT_init_FONCTION_HABITACLE(
    &outC->Context_FONCTION_CLIGNOTANT_1);
  /* _L10=(FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT#1)/ */
  TRAITEMENT_CLIGNOTANT_init_FONCTION_HABITACLE(
    &outC->Context_TRAITEMENT_CLIGNOTANT_1);
  /* _L8=(FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE#1)/ */
  TRAITEMENT_FREINAGE_URGENCE_init_FONCTION_HABITACLE(
    &outC->Context_TRAITEMENT_FREINAGE_URGENCE_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FONCTION_HABITACLE_reset_FONCTION_HABITACLE(
  outC_FONCTION_HABITACLE_FONCTION_HABITACLE *outC)
{
  /* _L4=(FONCTION_HABITACLE::FONCTION_CLIGNOTANT#1)/ */
  FONCTION_CLIGNOTANT_reset_FONCTION_HABITACLE(
    &outC->Context_FONCTION_CLIGNOTANT_1);
  /* _L10=(FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT#1)/ */
  TRAITEMENT_CLIGNOTANT_reset_FONCTION_HABITACLE(
    &outC->Context_TRAITEMENT_CLIGNOTANT_1);
  /* _L8=(FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE#1)/ */
  TRAITEMENT_FREINAGE_URGENCE_reset_FONCTION_HABITACLE(
    &outC->Context_TRAITEMENT_FREINAGE_URGENCE_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FONCTION_HABITACLE_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

