main = do
    print $ evaluatePolynomial [(1, 71), (5, 0)] 2

evaluatePolynomial list  number = sum([coefficient * (number) ^ exponent | (coefficient, exponent) <- list])
