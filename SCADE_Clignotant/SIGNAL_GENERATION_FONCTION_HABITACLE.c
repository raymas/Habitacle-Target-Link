/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SIGNAL_GENERATION_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::SIGNAL_GENERATION/ */
void SIGNAL_GENERATION_FONCTION_HABITACLE(
  /* indicatorCommand/ */
  kcg_bool indicatorCommand,
  /* EmergencyCommand/, _L2/ */
  kcg_bool EmergencyCommand,
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC)
{
  /* SM1:Clignotement:SM2: */
  SSM_ST_SM2_Clignotement_SM1 SM2_state_sel_Clignotement_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act;
  /* _L5/ */
  kcg_float32 _L5;

  SM1_state_act = outC->SM1_state_nxt;
  /* _L5= */
  if (EmergencyCommand) {
    _L5 = Cal_Tcligno_FONCTION_HABITACLE / SampleTime_FONCTION_HABITACLE /
      kcg_lit_float32(4.) - kcg_lit_float32(1.);
  }
  else {
    _L5 = Cal_Tcligno_FONCTION_HABITACLE / SampleTime_FONCTION_HABITACLE /
      kcg_lit_float32(2.) - kcg_lit_float32(1.);
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Clignotement_SM1 :
      if (outC->SM1_reset_nxt) {
        outC->init = kcg_true;
      }
      outC->SM1_reset_nxt = !indicatorCommand;
      /* SM1:Clignotement:SM2: */
      if (outC->init) {
        outC->init = kcg_false;
        SM2_state_sel_Clignotement_SM1 = SSM_st_Allumer_SM2_Clignotement_SM1;
      }
      else {
        SM2_state_sel_Clignotement_SM1 = outC->SM2_state_nxt_Clignotement_SM1;
      }
      /* SM1:Clignotement:SM2: */
      switch (SM2_state_sel_Clignotement_SM1) {
        case SSM_st_Reset_SM2_Clignotement_SM1 :
          outC->clock_count = outC->clock_count + kcg_lit_uint8(1);
          if (outC->indicatorSignal & (outC->clock_count >=
              /* _L6= */(kcg_uint8) _L5)) {
            outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Eteindre_SM2_Clignotement_SM1;
          }
          else if (outC->clock_count < /* _L6= */(kcg_uint8) _L5) {
            outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Reset_SM2_Clignotement_SM1;
          }
          else if ((!outC->indicatorSignal) & (outC->clock_count >=
              /* _L6= */(kcg_uint8) _L5)) {
            outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Allumer_SM2_Clignotement_SM1;
          }
          else {
            outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Reset_SM2_Clignotement_SM1;
          }
          break;
        case SSM_st_Eteindre_SM2_Clignotement_SM1 :
          outC->indicatorSignal = kcg_false;
          outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Reset_SM2_Clignotement_SM1;
          outC->clock_count = kcg_lit_uint8(0);
          break;
        case SSM_st_Allumer_SM2_Clignotement_SM1 :
          outC->indicatorSignal = kcg_true;
          outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Reset_SM2_Clignotement_SM1;
          outC->clock_count = kcg_lit_uint8(0);
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      if (outC->SM1_reset_nxt) {
        outC->SM1_state_nxt = SSM_st_CounterInitialisation_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Clignotement_SM1;
      }
      break;
    case SSM_st_CounterInitialisation_SM1 :
      outC->indicatorSignal = kcg_false;
      outC->clock_count = kcg_lit_uint8(0);
      if (indicatorCommand) {
        outC->SM1_state_nxt = SSM_st_Clignotement_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_CounterInitialisation_SM1;
      }
      outC->SM1_reset_nxt = indicatorCommand;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SIGNAL_GENERATION_init_FONCTION_HABITACLE(
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC)
{
  outC->SM1_reset_nxt = kcg_false;
  outC->indicatorSignal = kcg_true;
  outC->init = kcg_true;
  outC->clock_count = kcg_lit_uint8(0);
  outC->SM2_state_nxt_Clignotement_SM1 = SSM_st_Allumer_SM2_Clignotement_SM1;
  outC->SM1_state_nxt = SSM_st_CounterInitialisation_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SIGNAL_GENERATION_reset_FONCTION_HABITACLE(
  outC_SIGNAL_GENERATION_FONCTION_HABITACLE *outC)
{
  outC->SM1_reset_nxt = kcg_false;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_CounterInitialisation_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SIGNAL_GENERATION_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

