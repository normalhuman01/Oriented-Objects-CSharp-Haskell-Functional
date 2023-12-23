{-
    Implemente un programa que reciba un conjunto de puntos,
    cada uno de ellos representado por una lista de 2 elementos
    y retorne una nueva lista con solamente los valores de las 
    abscisas. Utilice comprension de listas
-}
main = do
    let points = [[1,2], [3, 4], [5, 6]]
    print (getXCoords points)

getXCoords points = [ x | [x, _] <- points]