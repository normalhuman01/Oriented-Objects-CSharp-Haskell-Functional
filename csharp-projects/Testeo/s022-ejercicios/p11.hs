main = print (sumDigits 1235)
sumDigits 0 = 0
sumDigits n = mod n 10 + sumDigits(div n 10) 
