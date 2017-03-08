#Code For finding factorial of a nonneagative integer number.


##/mex_call
* To find the factorial of number run
		mex Fact.cpp and 
		mex_call_example.m 
* To test functional tests, edge cases functional tests(0, inf) and negative tests (negative number, decimal number, NaN) run
		suite = matlab.unittest.TestSuite.fromFile('tFact.m');
		result = run(suite);
##/shared_lib
* To find the factorial of number 
		Make .so file
		loadlibrary_example.m

##/code_gen
* Run codegen codegen_example

