main = do
    printStars 20
    putStrLn "Piramide: "
    printPyramid 7

printStars 0 = putStrLn ""
printStars n = do
    putStr "*"
    printStars (n-1)

printPyramid 0 = return ()
printPyramid n = do
    printStars (n)
    printPyramid (n-1)
