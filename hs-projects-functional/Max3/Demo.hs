{-

�������� ������� max3, ������� ���������� ��� ������ ����� ���������� �����
� ������� ���������� ������ ����� ��� �� �����, ���������� �� k-�� �������
���������� �������� �� ����� �� ���� ������� � �������-����������.

GHCi> max3 [7,2,9] [3,6,8] [1,8,10]
[7,8,10]

-}

module Demo where

max3 :: Ord a => [a] -> [a] -> [a] -> [a]
max3 a b c = map (\(a,b,c) -> max (max a b) c) (zipWith3 (,,) a b c)