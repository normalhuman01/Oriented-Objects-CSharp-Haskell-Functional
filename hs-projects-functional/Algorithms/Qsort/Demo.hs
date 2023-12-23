{-
�������� ���������� ������� qsort. ������� qsort ������� ��������� �� ���� ������ ��������� � ����������� ��� � ������� ����������� � ������� ���������� �����: ��� ������-�� �������� x ������������ ������ (������ �������� ������) ������ ������ �� �������� ������ � �� ������ x, � ����� ����������� ���������� �� ����� ������.

GHCi> qsort [1,3,2,5]
[1,2,3,5]
����������� ������������ ������ �������, ��������� �� ���������� Prelude.
-}

module Demo where

qsort :: Ord a => [a] -> [a]
qsort []     = []
qsort (p:xs) = (qsort lesser) ++ [p] ++ (qsort greater)
    where
        lesser  = filter (< p) xs
        greater = filter (>= p) xs

-- https://wiki.haskell.org/Introduction#Quicksort_in_Haskell