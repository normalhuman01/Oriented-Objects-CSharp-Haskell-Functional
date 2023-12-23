/*
    Implemente un programa que lea 2 valores desde el teclado
    y muestre en pantalla el promedio de los mismos.
*/

#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    cout << "Ingrese el primer numero: ";
    cin >> number1;
    cout << "Ingrese el segundo numero: ";
    cin >> number2;

    float promedio = (number1 + number2) / 2.0;
    cout << "El promedio es: " << promedio;
    return 0;
}