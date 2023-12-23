{-
����������� ������ ����� �����, ���������� ������ �� �������� ��������� ������, �������� ������� �������.

GHCi> oddsOnly [2,5,7,10,11,12]
[5,7,11]

��� ������� �������� ����� ������������ ������� odd � even ����������� ����������.
-}

module Demo where

oddsOnly :: Integral a => [a] -> [a]
oddsOnly [x] = if odd x then [x] else []
oddsOnly (x:xs) = if odd x then x : oddsOnly xs else oddsOnly xs
oddsOnly _ = []