main = print(firstDigit 85669)
firstDigit x = if x < 10 
                then x 
                else firstDigit (div x 10)