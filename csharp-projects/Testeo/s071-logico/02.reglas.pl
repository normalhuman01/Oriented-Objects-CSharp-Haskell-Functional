%hechos
es_hombre(aristoteles).
es_hombre(ricardo).
es_hombre(pedro).

es_perro(firulais).
es_perro(bronco).
es_perro(blacky).

es_gato(michi).
es_gato(garfield).
es_gato(kitty).

%reglas
es_mortal(X) :- es_hombre(X).
es_bonito(X) :- es_gato(X).
es_bonito(X) :- es_perro(X).