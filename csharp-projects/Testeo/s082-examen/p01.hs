main = do
    let coefficients = [1, 1, 3]
    let n = 8
    print $ evaluatePolynomial coefficients n False
    print $ evaluateTestPolynomial 4

--a)
evaluatePolynomial coefficients n False = evaluatePolynomial (reverse coefficients) n True

evaluatePolynomial coefficients n reverse = evaluatePolynomial' coefficients n 1
  where
    evaluatePolynomial' [] _ _ = 0
    evaluatePolynomial' (x:xs) n factor = x * factor + evaluatePolynomial' xs n (factor * n)

--b)
evaluateTestPolynomial k = evaluatePolynomial [k, k-1..0] (k ^ 2) False
