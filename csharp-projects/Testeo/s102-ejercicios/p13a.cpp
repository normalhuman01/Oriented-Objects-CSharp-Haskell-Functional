#include <iostream>
#include "util/tmp/linkedlist_full.hpp"

using namespace std;
int countNodes(Node* head){
    Node* ptr = head;
    int count = 0;
    while(ptr != nullptr){
        count++;
        ptr = ptr->next;
    }
    return count;
}


int main(){
    Node* head = nullptr;
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 3);
    addLast(head, 4);
    addLast(head, 5);
    print(head);
    cout << "Cantidad de nodos: " << countNodes(head) << endl;
    return 0;
}
