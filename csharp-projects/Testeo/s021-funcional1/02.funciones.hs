main = do
   let result = sumValues 3 (double 2)
   print result

sumValues x y = x + y
double x = 2 * x