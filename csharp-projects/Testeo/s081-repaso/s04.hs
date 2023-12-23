{-
    Implemente una funcion que reciba una lista de palabras (que representa
    un texto), un listado de palabras prohibidas.
    Debe retornar una nueva lista que reemplace las palabras prohibidas por
    "***********"
-}

main = do
    let words = ["odio", "al", "mundo", "y", "busco", "venganza"]
    let forbiddenWords = ["odio", "venganza"]
    print (changeWords words forbiddenWords)

changeWords words forbiddenWords = map (\word -> if not (elem word forbiddenWords) then word else "***********") words