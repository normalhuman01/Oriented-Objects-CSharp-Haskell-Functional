main = do
  let listaAlumnos = [("Juan", 11, 14), ("Pedro", 10, 10), ("Leo", 18, 19)]
  print $ getAverageGrades (listaAlumnos)

getAverageGrades list = map (\(name, grade1, grade2) -> (name, (grade1 + grade2) / 2)) list