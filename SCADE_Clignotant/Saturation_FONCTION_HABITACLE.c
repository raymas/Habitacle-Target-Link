/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config Z:/SCADE/scadeWorkspace/test/KCG/config.txt
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Saturation_FONCTION_HABITACLE.h"

/* FONCTION_HABITACLE::Saturation/ */
kcg_int32 Saturation_FONCTION_HABITACLE(
  /* Val/, _L2/ */
  kcg_int32 Val,
  /* High/, _L3/ */
  kcg_int32 High,
  /* Low/, _L6/ */
  kcg_int32 Low)
{
  /* LimitedVal/, _L4/ */
  kcg_int32 LimitedVal;

  /* _L4= */
  if (Val < Low) {
    LimitedVal = Low;
  }
  else /* _L1= */
  if (Val > High) {
    LimitedVal = High;
  }
  else {
    LimitedVal = Val;
  }
  return LimitedVal;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Saturation_FONCTION_HABITACLE.c
** Generation date: 2020-01-23T20:16:23
*************************************************************$ */

