/* Test _Float64x NaNs.  */
/* { dg-do run } */
/* { dg-options "-fsignaling-nans" } */
/* { dg-add-options float64x } */
/* { dg-require-effective-target float64x_runtime } */
/* { dg-require-effective-target fenv_exceptions } */

#define WIDTH 64
#define EXT 1
#include "floatn-nan.h"
