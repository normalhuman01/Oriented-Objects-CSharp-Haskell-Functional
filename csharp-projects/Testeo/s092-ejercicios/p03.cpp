/*
    Implemente una funcion que reciba un valor entero y modifique su valor.
    El valor debera mostrarse modificado en el programa principal.
*/
#include <iostream>
using namespace std;

//Para poder modificar el valor utilizamos como variable un puntero a entero
void changeValue(int* n){
    *n = 20;
}

//Otra opcion es recibir "n" por referencia. De esa forma podremos cambiar su valor
void changeValueReference(int &n){
    n = 20;
}

int main(){
    int n = 15;
    cout << "Primer llamado" << endl;
    cout << "Valor de n (antes): " << n << endl;
    changeValue(&n);
    cout << "Valor de n (despues): " << n << endl;

    cout << "Segundo llamado" << endl;
    n = 15;
    cout << "Valor de n (antes): " << n << endl;
    //Observe que ya no se utiliza el operador de direccion para hacer el llamado
    changeValueReference(n);
    cout << "Valor de n (despues): " << n << endl;

    return 0;
}