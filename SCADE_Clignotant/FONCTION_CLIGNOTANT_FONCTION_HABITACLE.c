/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FONCTION_CLIGNOTANT_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::FONCTION_CLIGNOTANT/ */
void FONCTION_CLIGNOTANT_FONCTION_HABITACLE(
  /* EmergencyCommand/, _L3/ */
  kcg_bool EmergencyCommand,
  /* _L1/, leftIndicatorCommand/ */
  kcg_bool leftIndicatorCommand,
  /* _L2/, rightIndicatorCommand/ */
  kcg_bool rightIndicatorCommand,
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  /* _L7=(FONCTION_HABITACLE::SIGNAL_GENERATION#1)/ */
  SIGNAL_GENERATION_FONCTION_HABITACLE(
    (kcg_bool) (leftIndicatorCommand | rightIndicatorCommand),
    EmergencyCommand,
    &outC->Context_SIGNAL_GENERATION_1);
  outC->rightIndicatorSignal =
    outC->Context_SIGNAL_GENERATION_1.indicatorSignal & rightIndicatorCommand;
  outC->leftIndicatorSignal = leftIndicatorCommand &
    outC->Context_SIGNAL_GENERATION_1.indicatorSignal;
}

#ifndef KCG_USER_DEFINED_INIT
void FONCTION_CLIGNOTANT_init_FONCTION_HABITACLE(
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  outC->leftIndicatorSignal = kcg_true;
  outC->rightIndicatorSignal = kcg_true;
  /* _L7=(FONCTION_HABITACLE::SIGNAL_GENERATION#1)/ */
  SIGNAL_GENERATION_init_FONCTION_HABITACLE(&outC->Context_SIGNAL_GENERATION_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FONCTION_CLIGNOTANT_reset_FONCTION_HABITACLE(
  outC_FONCTION_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  /* _L7=(FONCTION_HABITACLE::SIGNAL_GENERATION#1)/ */
  SIGNAL_GENERATION_reset_FONCTION_HABITACLE(
    &outC->Context_SIGNAL_GENERATION_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FONCTION_CLIGNOTANT_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

