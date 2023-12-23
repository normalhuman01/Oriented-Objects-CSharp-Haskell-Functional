main = do
    print(sine 3.25 50)
    let primeList = getPrimesFiltered 100
    print $ "Lista de numeros primos generada: " ++ show primeList
    let resultList = map (\x -> sine (fromIntegral x) 50) primeList
    print resultList

getPrimesFiltered n = [k | k <- [1..100], isPrime k && mod k 5 /= 0]

isPrime n = length [i | i <- [1..n], mod n i == 0] == 2

--p04.hs
sine number n = do
    let coefficients = [((-1) ^ (div i 2) / fromIntegral (factorial i), i) | i <- [0..n], mod i 2 /= 0]
    evaluatePolynomial coefficients number

factorial n
    | n == 0 = 1
    | otherwise = n * factorial (n - 1)

evaluatePolynomial list  number = sum([coefficient * (number) ^ exponent | (coefficient, exponent) <- list])