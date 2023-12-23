main = do
    let a = [0, 0]
    let b = [4, 3]
    print (getSlope a b)

getSlope [x1, y1] [x2, y2] = (y2 - y1) / (x2 - x1)
