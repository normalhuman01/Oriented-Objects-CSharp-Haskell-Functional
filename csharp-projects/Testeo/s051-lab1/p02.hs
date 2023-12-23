main = print (addBit [1, 1, 1, 0])

addBit list = addBit' list 0 []
    where
        addBit' [] count ans = ans ++ [mod count 2]
        addBit' (x:xs) count ans = addBit' xs (count + x) (ans ++ [x])
