/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * codegen_example.c
 *
 * Code generation for function 'codegen_example'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "codegen_example.h"
#include "Fact.h"

/* Function Definitions */
real_T codegen_example(const emlrtStack *sp)
{
  (void)sp;

  /*  Steps to run this code */
  /*  1. Open MATLAB, change the current folder to this directory. */
  /*  2. To run the code in MATLAB (interpreted), call the function */
  /*  */
  /*       codegen_example */
  /*  */
  /*  3. To profile the average execution time, run */
  /*  */
  /*       timeit(@codegen_example) */
  /*  */
  /*  4. To generate code for this MATLAB function, use the "codegen" command */
  /*  */
  /*       codegen codegen_example */
  /*  */
  /*  5. This will generate a MEX file. Run and profile it */
  /*  */
  /*       codegen_example_mex */
  /*       timeit(@() codegen_example_mex) */
  /*      %% Execution code in code generation */
  /*  Make sure to include C++ source code */
  /* fullfile(mfilename('fullpath'), '..', '..', '03-shared_library'); */
  /*      % Call C++ function directly */
  return fact(5.0);
}

/* End of code generation (codegen_example.c) */
