classdef tFact < matlab.unittest.TestCase
    %tmySquareRoot Unit tests for Factorial function
    
    properties (TestParameter)
        %pRealNumbers - Input numbers with expected result of sqrt
        pRealNumbers = struct(...
            'four', {{4, 24}}, ...
            'five', {{5, 120}}, ...
            'somenumber', {{170, factorial(170)}})
            
    end
    
    %% Functional Tests
    methods (Test)        
        function normalInputsParameterized(testCase, pRealNumbers)
            %normalInputsParameterized Verify that correct square root is computed
            
            % Use an absolute tolerance to guard against precision loss
            testCase.verifyEqual(customizedFactorial(pRealNumbers{1}), pRealNumbers{2}, ...
                'RelTol', 1e-4);
        end
    end
    
    %% Edge Case Functional Tests
    methods (Test)
        function zeroInput(testCase)
            %zeroInput Verify correct result for 0 input
            
            sqr = customizedFactorial(0);
            testCase.verifyEqual(sqr, 1);
        end
        
        function infinityInput(testCase)
            %infinityInput Verify correct result for infinity input
            
            sqr = customizedFactorial(Inf);
            testCase.verifyEqual(sqr, Inf);
        end

    end
    
    
    %% Negative Tests
    methods (Test)    
        function nanInputNeg(testCase)
            %nanInputNeg Verify that NaN is not a valid input to the function
            
            testCase.verifyError(@() customizedFactorial(nan), ...
                'MATLAB:factorial:NNegativeInt');
        end 
        
        function negativeInput(testCase)
            %nanInputNeg Verify that NaN is not a valid input to the function
            
            testCase.verifyError(@() customizedFactorial(-12), ...
                'MATLAB:factorial:NNegativeInt');
        end
        
        function decimalInput(testCase)
            %nanInputNeg Verify that NaN is not a valid input to the function
            
            testCase.verifyError(@() customizedFactorial(12.5), ...
                'MATLAB:factorial:NNegativeInt');
        end
    end
end
