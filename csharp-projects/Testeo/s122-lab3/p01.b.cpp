#include <iostream>
#include "lib/process_linkedlist.hpp"
using namespace std;

void printProcesses(ProcessNode* head, int priority){
    ProcessNode* ptr = head;
    cout << "Procesos con prioridad " << priority << ": " << endl;
    while(ptr != nullptr ){
        if(ptr->data->priority == priority){
            print(ptr->data);
            cout << endl;
        }
        ptr = ptr->next;
    }
}

int main(){
    Process* p1 = createProcess(10, "program1.exe", 0, 1200);
    Process* p2 = createProcess(20, "program2.exe", 0, 1300);
    Process* p3 = createProcess(30, "program3.exe", 2, 2000);
    ProcessNode* head = nullptr;
    addLast(head, p1);
    addLast(head, p2);
    addLast(head, p3);
    print(head);
    printProcesses(head, 2);
    return 0;
}