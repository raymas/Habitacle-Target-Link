/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "System_System.h"

/* System::System/ */
void System_System(inC_System_System *inC, outC_System_System *outC)
{
  /* _L4=(FONCTION_HABITACLE::FONCTION_HABITACLE#1)/ */
  FONCTION_HABITACLE_FONCTION_HABITACLE(
    inC->Indicator_Input,
    inC->Warning_Input,
    inC->Brake_Input,
    &outC->Context_FONCTION_HABITACLE_1);
  outC->leftIndicatorSignal =
    outC->Context_FONCTION_HABITACLE_1.leftIndicatorSignal;
  outC->rightIndicatorSignal =
    outC->Context_FONCTION_HABITACLE_1.rightIndicatorSignal;
  outC->brakeSignal = outC->Context_FONCTION_HABITACLE_1.brakeSignal;
}

#ifndef KCG_USER_DEFINED_INIT
void System_init_System(outC_System_System *outC)
{
  outC->leftIndicatorSignal = kcg_true;
  outC->rightIndicatorSignal = kcg_true;
  outC->brakeSignal = kcg_true;
  /* _L4=(FONCTION_HABITACLE::FONCTION_HABITACLE#1)/ */
  FONCTION_HABITACLE_init_FONCTION_HABITACLE(
    &outC->Context_FONCTION_HABITACLE_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void System_reset_System(outC_System_System *outC)
{
  /* _L4=(FONCTION_HABITACLE::FONCTION_HABITACLE#1)/ */
  FONCTION_HABITACLE_reset_FONCTION_HABITACLE(
    &outC->Context_FONCTION_HABITACLE_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** System_System.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

