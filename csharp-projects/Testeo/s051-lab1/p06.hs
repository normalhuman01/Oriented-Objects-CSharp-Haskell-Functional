main = print (checkTransmission4 [1, 1, 1, 0, 1, 1])

checkTransmission4 list = checkTransmission4' list 0
    where
        checkTransmission4' [x, y] count = [x, y] == [div (mod count 4) 2 , mod (mod count 4) 2]
        checkTransmission4' (x:xs) count = checkTransmission4' xs (count + x)