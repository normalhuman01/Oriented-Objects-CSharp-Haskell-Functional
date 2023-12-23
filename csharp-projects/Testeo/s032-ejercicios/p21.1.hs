main = do
    let values = [1, 1, 2, 3, 3, 4, 4, 5]
    print (removeDuplicates values)

--Caso base (lista vacia)
removeDuplicates [] = []

--Si el primer elemento (head) esta repetido mas adelante, no se considera en la respuesta
removeDuplicates list = if elem (head list) (tail list)
                            then removeDuplicates(tail list)
                            else [head list] ++ removeDuplicates(tail list)

