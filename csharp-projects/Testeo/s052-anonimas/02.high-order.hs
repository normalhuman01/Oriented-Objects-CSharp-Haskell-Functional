main = do
    --Se envia la funcion f(x,y) = x + y (anonima) como parametro
    print (compute 4 5 (\x y -> x + y))
    --Para calcular x * y
    print (compute 4 5 (\x y -> x * y))
    --Para calcular x - y
    print (compute 4 5 (\x y -> x - y))
    --Para calcular x^2 + y^2 + (x+y)^2
    print (compute 5 4 (\x y -> [x^2, y^2, (x+y)^2]))

compute x y operation = operation x y