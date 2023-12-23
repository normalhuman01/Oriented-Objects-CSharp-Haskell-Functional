main = do
    print(getLessThan [1, 2, 3, 4, 5] 4)
    
getLessThan [] _ = []
getLessThan (x:xs) value = if x < value
                            then x : getLessThan xs value
                            else getLessThan xs value