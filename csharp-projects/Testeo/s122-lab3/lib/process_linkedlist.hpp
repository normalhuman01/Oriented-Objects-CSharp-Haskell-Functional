#include <iostream>
using namespace std;

struct Process{
    int id;
    string description;
    int priority;
    int cpuTime;
};

struct ProcessNode{
    Process* data;
    ProcessNode* next;
};

Process* createProcess(int id, string description, int priority, int cpuTime){
    Process* ans = new Process();
    ans->id = id;
    ans->description = description;
    ans->priority = priority;
    ans->cpuTime = cpuTime;
    return ans;
}

ProcessNode* createProcessNode(Process* p){
    ProcessNode* ans = new ProcessNode();
    ans->data = p;
    ans->next = nullptr;
    return ans;
}

void addFirst(ProcessNode* &head, Process* data){
    ProcessNode* newNode = createProcessNode(data);
    if(head != nullptr){
        newNode->next = head;        
    }
    head = newNode;
}
void addLast(ProcessNode* &head, Process* data){
    ProcessNode* newNode = createProcessNode(data);
    ProcessNode* ptr = head;

    if(head != nullptr){
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }else{
        addFirst(head, data);
    } 
}

void printSummary(ProcessNode* process){
    cout << process->data->id << "|" << process->data->priority << "|" << process->data->description;
}

void print(Process* process){
    cout << "***************************" << endl;
    cout << "ID de proceso: " << process->id << endl;
    cout << "Descripcion: " << process->description << endl;
    cout << "Prioridad: " << process->priority << endl;
    cout << "Tiempo de CPU: " << process->cpuTime << endl;
    cout << "***************************" << endl;
}

void print(ProcessNode* head){
    ProcessNode* ptr = head;
    while(ptr != nullptr){
        printSummary(ptr);
        cout << " -> ";
        ptr = ptr->next;
    }
    cout << "null" << endl;
}