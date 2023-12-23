{-
    Implemente una funcion que reciba una lista y retorne el 
    mayor elemento

    Precondicion: Lista no vacia
-}


--Dada una lista, retorne el mayor elemento
main = do
    let numbers = [9, 12, 5, 65, 19]
    print ("Lista: " ++ show numbers)
    print ("Maximo elemento: " ++ show (maxElement (numbers)))



--Maximo(primer elemento, mayor elemento del resto de la lista)
maxElement list = if (tail list) == []
                    then head list
                    else max (head list) (maxElement (tail list))