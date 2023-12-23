main = do
    let values = [1, 1, 2, 3, 3, 4, 4, 5]
    print (removeDuplicates values)

--Caso base (lista vacia)
removeDuplicates [] = []

--Si el primer elemento (head) esta repetido mas adelante, no se considera en la respuesta
removeDuplicates (x:xs) = if elem x xs
                            then removeDuplicates xs
                            else x : removeDuplicates(xs)

