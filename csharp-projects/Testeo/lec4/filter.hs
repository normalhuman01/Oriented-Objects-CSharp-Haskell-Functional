main = do
    --Filtrar los elementos de 3 o mas cifras de la lista 
    -- "values" que almacena numeros positivos
    let values = [10, 200, 124, 88, 1240, 18, 1]
    print (filter (\x -> x >= 100) values)
    let totalCount = length (values)
    let filteredCount = length (filter (\x -> x >= 100) values)
    let percentage = (fromIntegral filteredCount / fromIntegral totalCount) * 100
    print $ "Total valores: " ++ show totalCount
    print $ "De 3 cifras: " ++ show filteredCount
    print $ "Porcentaje 3 cifras: " ++ show percentage ++ " %"
    
