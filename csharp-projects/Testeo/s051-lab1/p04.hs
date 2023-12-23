main = print (checkTransmission [1, 1, 1, 1])

checkTransmission list = checkTransmission' list 0
    where
        checkTransmission' [x] count = x == (mod count 2)
        checkTransmission' (x:xs) count = checkTransmission' xs (count + x)