#include <iostream>
#include "lib/process_linkedlist.hpp"
using namespace std;

void removeAllOccurrences(ProcessNode* &head, int processId){
    ProcessNode* ptr = head;
    ProcessNode* prev = nullptr;
    while(ptr != nullptr){
        ProcessNode* next = ptr->next;
        if(ptr->data->id == processId){
            if(prev == nullptr){
                head = head->next;
            }else{
                prev->next = ptr->next;
            }  
        }else{
            prev = ptr;
        }
        ptr = next;
    }
    //Tarea: Eliminar la memoria asignada a los nodos
}


int main(){
    Process* p1 = createProcess(10, "program1.exe", 1, 1200);
    Process* p2 = createProcess(20, "program2.exe", 3, 1300);
    Process* p3 = createProcess(30, "program3.exe", 5, 2000);
    Process* p4 = createProcess(10, "program1.exe", 9, 900);
    Process* p5 = createProcess(50, "program5.exe", 0, 800);
    ProcessNode* head = nullptr;
    addLast(head, p1);
    addLast(head, p2);
    addLast(head, p3);
    addLast(head, p4);
    addLast(head, p5);
    int processId = 10;
    cout << "Lista original: " << endl;
    print(head);
    removeAllOccurrences(head, 10);
    cout << "Luego de eliminar ocurrencias del proceso " << processId << ": " << endl;
    print(head);
    return 0;
}