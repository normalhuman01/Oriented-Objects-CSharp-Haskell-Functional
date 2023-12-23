module Lab3 where

-----------------------------------------------------------------------------------------------------------------------------
-- Lecture 6: Higher Order Functions
-- Lab 3: List Comprehensions
------------------------------------------------------------------------------------------------------------------------------

-- ===================================
-- Ex. 0 - 2
-- ===================================

evens :: [Integer] -> [Integer]
evens xs = [ x | x <- xs, even x ]

-- ===================================
-- Ex. 3 - 4
-- ===================================

-- complete the following line with the correct type signature for this function
squares :: Integer -> [Integer]
squares n = [ x*x | x <- [1..n], n >= 0 ]

sumSquares :: Integer -> Integer
sumSquares n = sum (squares n)

-- ===================================
-- Ex. 5 - 7
-- ===================================

-- complete the following line with the correct type signature for this function
squares' :: Integer -> Integer -> [Integer]
squares' m n = [ x*x | x <- [(n+1)..(n+m)], n >= 0, m >= 0 ]

sumSquares' :: Integer -> Integer
sumSquares' x = sum . uncurry squares' $ (x, x)

-- ===================================
-- Ex. 8
-- ===================================

coords :: Integer -> Integer -> [(Integer,Integer)]
coords n m = [ (x,y) | x <- [0..n], y <- [0..m], n >= 0, m >= 0 ]
