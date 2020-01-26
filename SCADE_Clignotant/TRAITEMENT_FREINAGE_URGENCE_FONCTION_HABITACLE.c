/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::TRAITEMENT_FREINAGE_URGENCE/ */
void TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE(
  /* Brake_Input/, _L2/ */
  kcg_int16 Brake_Input,
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC)
{
  /* _L15/ */
  kcg_float32 _L15;
  /* _L13/ */
  kcg_int32 _L13;

  _L15 = Cal_EmergencyTime_FONCTION_HABITACLE / SampleTime_FONCTION_HABITACLE;
  /* _L13= */
  if ((/* _L31= */(kcg_float32) (Brake_Input - outC->lbrake_input) >=
      Cal_VbrakeLimit_FONCTION_HABITACLE * SampleTime_FONCTION_HABITACLE) &
    (Brake_Input >= /* _L24= */(kcg_int16)
        Cal_EmergencySeuilDetection_FONCTION_HABITACLE)) {
    _L13 = kcg_lit_int32(0);
  }
  else {
    _L13 = /* _L19=(FONCTION_HABITACLE::Saturation#1)/ */
      Saturation_FONCTION_HABITACLE(
        kcg_lit_int32(1) + /* _L32= */(kcg_int32) outC->cntr,
        /* _L26= */(kcg_int32) (_L15 + kcg_lit_float32(1.)),
        kcg_lit_int32(0));
  }
  outC->EmergencyCommand = _L13 < /* _L25= */(kcg_int32) _L15;
  outC->cntr = /* _L34= */(kcg_float32) _L13;
  outC->lbrake_input = Brake_Input;
}

#ifndef KCG_USER_DEFINED_INIT
void TRAITEMENT_FREINAGE_URGENCE_init_FONCTION_HABITACLE(
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC)
{
  outC->EmergencyCommand = kcg_true;
  outC->cntr = Cal_EmergencyTime_FONCTION_HABITACLE /
    SampleTime_FONCTION_HABITACLE;
  outC->lbrake_input = kcg_lit_int16(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAITEMENT_FREINAGE_URGENCE_reset_FONCTION_HABITACLE(
  outC_TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE *outC)
{
  outC->cntr = Cal_EmergencyTime_FONCTION_HABITACLE /
    SampleTime_FONCTION_HABITACLE;
  outC->lbrake_input = kcg_lit_int16(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TRAITEMENT_FREINAGE_URGENCE_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

