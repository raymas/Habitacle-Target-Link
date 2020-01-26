/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FONCTION_FREINAGE_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::FONCTION_FREINAGE/ */
kcg_bool FONCTION_FREINAGE_FONCTION_HABITACLE(
  /* Brake_Input/, _L4/ */
  kcg_int16 Brake_Input)
{
  /* _L3/, brakeSignal/ */
  kcg_bool brakeSignal;

  brakeSignal = Brake_Input >= /* _L5= */(kcg_int16)
      Cal_SeuilBrakeOn_FONCTION_HABITACLE;
  return brakeSignal;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FONCTION_FREINAGE_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

