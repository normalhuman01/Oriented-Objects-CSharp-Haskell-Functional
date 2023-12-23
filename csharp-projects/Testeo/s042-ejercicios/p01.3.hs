{-
    Implemente un programa que permita invertir los valores
    de una lista. Utilice tail recursion
-}
main = print (reverseList([1, 2, 3, 4, 5]))

reverseList list = reverseList' list []
    where
        reverseList' [] ans = ans
        reverseList' (x:xs) ans = reverseList' xs (x:ans)