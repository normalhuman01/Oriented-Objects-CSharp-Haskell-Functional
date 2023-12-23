main = do
    --Calcular f(x,y) = 2x+2y
    print ((\x y -> 2*x + 2*y) 2 3)

    --Calcular g(x,y,z) = x^2 + y^2 + z^2
    let g = (\x y z -> x^2 + y^2 + z^2)
    print (g 1 1 2)
    
    --Calcular h((x,y)) = x + y
    let h = \(x, y) -> x + y
    print (h (3, 4))
    print ((\(x, y) -> x + y) (3, 4))