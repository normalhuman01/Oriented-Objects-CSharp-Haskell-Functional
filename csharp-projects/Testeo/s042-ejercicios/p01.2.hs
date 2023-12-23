{-
    Implemente un programa que permita calcular el maximo
    de los valores de una lista. Utilice tail recursion
-}
main = print (getMax [1, 2, 43, 4, 5])

getMax list = getMax' list (head list)
    where
        getMax' [] maxTmp = maxTmp
        getMax' (x:xs) maxTmp = getMax' xs (max maxTmp x)