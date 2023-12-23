module Demo where

class Enum a where
 -- ������� �������� �� ����������������� ����
 succ, pred :: a -> a
 
 -- ���� ������������� ����� ���� ����������� ��������� �����
 toEnum :: Int -> a
 fromEnum :: a -> Int




-- ����� ����� Bounded ������ ��� ���� ����� ��������� ������� � ������ �������.
class Bounded a where
 minBound, maxBound :: a
