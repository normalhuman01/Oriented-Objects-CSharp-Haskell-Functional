/*
    Implemente un programa que lea un valor "n" desde el teclado y 
    cree dinamicamente un array de "n" elementos, el cual debera
    llenarse con numeros consecutivos.

    Muestre los elementos impares en pantalla y luego libere la memoria
    asignada.
*/
#include <iostream>
using namespace std;

void printOdds(int* array, int length){
    cout << "Valores impares: " << endl;
    for(int i = 0; i < length; i++){
        if(*array % 2 != 0){
            cout << *array << endl;
        }
        array++;
    }
}

void generateConsecutives(int* array, int length){
    for(int i = 1; i <= length; i++){
        *array = i;
        array++;
    }
}

int main(){
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int* values = new int[n];
    generateConsecutives(values, n);
    printOdds(values, n);
    delete[] values;
    return 0;
}