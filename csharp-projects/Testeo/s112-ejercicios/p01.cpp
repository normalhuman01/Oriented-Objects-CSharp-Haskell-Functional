#include <iostream>
using namespace std;

int sumEvenDigits(int n){
    int ans = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            ans += digit;
        }
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Ingrese numero: ";
    cin >> n;
    cout << "La suma de cifras pares es: " << sumEvenDigits(n) << endl;
    return 0;
}