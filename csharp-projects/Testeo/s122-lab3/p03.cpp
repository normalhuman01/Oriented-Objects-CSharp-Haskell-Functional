#include <iostream>
using namespace std;

bool validateElementCount(int n){
    return (n > 0 && n < 100) && n % 10 != 0 && (n/10 + n%10) % 2 == 0;
}

int readElementCount(){
    bool correctInput = false;
    int n;
    while(!correctInput){
        cout << "Ingrese el valor de n: ";
        cin >> n;
        correctInput = validateElementCount(n);
    }
    return n;
}

int* readArrayElements(int n){
    int* array = new int[n];
    int* ptr = array;
    for(int i = 0; i < n; i++){
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> *ptr;
        ptr++;
    }
    return array;
}

void showValueAndAddress(int* array, int position){
    int* ptr = array;
    ptr += (position - 1);
    cout << "Valor del elemento en la posicion " << position << ": " << *ptr << endl;
    cout << "Direccion de memoria: " << ptr;
}

int main(){
    int n = readElementCount();
    int* array = readArrayElements(n);
    int k;
    cout << "Ingrese la posicion del elemento a buscar: ";
    cin >> k;
    showValueAndAddress(array, k);
}