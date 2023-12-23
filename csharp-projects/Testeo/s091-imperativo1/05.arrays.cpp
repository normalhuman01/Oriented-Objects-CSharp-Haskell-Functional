/*
    Implemente un programa que lea un valor "n" desde el teclado (n < 100).
    Su programa debe leer los "n" valores, almacenarlos en un array y
    calcular el valor máximo almacenado
*/
#include <iostream>
#define MAX_ELEM 100
using namespace std;


int main(){
    int n, result = 0;
    int values[MAX_ELEM];
    cout << "Ingrese el valor de n (valor maximo: " << MAX_ELEM << "): ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int number;
        cout << "Ingrese valor (" << i << "): ";
        cin >> number;
        values[i - 1] = number;
    }
    int max = values[0];
    for(int i = 1; i < n; i++){
        if(max < values[i]){
            max = values[i];
        }
    }
    cout << "El mayor valor almacenado es: " << max;

}