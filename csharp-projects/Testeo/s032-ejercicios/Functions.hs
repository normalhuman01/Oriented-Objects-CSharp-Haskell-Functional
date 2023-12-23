module Functions where
removeDuplicates [] = []
removeDuplicates (x:xs) = if elem x xs
                                then removeDuplicates xs
                                else x : removeDuplicates xs