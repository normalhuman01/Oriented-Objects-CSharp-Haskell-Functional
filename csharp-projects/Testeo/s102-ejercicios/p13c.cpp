#include <iostream>
#include "util/tmp/linkedlist_full.hpp"

using namespace std;
//Asumimos que las posiciones inician en uno
void removeAtPosition(Node* &head, int position){
    Node* ptr = head;
    Node* prev = nullptr;
    int currentPosition;
    if(position == 1){
        head = head->next;
        delete ptr;
    }else{
        for(currentPosition = 1; currentPosition < position && ptr != nullptr; currentPosition++){
            prev = ptr;
            ptr = ptr->next;
        }

        if(ptr != nullptr){
            prev->next = ptr->next;
        }else{
            cout << "Posicion solicitada supera el tamano de la lista" << endl;
        }
    }

}

int main(){
    Node* head = nullptr;
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 3);
    addLast(head, 4);
    addLast(head, 5);
    print(head);
    removeAtPosition(head, 7);
    print(head);
    return 0;
}
