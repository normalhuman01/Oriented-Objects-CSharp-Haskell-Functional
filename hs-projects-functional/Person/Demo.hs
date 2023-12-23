{-
���������� ������� updateLastName person1 person2, ������� ������ ������� person2 �� ������� person1.
-}

module Demo where

data Person = Person { firstName :: String, lastName :: String, age :: Int }

infixl 1 &
x & f = f x

updateLastName :: Person -> Person -> Person
updateLastName person1 person2 = person2 {lastName = (person1 & lastName)}