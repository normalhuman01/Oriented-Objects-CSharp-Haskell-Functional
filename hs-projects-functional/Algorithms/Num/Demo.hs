module Demo where

class Num a where
 (+), (-), (*) :: a -> a -> a
 negate :: a -> a -- ������� ���������� �����
 abs :: a -> a -- ������ �����
 signum :: a -> a -- ���� �����
 fromInteger :: Integer -> a -- ������� �� �������� ���� Integer � ������ ��������� ����
 -- ���������� �� ���������:
 x - y = x + negate y
 negate x = 0 - x

{-
LAW abs x * signum x == x
-}