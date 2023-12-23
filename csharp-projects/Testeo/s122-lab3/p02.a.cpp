#include <iostream>
#include "lib/process_linkedlist.hpp"
#define MAX_PRIORITY 9
using namespace std;

void sortByPriority(ProcessNode* &head){
    ProcessNode* newHead = nullptr;
    for(int i = 0; i <= MAX_PRIORITY; i++){
        ProcessNode* ptr = head;
        while(ptr != nullptr){
            ProcessNode* next = ptr->next;
            if(ptr->data->priority == i){
                addLast(newHead, ptr->data);
            }
            ptr = ptr->next;
        }
    }
    //Tarea: como liberamos la memoria de la antigua lista?
    head = newHead;
}


int main(){
    Process* p1 = createProcess(10, "program1.exe", 3, 1200);
    Process* p2 = createProcess(20, "program2.exe", 9, 1300);
    Process* p3 = createProcess(30, "program3.exe", 0, 2000);
    ProcessNode* head = nullptr;
    addLast(head, p1);
    addLast(head, p2);
    addLast(head, p3);
    cout << "Lista original: " << endl;
    print(head);
    sortByPriority(head);
    cout << "Lista ordenada por prioridad: " << endl;
    print(head);
    return 0;
}