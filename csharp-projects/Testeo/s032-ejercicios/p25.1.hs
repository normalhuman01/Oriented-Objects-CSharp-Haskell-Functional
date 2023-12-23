import Functions (removeDuplicates)
main = do
    let a = [1, 2, 2, 3]
    let b = [3, 4, 5, 6]
    print (combineWithoutDuplicates a b)

combineWithoutDuplicates a b = removeDuplicates (a ++ b)
