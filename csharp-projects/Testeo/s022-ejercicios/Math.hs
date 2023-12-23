module Math where
f :: Integer -> Integer
f x = 2 * x + 3

factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)