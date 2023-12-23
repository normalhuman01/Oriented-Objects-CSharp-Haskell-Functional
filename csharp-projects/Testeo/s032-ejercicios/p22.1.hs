import Data.List (sort, delete)

main = do
    let list = [1, 53, 7, 12, 15, 20]
    print (list)
    print (evaluateValue 3 list)
    print (sort (evaluateValue 50 list))

evaluateValue n list =  if elem n list
                            then delete n list
                            else list ++ [n]