#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
#include <cmath>
using namespace std;

Node* power(Node* head, int exponent){
    Node* ptr = head;
    Node* ans = nullptr; //lista de respuesta
    while(ptr != nullptr){
        int element = ptr->value;
        addLast(ans, pow(element, exponent));
        ptr = ptr->next;
    }
    return ans;
}

int main(){
    Node* head = nullptr;
    addLast(head, 10);
    addLast(head, 20);
    addLast(head, 30);
    print(head);
    print(power(head, 2));
    return 0;
}