main = do
    let n = 10
    print (cosine 0.85 50)

cosine x n = do
    let coefficients = [(-1) ^ (div k 2) / fromIntegral (factorial k) | k <- [0..n], mod k 2 == 0]
    evaluatePolynomial coefficients x True

factorial n
    | n == 0 = 1
    | otherwise = n * factorial (n - 1)


--p01.hs
evaluatePolynomial coefficients n False = evaluatePolynomial (reverse coefficients) n True

evaluatePolynomial coefficients n reverse = evaluatePolynomial' coefficients n 1
  where
    evaluatePolynomial' [] _ _ = 0
    evaluatePolynomial' (x:xs) n factor = x * factor + evaluatePolynomial' xs n (factor * n)