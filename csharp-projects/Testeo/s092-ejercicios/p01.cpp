/*
    Implemente una funcion que reciba un array representado con un puntero a entero,
    asi como su longitud. La funcion debe mostrar en pantalla cada uno de los elementos
    del array y su direccion de memoria.
*/
#include <iostream>
using namespace std;

void printArray(int* array, int length){
    for(int i = 0; i < length; i++){
        cout << "Elemento " << i + 1 << ": " << *array << endl;
        cout << "Direccion de memoria" << array << endl;
        array++;
    }
}

int main(){
    int values[] = {6, 5, 4, 3, 2, 1, 0};
    printArray(values, sizeof(values) / sizeof(int));

}