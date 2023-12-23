sumar :: Int -> Int -> Int -- explicita 
sumar n1 n2 = n1 + n2

esMayorEdad :: Int -> Bool
esMayorEdad edad = 
    if edad > 17
        then True
        else False


// se crean nuevas versiones de la variables, nunca se reusa la misma
// la ultima siempre oculta a las otras, lo que no significa que no existan 

// beneficios
// Ausencia de efectos secundarios no deseados, un efecto secundario es una consecuencia en el progra
