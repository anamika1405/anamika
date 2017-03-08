/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * codegen_example.h
 *
 * Code generation for function 'codegen_example'
 *
 */

#ifndef CODEGEN_EXAMPLE_H
#define CODEGEN_EXAMPLE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "codegen_example_types.h"

/* Function Declarations */
extern real_T codegen_example(const emlrtStack *sp);

#ifdef __WATCOMC__

#pragma aux codegen_example value [8087];

#endif
#endif

/* End of code generation (codegen_example.h) */
