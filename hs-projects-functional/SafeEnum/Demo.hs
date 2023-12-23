module Demo where

-- ���������� ����� �����

class (Eq a, Enum a, Bounded a) => SafeEnum a where
  ssucc :: a -> a
  ssucc x | x == maxBound = minBound
          | otherwise = succ x
  
  spred :: a -> a
  spred x | x == minBound = maxBound
          | otherwise = pred x
{- ��� ������� �������� ����� ���� ��� succ � pred ������������ ������ Enum, ������ �������� ����������, �� ���� �� ��������������� � ������� �� ���������� � ���������� ��������� ����-������������ ��������������, � ������������ ����������� ���������. ��� ����� ������ ���� ����������� ���� ������� ����� ����������� ����������, ��� ����� ����� ���� �������� ���������� �� ��������� ��� �������, ����������� ��������� ��� �������������� ��� ������������� ������ ����� �� �� �� ���� ���. ��������, ��� ���� Bool ������ ���� ���������� �������� ������ -}

{- ����� ��� �� ������:
  ssucc maxBound = minBound
  ssucc x = succ x
������ ��� maxBound - ��� �� �������, � ������� �������������, ������� ��������������� ��� ��� ����������� ��������� �������. �� ��� ��� ��� ��������� � ������ ������� (���������) �������� ���� � ����, ��� ��� ���� ������� ���������� � ��������� ������ �� ����� ���������. � �������� �������� (������������) ����� �������������� ������ ����� ������������� ������. -}




instance SafeEnum Bool
{- � �������� ����������� ��������
GHCi> ssucc False
True
GHCi> ssucc True
False
-}

instance SafeEnum Char
instance SafeEnum Int
instance SafeEnum ()
