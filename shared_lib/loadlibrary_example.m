%% Steps to run this code
% 1. Compile Fact.cpp into a shared library (*.so on Linux, *.dll on Windows)
% 2. Place the shared library file in the same folder as this MATLAB file
% 3. Run the MATLAB code below

%% The shared library needs to be on the MATLAB path
% This code assumes that the shared library is in the same folder as this
% MATLAB file
hfile = fullfile(pwd,'Fact.h');

%% Load library (if not already loaded)
if not(libisloaded('libFact'))
    loadlibrary('libFact', hfile)
%     loadlibrary('libfactorial', 'factorial.h', 'includepath', fileparts(mfilename('fullpath')))
end

%% List all functions in shared library
libfunctions libFact -full


%% Call function for factorial in shared library
factNum = calllib('libFact','fact', 150);


%% Speed comparison to factorial in MATLAB
tic; for i = 1:1000, calllib('libFact','fact', i); end; toc
tic; for i = 1:1000, res = factorial(i); end; toc

%% Unload library
unloadlibrary('libFact')