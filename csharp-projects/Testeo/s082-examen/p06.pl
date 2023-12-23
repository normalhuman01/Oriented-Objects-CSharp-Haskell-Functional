%hechos
monomio(fx).
monomio(gx).

binomio(hx).
binomio(kx).

trinomio(yx).
trinomio(zx).

%reglas
polinomio(X) :- monomio(X); binomio(X); trinomio(X).

%ejemplo consulta: polinomio(fx) -> verdadero