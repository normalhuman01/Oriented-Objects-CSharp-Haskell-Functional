{-
    Implemente una funcion que permita calcular el producto escalar 
    de 2 vectores (listas)

    Precondicion: Las listas tienen en mismo tamano
-}


main = do
    let vector1 = [1, 2, 3, 4, 5]
    let vector2 = [5, 4, 3, 2, 1]

    print ("Vector 1: " ++ show vector1)
    print ("Vector 2: " ++ show vector2)
    print ("Producto escalar: " ++ show (dotProduct vector1 vector2))

dotProduct [] [] = 0
dotProduct list1 list2 = 
    head list1 * head list2 + dotProduct (tail list1) (tail list2)