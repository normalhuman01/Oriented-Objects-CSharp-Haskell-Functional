main = do
   let result = sumSeries 8
   print result

sumSeries 1 = 1
sumSeries n = n + sumSeries(n - 1)