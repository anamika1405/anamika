function ft = customizedFactorial(n)
    N = n(:);
    if ~isreal(n) || any(fix(N) ~= N) || any(N < 0)
        error(message('MATLAB:factorial:NNegativeInt'))
    end
    if isa(n,'double')
        thres = 171;
    elseif isa(n, 'single')
        thres = 35;
    elseif isinteger(n)
        thres = 21;
    else
        error(message('MATLAB:factorial:unsupportedType'));
    end
    N = min(N,thres);
    m = max(N);
    
%     validateattributes(n, {'', 'single','double'}, {'scalar', 'real', 'nonnegative', 'nonnan'}, 'customizedFactorial', 'n');
    ft = Fact(m);
end