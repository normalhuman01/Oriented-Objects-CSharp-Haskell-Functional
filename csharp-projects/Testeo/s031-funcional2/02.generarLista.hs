{-
    Implemente una funcion que lea un valor 'n' desde el teclado
    y genere una lista con los valores [1, 2, 3, 4, ..., n]
-}

main = do
    --Leer un valor desde el teclado
    putStrLn "Ingrese el valor de n: "
    n <- readLn :: IO Int
    print ("Lista generada: " ++ show (getList n))
    print ("Lista generada - segunda funcion: " ++ show (getList n))

--Caso base: Lista vacia
getList 0 = []

--A la lista formada por [1 .. n-1] le agregamos la lista [n]
getList n = getList (n - 1) ++ [n]


--Alternativa: en una sola linea
getListEasy n = [1..n]