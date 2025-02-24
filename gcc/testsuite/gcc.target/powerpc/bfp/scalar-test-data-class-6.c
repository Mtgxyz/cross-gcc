/* { dg-do compile { target { powerpc*-*-* } } } */
/* { dg-skip-if "do not override -mcpu" { powerpc*-*-* } { "-mcpu=*" } { "-mcpu=power8" } } */
/* { dg-require-effective-target powerpc_p9vector_ok } */
/* { dg-options "-mcpu=power8" } */

#include <altivec.h>

unsigned int
test_data_class (double *p)
{
  double source = *p;

  return __builtin_vec_scalar_test_data_class (source, 3); /* { dg-error "Builtin function __builtin_vsx_scalar_test_data_class_dp requires" } */
}
