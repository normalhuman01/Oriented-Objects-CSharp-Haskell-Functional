%Arbol genealogico
padre(cesar, mario).
padre(mario, carlos).
padre(cesar, mariana).
padre(alberto, anibal).
padre(alberto, jose).
padre(alberto, juana).
padre(anibal, vanessa).
padre(jose, catalina).
padre(jose, fernando).

%Se introduce la relacion "madre"
madre(johana, mario).
madre(virginia, anibal).
madre(virginia, jose).
madre(juana, martin).
madre(mariana, francisco).

%Con estas nuevas relaciones puede determinarse el sexo de cada persona.
%Para quienes no tienen hijos, expresamos el sexo directamente
mujer(vanessa).
mujer(catalina).
%Si alguien es madre, podemos afirmar que es mujer
mujer(X) :- madre(X, _).

hombre(fernando).
hombre(francisco).
%De manera analoga para el padre
hombre(X) :- padre(X, _).

%Abuelos paternos y abuelos maternos
%Mi abuelo es el padre de mi padre o el padre de mi madre.
abuelo(X, Y) :- (padre(X, Z), padre(Z, Y)); (padre(X, Z), madre(Z, Y)).
%Similarmente con la abuela
abuela(X, Y) :- (madre(X, Z), padre(Z, Y)); (madre(X, Z), madre(Z, Y)).

%Hacemos cambios para distinguir entre hermanos y hermanas
%Observe lo que sucede si son hermanos de padre o de madre solamente
hermano(X, Y) :- ((padre(Z, X), padre(Z, Y)); (madre(Z, X), madre(Z, Y))), hombre(X), X \= Y.
hermana(X, Y) :- ((padre(Z, X), padre(Z, Y)); (madre(Z, X), madre(Z, Y))), mujer(X), X \= Y.

%Implementamos las relaciones para tios y tias
%Seran tios si son hermanos del padre o de la madre (no incluye tios politicos)
tio(X, Y) :- ((hermano(X, Z), padre(Z, Y)); (hermano(X, Z), madre(Z, Y))).
%Similarmente con la tia
tia(X, Y) :- ((hermana(X, Z), padre(Z, Y)); (hermana(X, Z), madre(Z, Y))).