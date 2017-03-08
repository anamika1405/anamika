/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * _coder_codegen_example_api.c
 *
 * Code generation for function '_coder_codegen_example_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "codegen_example.h"
#include "_coder_codegen_example_api.h"
#include "codegen_example_data.h"

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

void codegen_example_api(const mxArray *plhs[1])
{
  real_T res;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  res = codegen_example(&st);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(res);
}

/* End of code generation (_coder_codegen_example_api.c) */
