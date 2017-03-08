/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * _coder_codegen_example_mex.c
 *
 * Code generation for function '_coder_codegen_example_mex'
 *
 */

/* Include files */
#include "codegen_example.h"
#include "_coder_codegen_example_mex.h"
#include "codegen_example_terminate.h"
#include "_coder_codegen_example_api.h"
#include "codegen_example_initialize.h"
#include "codegen_example_data.h"

/* Function Declarations */
static void codegen_example_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs);

/* Function Definitions */
static void codegen_example_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs)
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        15, "codegen_example");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "codegen_example");
  }

  /* Call the function. */
  codegen_example_api(outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  codegen_example_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)prhs;
  mexAtExit(codegen_example_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  codegen_example_initialize();

  /* Dispatch the entry-point. */
  codegen_example_mexFunction(nlhs, plhs, nrhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_codegen_example_mex.c) */
