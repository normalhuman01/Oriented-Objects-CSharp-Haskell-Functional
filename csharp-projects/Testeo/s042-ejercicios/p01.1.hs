{-
    Implemente un programa que permita calcular el promedio
    de los valores de una lista. Utilice tail recursion
-}
main = print (getAverage [2, 2, 3, 4, 5])

getAverage list = getAverage' list 0 0
    where
        getAverage' [] sum n = sum / n        
        getAverage' (x:xs) sum n = getAverage' xs (sum+x) (n+1)