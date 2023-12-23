main = print (convertToBinary 12)

convertToBinary n = convertToBinary' n []
    where
        convertToBinary' 0 ans = ans
        convertToBinary' n ans = convertToBinary' (div n 2) ([mod n 2] ++ ans)
