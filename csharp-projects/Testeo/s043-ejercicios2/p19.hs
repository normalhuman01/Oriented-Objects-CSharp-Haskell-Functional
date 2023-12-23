main = printPyramid 7

printStars 0 = putStrLn ""
printStars n = do
    putStr "*"
    printStars (n-1)

printPyramid n = printPyramid' 1 n
    where
        printPyramid' n height
            | n == height = printStars height
            | otherwise = do
                printStars (n)
                printPyramid' (n+1) height
