{-
    Implemente una funcion que calcule la suma de elementos
    de una lista
-}

main = do
    let numbers = [1, 2, 3, 4, 5]
    print ("Lista original: " ++ show numbers)
    print ("Suma de elementos: " ++ show (sumElements numbers))

--Caso base: Lista vacia - suma cero
sumElements [] = 0

--primer elemento + suma (otros elementos)
sumElements list = head list + sumElements (tail list)



