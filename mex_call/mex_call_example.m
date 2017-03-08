%% Steps to run this code
% 1. Open MATLAB, change the current folder to this directory, and run
%
%       mex Fact.cpp
%
% 2. Run the MATLAB code below

%% Make sure MEX file is on the path
% addpath(fileparts(mfilename('fullpath')))

%% Call function for matrix multiplication in MEX
R = customizedFactorial(0);

isequal(R, factorial(0));

%% Speed comparison to Factorial in MATLAB
tic; for i = 1:10000, res = customizedFactorial(i); end; toc
tic; for i = 1:10000, res = factorial(i); end; toc
