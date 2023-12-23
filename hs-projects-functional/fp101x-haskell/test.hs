double x = x + x

quadruple x  = double (double x)

factorial n = product [1..n]

average ns = sum ns `div` length ns

lastElt xs = head (reverse xs)

lastEltAgain xs = xs !! (length xs-1)

lastEltAgainAgain (x:[]) = x
lastEltAgainAgain (x:xs) = lastEltAgainAgain xs

rmLastElt xs = take (length xs - 1) xs

rmLastEltAgain xs = reverse (tail (reverse xs))

ns = [1,2,3,4,5,6,7,8,9]

compose :: [a -> a] -> (a -> a)
compose = foldr (.) id

sumsqeven = compose [sum, map (^2), filter even]
