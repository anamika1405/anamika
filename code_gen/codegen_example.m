%% Steps to run this code
% 1. Open MATLAB, change the current folder to this directory.
% 2. To run the code in MATLAB (interpreted), call the function
%
%      codegen_example
%
% 3. To profile the average execution time, run
%
%      timeit(@codegen_example)
%
% 4. To generate code for this MATLAB function, use the "codegen" command
%
%      codegen codegen_example
%
% 5. This will generate a MEX file. Run and profile it
%
%      codegen_example_mex
%      timeit(@() codegen_example_mex)


function res = codegen_example

A = 5;

if coder.target('MATLAB')
    %% Executing code in MATLAB
    res = factorial(5);
else
%     %% Execution code in code generation
    
    % Make sure to include C++ source code
    sharedLibPath = mfilename('fullpath'); %fullfile(mfilename('fullpath'), '..', '..', '03-shared_library');
    coder.updateBuildInfo('addIncludePaths', sharedLibPath);
    coder.updateBuildInfo('addSourceFiles', 'Fact.cpp');
    coder.cinclude('Fact.h');
  
%     % Call C++ function directly
    res = 0;
    res = coder.ceval('fact', A);
end

end
