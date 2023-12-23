import Data.List (sort)

main = do
    let list = [1, 3, 7, 12, 15, 20]
    print (list)   
    print (deleteValue 3 list)
    print (sort (evaluateValue 22 list))


evaluateValue n list =  if elem n list 
                            then deleteValue n list
                            else list ++ [n]

deleteValue _ [] = []

deleteValue n (x:xs) =  if x == n
                            then xs
                            else x : deleteValue n xs