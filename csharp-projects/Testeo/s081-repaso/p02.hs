{-
Implemente una funcion que, dado un valor de n, genere una lista de la forma
    L = [1, 0, 4, 0, 16, 0, 64, 0 ....] (n elementos)
-}

main = do
    let list = [if mod x 2 == 0 then 2 ^ x else 0 | x <- [0..7]]
    print(list)
    print(generateList 12)

generateList n = [getValue x | x <- [0..(n-1)]]
    where
        getValue x 
            | mod x 2 == 0 = 2 ^ x
            | otherwise = 0

--En una sola linea:
--generateList n = [if mod x 2 == 0 then 2 ^ x else 0 | x <- [0..(n-1)]]
