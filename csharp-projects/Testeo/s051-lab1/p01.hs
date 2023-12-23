main = print (convertToBinary 12)

convertToBinary 0 = []
convertToBinary n = convertToBinary (div n 2) ++ [mod n 2]