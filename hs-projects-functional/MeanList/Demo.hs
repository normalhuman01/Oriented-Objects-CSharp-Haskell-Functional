{-
���������� ������� meanList, ������� ������� ������� �������� ��������� ������, ��������� ����������� ����� ������� �������.

GHCi> meanList [1,2,3,4]
2.5
������������� ��������� ����������, �� ���� �������������� ���������� ������� meanList ����� ���

meanList = someFun . foldr someFoldingFun someIni
-}

module Demo where

meanList :: [Double] -> Double
meanList xs = (foldr (+) 0 xs) / (fromIntegral $ length xs)