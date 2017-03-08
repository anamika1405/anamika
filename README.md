#Code For finding factorial of a nonneagative integer number.


/mex_call
	1) To find the factorial of number run
		mex Fact.cpp and 
		mex_call_example.m 
	2) To test functional tests, edge cases functional tests(0, inf) and negative tests (negative number, decimal number, NaN) run
		suite = matlab.unittest.TestSuite.fromFile('tFact.m');
		result = run(suite);
/shared_lib
	1) To find the factorial of number 
		Make .so file
		loadlibrary_example.m

/code_gen
	1) Run codegen codegen_example

