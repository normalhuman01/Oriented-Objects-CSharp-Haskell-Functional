main = print (numElements [1, 2, 3, 4])

numElements list = numElements' list 0
    where
        numElements' [] count = count
        numElements' (_:xs) count = numElements' xs (count+1)