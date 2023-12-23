/*
    Implemente un programa que reciba un array A representado como un puntero a entero.
    Un indice i y un valor n. Su programa debera asignar el valor n al elemento de indice
    i en el array.
    Utilice solamente operaciones con punteros.
    Asuma que siempre i < n.
*/
#include <iostream>
using namespace std;

void changeValue(int* array, int position, int value){
    for(int i = 0; i < position; i++){
        array++;
    }
    *array = value;
}

int main(){
    int index = 3;
    int values[] = {1, 2, 3, 4, 5};
    cout << "Antes: " << values[3] << endl;    
    changeValue(values, 3, 500);
    cout << "Despues: " << values[3] << endl;
    return 0;
}