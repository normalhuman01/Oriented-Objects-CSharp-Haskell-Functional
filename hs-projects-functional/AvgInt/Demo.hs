module Demo where

-- �������� ������� � ����������:
avg :: Int -> Int -> Int -> Double
-- ����������� ������� �������� ���������� � ��� ����������:
{-
GHCi> avg 3 4 8
5.0
-}

avg a b c = (fromIntegral $ a + b + c) / 3.0