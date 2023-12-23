main = print(sine 3.25 50)

sine number n = do
    let coefficients = [((-1) ^ (div i 2) / fromIntegral (factorial i), i) | i <- [0..n], mod i 2 /= 0]
    evaluatePolynomial coefficients number

--p03.hs
factorial n
    | n == 0 = 1
    | otherwise = n * factorial (n - 1)

evaluatePolynomial list  number = sum([coefficient * (number) ^ exponent | (coefficient, exponent) <- list])
    