{-
Implemente una funcion que, dado un valor de n, genere una lista de la forma
    L = [1, -1, 1, -1, ....] (n elementos)
-}

main = do
    let list = [(-1) ^ x * (2 ^ x) | x <- [0..19]]
    print(list)
    print(generateList 10)

generateList n = [(-1) ^ x | x <- [0..(n-1)]]