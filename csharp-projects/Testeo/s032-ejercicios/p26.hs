main = do
  let sentence = "Hola mundo estoy bien el dia de hoy"
  let wordList = splitWords sentence
  print wordList

splitWords sentence = splitWordsAux sentence "" []

splitWordsAux "" currentWord wordList = wordList ++ [currentWord]

splitWordsAux (x:xs) currentWord wordList = 
    if x == ' '
        then splitWordsAux xs "" (wordList ++ [currentWord])
        else splitWordsAux xs (currentWord ++ [x]) wordList