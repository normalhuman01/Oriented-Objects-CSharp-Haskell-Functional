{-
����� ���� ������ ������������� ���������� ����� coins, ��������������� �� �����������. ���������������� ���������� ����������� �������, �������� ������� change, ������� ��������� ���������� �� ������������� ����� ����� �� ������ ���������� �� ������ coins ����� ���������� ���������. ��������, ���� coins = [2, 3, 7]:

 
GHCi> change 7
[[2,2,3],[2,3,2],[3,2,2],[7]]

����������. ������� ����� � ������ ��������� ����� ��������, �� ���� ������ [2,2,3] � [2,3,2] � �����������.
������ coins ���������� �� ����.
-}

module Demo where

coins = [2, 3, 7]

change :: (Ord a, Num a) => a -> [[a]]
change = undefined