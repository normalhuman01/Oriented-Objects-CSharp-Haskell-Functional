/*
    Implemente un programa que permita calcular la siguiente
    sumatoria:
    S = 1 + 3 + 5 + 7 + .... (n veces).
    El valor de n debe ser leido desde el teclado.
*/

#include <iostream>
using namespace std;

int main(){
    int n, resultado = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << 2 * i + 1 << " ";
        resultado += (2 * i + 1);
    }
    cout << endl << "El resultado es: " << resultado;
    return 0;
}