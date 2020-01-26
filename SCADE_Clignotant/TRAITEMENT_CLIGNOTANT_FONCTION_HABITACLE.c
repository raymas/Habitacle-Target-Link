/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::TRAITEMENT_CLIGNOTANT/ */
void TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE(
  /* Indicator_Input/, _L8/, indicatorActivation/ */
  kcg_int8 Indicator_Input,
  /* Warning_Input/, _L24/ */
  kcg_bool Warning_Input,
  /* EmergencyCommand/, _L25/ */
  kcg_bool EmergencyCommand,
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  /* _L19/ */
  kcg_bool _L19;
  /* _L1/ */
  kcg_float32 _L1;
  /* SM1: */
  SSM_ST_SM1 SM1_state_sel;
  /* ctr2/ */
  kcg_uint16 ctr2_partial;
  /* ctr2/ */
  kcg_uint16 _1_ctr2_partial;

  SM1_state_sel = outC->SM1_state_nxt;
  _L19 = Warning_Input | EmergencyCommand;
  /* SM1: */
  switch (SM1_state_sel) {
    case SSM_st_State4_SM1 :
      outC->_L16 = Indicator_Input;
      break;
    case SSM_st_TouchAction_SM1 :
      ctr2_partial = outC->ctr2 + kcg_lit_uint16(1);
      outC->ctr2 = ctr2_partial;
      break;
    case SSM_st_Counter_SM1 :
      _1_ctr2_partial = outC->ctr2 + kcg_lit_uint16(1);
      outC->ctr2 = _1_ctr2_partial;
      break;
    case SSM_st_Initialisation_SM1 :
      outC->_L16 = kcg_lit_int8(0);
      outC->ctr2 = kcg_lit_uint16(0);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->rightIndicatorCommand = _L19 | (outC->_L16 == kcg_lit_int8(-1));
  outC->leftIndicatorCommand = (/* _L26= */(kcg_int8) kcg_lit_float32(1.) ==
      outC->_L16) | _L19;
  _L1 = Cal_TimeTouchDetection_FONCTION_HABITACLE / SampleTime_FONCTION_HABITACLE;
  /* SM1: */
  switch (SM1_state_sel) {
    case SSM_st_State4_SM1 :
      outC->SM1_state_nxt = SSM_st_Counter_SM1;
      break;
    case SSM_st_TouchAction_SM1 :
      if ((ctr2_partial >= /* _L15= */(kcg_uint16)
            (Cal_NbTouchActivation_FONCTION_HABITACLE *
              Cal_Tcligno_FONCTION_HABITACLE / SampleTime_FONCTION_HABITACLE)) |
        (Indicator_Input != kcg_lit_int8(0))) {
        outC->SM1_state_nxt = SSM_st_Initialisation_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_TouchAction_SM1;
      }
      break;
    case SSM_st_Counter_SM1 :
      if ((_1_ctr2_partial <= /* _L14= */(kcg_uint16) _L1) & (Indicator_Input ==
          kcg_lit_int8(0))) {
        outC->SM1_state_nxt = SSM_st_TouchAction_SM1;
      }
      else if ((_1_ctr2_partial > /* _L14= */(kcg_uint16) _L1) &
        (Indicator_Input == kcg_lit_int8(0))) {
        outC->SM1_state_nxt = SSM_st_Initialisation_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Counter_SM1;
      }
      break;
    case SSM_st_Initialisation_SM1 :
      if (Indicator_Input != kcg_lit_int8(0)) {
        outC->SM1_state_nxt = SSM_st_State4_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Initialisation_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void TRAITEMENT_CLIGNOTANT_init_FONCTION_HABITACLE(
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  outC->leftIndicatorCommand = kcg_true;
  outC->rightIndicatorCommand = kcg_true;
  outC->ctr2 = kcg_lit_uint16(0);
  outC->_L16 = kcg_lit_int8(0);
  outC->SM1_state_nxt = SSM_st_Initialisation_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAITEMENT_CLIGNOTANT_reset_FONCTION_HABITACLE(
  outC_TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE *outC)
{
  outC->SM1_state_nxt = SSM_st_Initialisation_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TRAITEMENT_CLIGNOTANT_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

