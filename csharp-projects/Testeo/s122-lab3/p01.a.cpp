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

void print(ProcessNode* head){
    ProcessNode* ptr = head;
    while(ptr != nullptr){
        printSummary(ptr);
        cout << " -> ";
        ptr = ptr->next;
    }
    cout << "null" << endl;
}

Process* readProcessNode(){
    Process* p = new Process();
    cout << "Registro de nuevo proceso..." << endl;
    cout << "Ingrese ID de proceso: ";
    cin >> p->id;
    cout << "Ingrese su descripcion: ";
    cin >> p->description;
    cout << "Ingrese su prioridad: ";
    cin >> p->priority;
    cout << "Ingrese el tiempo de CPU: ";
    cin >> p->cpuTime;
    return p;
}

int main(){
    Process* p1 = createProcess(10, "program1.exe", 0, 1200);
    Process* p2 = createProcess(20, "program2.exe", 0, 1300);
    ProcessNode* head = nullptr;
    addLast(head, p1);
    addLast(head, p2);
    addFirst(head, readProcessNode());
    print(head);
    return 0;
}