{-
���������� ������� delAllUpper, ��������� �� ������ ��� �����, ������� ��������� �� �������� � ������� ��������. ��������������, ��� ����� ������� ������ �� �������� �������� � ��������, ����� ����������, ����� � �.�. �����������.

GHCi> delAllUpper "Abc IS not ABC"
"Abc not"

������������ ����������� ��� ������� ��� ������� ����������, ���������� revWords �� ����������� �����.
-}

module Demo where

import Data.Char

delAllUpper :: String -> String
delAllUpper [] = []
delAllUpper xs = if (length (foo xs)) > 0 then init . foo $ xs else foo $ xs 

foo = concatMap upperWord . words
upperWord w = if all isUpper w then "" else w ++ " "