main = do
    let list = [0, 1, 1, 2, 3, 5, 8]
    print (addToSeries 3 list)

fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = fibonacci (n - 1) + fibonacci (n - 2)

addToSeries 0 list = list
addToSeries n list = addToSeries (n-1) (list ++ [fibonacci (length (list))])