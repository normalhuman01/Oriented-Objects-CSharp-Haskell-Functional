#include <iostream>
using namespace std;

void showDivisors(int n){
    cout << "Divisores de " << n << ": " << endl;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
            count++;
        }
    }
    cout << "Cantidad total de divisores: " << count << endl;
}

int main(){
    int n;
    cout << "Ingrese el valor de 'n': ";
    cin >> n;
    showDivisors(n);
    return 0;
}