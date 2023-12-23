#include <iostream>
#include "lib/process_linkedlist.hpp"
using namespace std;

void addSortedByPriority(ProcessNode* &head, Process* process){
    ProcessNode* ptr = head;
    ProcessNode* prev = nullptr;
    ProcessNode* newNode = createProcessNode(process);
    bool found = false;
    while(ptr != nullptr && !found){
        if(ptr->data->priority >= process->priority){
            if(prev == nullptr){
                addFirst(head, process);
            }else{
                prev->next = newNode;
                newNode->next = ptr;
            }
            found = true;
        }
        prev = ptr;
        ptr = ptr->next;
    }
    if(!found){
        addLast(head, process);
    }
}

int main(){
    Process* p1 = createProcess(10, "program1.exe", 1, 1200);
    Process* p2 = createProcess(20, "program2.exe", 3, 1300);
    Process* p3 = createProcess(30, "program3.exe", 5, 2000);
    Process* p4 = createProcess(40, "program4.exe", 9, 1200);
    Process* p5 = createProcess(50, "program5.exe", 0, 800);
    ProcessNode* head = nullptr;
    addLast(head, p1);
    addLast(head, p2);
    addLast(head, p3);
    cout << "Lista original: ";
    print(head);
    addSortedByPriority(head, p4);
    addSortedByPriority(head, p5);
    cout << "Luego de agregar nodos: ";
    print(head);
    return 0;
}