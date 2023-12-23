#include <iostream>

using namespace std;

int main(){
    int z = 12;
    int w = 17;
    int* pointer1;
    pointer1 = &w;
    cout << &z << endl;
    cout << pointer1 << endl;
    cout << *pointer1 << endl;
    return 0;
}