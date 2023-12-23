/*
    Implemente un programa que lea un numero entero
    desde el teclado y muestre el doble de dicho 
    numero en pantalla. Muestre los mensajes
    adecuadamente
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Ingrese un numero: ";
    cin >> number;
    cout << "El doble del numero ingresado es: " << number * 2 << endl;
    cout << "Gracias por utilizar el programa... " << endl;
    return 0;
}