{-
    Dado un valor de "n", obtener una lista de los "n"
    primeros numeros impares: [1, 3, 5, ...]

    Ignore los impares que terminan en 1.
-}

main = do
    print (getOdds 20)

getOdds n = [2*x - 1 | x <- [1..n], mod (2*x - 1) 10 /= 1]