{-
�������� ������� readDigits, ����������� ������ � ������������ ���� �����.
������ ������� ���� �������� �������� ������� �������� ������, � ������ - �� ���������� �����.

GHCi> readDigits "365ads"
("365","ads")
GHCi> readDigits "365"
("365","")

� ������� ��� ������� ������� isDigit �� ������ Data.Char.
-}
module Demo where

import Data.Char

readDigits :: String -> (String, String)
readDigits s = span isDigit s