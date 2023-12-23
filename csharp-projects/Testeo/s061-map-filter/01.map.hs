{- 
    Dada una lista de cadenas que representa numeros enteros, retorne
    una nueva lista con dichos valores enteros
-}
main = do
    print (map (\str -> read str::Integer) ["12", "350", "7"])