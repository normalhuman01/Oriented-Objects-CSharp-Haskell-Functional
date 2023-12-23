main = print (addBit4 [1, 1, 1, 1, 1, 0])

addBit4 list = addBit4' list 0 []
    where
        addBit4' [] count ans = ans ++ [div (mod count 4) 2, mod (mod count 4) 2]
        addBit4' (x:xs) count ans = addBit4' xs (count + x) (ans ++ [x])