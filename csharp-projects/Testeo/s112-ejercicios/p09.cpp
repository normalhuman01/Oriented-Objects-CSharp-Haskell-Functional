#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

void printEndsWith(Node* head, int digit){
    Node* ptr = head;
    cout << "Elementos que terminan en " << digit << ":" << endl;
    while(ptr != nullptr){
        int element = ptr->value;
        if(element % 10 == digit){
            cout << element << endl;
        }
        ptr = ptr->next;
    }
}

int main(){
    Node* head = nullptr;
    addLast(head, 1234);
    addLast(head, 123);
    addLast(head, 44);
    printEndsWith(head, 4);
    return 0;
}