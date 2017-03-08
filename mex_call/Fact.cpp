#include "mex.h"
#include <iostream>

#define ll long double

using namespace std;

ll fact(double num)
{		
	int i;
	long double tmp = 1;
	for(i = 1; i <= num; i++){
		tmp = i*tmp;
	}
	return tmp;
}

void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  double *a;
  double *result;
  /* Check for proper number of arguments. */
  if(nrhs!=1) {
    mexErrMsgIdAndTxt( "MATLAB:factorialmex:invalidNumInputs",
            "One input required.");
  } else if(nlhs>1) {
    mexErrMsgIdAndTxt( "MATLAB:factorialmex:maxlhs",
            "Too many output arguments.");
  }
  plhs[0] = mxCreateDoubleMatrix(1, 1, mxREAL);
  
  result = mxGetPr(plhs[0]);

  /* Assign pointers to each input and output. */
  a = mxGetPr(prhs[0]);
  
  /* Call the timestwo subroutine. */
  *result = fact(*a);
}
