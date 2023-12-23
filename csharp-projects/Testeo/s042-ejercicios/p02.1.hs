{-
    Implemente un programa que permita determinar si un anio
    es bisiesto o no (retorne V o F)
-}

main = print (isLeapYear 2004)

isLeapYear n
    | mod n 400 == 0 = True
    | mod n 100 == 0 = False
    | mod n 4 == 0 = True
    | otherwise = False