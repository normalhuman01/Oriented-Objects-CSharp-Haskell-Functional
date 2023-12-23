/*
    Implemente un programa que reciba un array representado por un puntero a entero
    y un valor "n". Su programa debera "eliminar" los "n" primeros elementos
    del array. Es decir, el puntero asociado al array deberá apuntar al elemento n+1
*/

#include <iostream>
using namespace std;

void deleteValues(int* &array, int n){
    for(int i = 0; i < n; i++){
        array++;
    }
}

int main(){
    int values1[] = {1, 2, 3, 4, 5};   
    int* values = values1;
    cout << "Antes: " << *values << endl;
    deleteValues(values, 2);
    cout << "Despues: " << *values << endl;
    //Observe que esta operacion no ha liberado la memoria (no se ha usado delete)
    values--;
    cout << "Valor previo: " << *values << endl;
    return 0;
}