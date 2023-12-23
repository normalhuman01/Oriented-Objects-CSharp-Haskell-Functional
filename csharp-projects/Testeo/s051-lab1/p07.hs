import Data.Char (ord)
main = do
    print (zeroPadLeft [1, 1, 1] 8)
    print (textToBinary "hola mundo")
{-
Completar con ceros a la izquierda. 
Precondicion: Cantidad de elementos lista menor que la longitud requerida
-}
zeroPadLeft list n = replicate  (n - length(list)) 0 ++ list

--Funcion para convertir el numero a binario (pregunta 1)
numberToBinary 0 = []
numberToBinary n = numberToBinary (div n 2) ++ [mod n 2]

--Funcion para agregar el bit de paridad (pregunta 2)
addBit list = addBit' list 0 []
    where
        addBit' [] count ans = ans ++ [mod count 2]
        addBit' (x:xs) count ans = addBit' xs (count + x) (ans ++ [x])


{-
Funcion que convierte el texto a lista de bits: 
usa map para convertir cada letra a binario y concatena el resultado
-}
textToBinary text = addBit $ concat (map (\x -> zeroPadLeft (numberToBinary(ord x)) 8) text)
