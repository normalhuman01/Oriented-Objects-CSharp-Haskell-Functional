module Demo where

import Data.Function

{- ��������������� ������� -}
avg :: (Double,Double) -> Double
avg p = (fst p + snd p) / 2
