{-

��������� unfoldr, ���������� �������, ������� ���������� � �������� ���������� ������� ������ ��������, ���������� � �������� ����� ��������. ��������� ������� x � �������� ���� (a,b) ��������, ��� x >= a � x <= b.

revRange :: (Char,Char) -> [Char]
revRange = unfoldr g 
  where g = undefined

  GHCi> revRange ('a','z')
"zyxwvutsrqponmlkjihgfedcba"

-}

module Demo where

import Data.List
  
revRange :: (Char,Char) -> [Char]
revRange (a,b) = if (a <= b) then unfoldr g b else ""
  where g = (\x -> if x==(pred a) then Nothing else Just (x,pred x))