main = do
    print (factorial 7)
    print (factorialTail 7)
    print (factorialTail2 7)

--Primera forma: non-tail
factorial 0 = 1
factorial n = n * factorial (n-1)

--Segunda forma: Funcion auxiliar
factorialTail n = factorialTailAux n 1

factorialTailAux 0 prod = prod
factorialTailAux n prod = factorialTailAux (n-1) (n*prod)

--Tercera forma: Uso de where
factorialTail2 n = factorialTail2' n 1
    where
        factorialTail2' 0 prod = prod
        factorialTail2' n prod = factorialTail2' (n-1) (n*prod)
