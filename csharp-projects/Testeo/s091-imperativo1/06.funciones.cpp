/*
    Implemente una funcion que reciba un array A y 2 numeros enteros
    m y n. Su funcion debera retornar la suma de los elementos del
    array que se encuentra en la posicion m y n. En todos los casos:
    tamano-array > max(m, n)
*/
#include <iostream>
using namespace std;
           int* values
int getSum(int values[], int m, int n){
    return values[m] + values[n];
}

int main(){
    int values[] = {5, 4, 10, 12, 14, 25};
    cout << getSum(values, 2, 3);
}