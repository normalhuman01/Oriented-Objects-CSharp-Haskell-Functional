module Demo where

{-
���������� ������� parsePerson, ������� ��������� ������ ���� firstName = John\nlastName = Connor\nage = 30 � ���������� ���� ��������� ���� Person, ���� ������ ���� Error.

������, ������� �������� �� ����, ������ ��������� �� ������� '\n' �� ������ �����, ������ �� ������� ����� ��� X = Y. ���� ������� ������ �� ����� ��������� ���, �� ������� ������ ���������� ParsingError.
���� ������� �� ��� ����, �� ������������ IncompleteDataError.
���� � ���� age ������� �� �����, �� ������������ IncorrectDataError str, ��� str � ���������� ���� age.
���� � ������ ������������ ������ ����, �� ��� ������������.
-}

data Error = ParsingError | IncompleteDataError | IncorrectDataError String

data Person = Person { firstName :: String, lastName :: String, age :: Int }

parsePerson :: String -> Either Error Person
parsePerson = undefined