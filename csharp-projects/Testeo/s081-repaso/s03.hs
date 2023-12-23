{-
    Implemente una funcion que reciba una lista de palabras (que representa
    un texto), un listado de stop words (palabras que deben obviarse)
    y retorne una nueva lista que excluya las "stop words" del texto
    original
-}
main = do
    let words = ["el", "perro", "muerde", "a", "juan"]
    let stopWords = ["el", "a", "en"]
    print (filterWords words stopWords)

filterWords words stopWords = filter (\word -> not (elem word stopWords)) words
