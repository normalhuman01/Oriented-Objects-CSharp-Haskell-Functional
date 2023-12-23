main = do
    let a = [0, 0]
    let b = [4, 3]
    print (getSlope a b)

getSlope a b = (b!!1 - a!!1) / (b!!0 - a!!0)
