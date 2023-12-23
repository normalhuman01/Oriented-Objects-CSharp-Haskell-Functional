module Hw5 where

------------------------------------------------------------------------------------------------------------------------------
-- Lecture 5: Recursive Functions
------------------------------------------------------------------------------------------------------------------------------

import Data.Char

-- ===================================
-- Ex. 7: Caesar Cipher
-- ===================================

let2int :: Bool -> Char -> Int
let2int l c = ord c - ord a
  where a | l         = 'a'
          | otherwise = 'A'

int2let :: Bool -> Int -> Char
int2let l n = chr (ord a + n)
  where a | l         = 'a'
          | otherwise = 'A'

shift :: Int -> Char -> Char
shift n c
  | isLower c || isUpper c = int2let (isLower c) ((let2int (isLower c) c + n) `mod` 26)
  | otherwise = c

encode :: Int -> String -> String
encode n xs = [shift n x | x<-xs]
