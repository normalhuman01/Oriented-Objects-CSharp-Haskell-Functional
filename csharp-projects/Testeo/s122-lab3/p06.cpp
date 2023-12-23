#include <iostream>
#include "lib/process_linkedlist.hpp"
using namespace std;

struct Queue{
    ProcessNode* front;
    ProcessNode* rear;
};

Queue* createQueue(){
    Queue* queue = new Queue();
    queue->front = nullptr;
    queue->rear = nullptr;
    return queue;
}

bool isEmpty(Queue* queue){
    return queue->front == nullptr;
}

void enqueue(Queue* queue, Process* data){
    ProcessNode* newNode = createProcessNode(data);
    if(!isEmpty(queue)){
        queue->rear->next = newNode;
    }else{
        queue->front = newNode;
    }
    queue->rear = newNode;
}

Process* dequeue(Queue* queue){
    Process* ans = nullptr;
    if(!isEmpty(queue)){
        ans = queue->front->data;
        queue->front = queue->front->next;
    }    
    return ans;
    //Tarea: como eliminamos la memoria asociada al nodo?
}

void print(Queue* queue){
    print(queue->front);
}

int main(){
    Process* p1 = createProcess(10, "program1.exe", 1, 1200);
    Process* p2 = createProcess(20, "program2.exe", 3, 1300);
    Process* p3 = createProcess(30, "program3.exe", 5, 2000);
    Process* p4 = createProcess(10, "program4.exe", 9, 900);
    Process* p5 = createProcess(50, "program5.exe", 0, 800);
    Queue* queue = createQueue();
    enqueue(queue, p1);
    enqueue(queue, p2);
    enqueue(queue, p3);
    enqueue(queue, p4);
    enqueue(queue, p5);
    cout << "Antes de desencolar: " << endl;
    print(queue);
    Process* dequeuedProcess = dequeue(queue);  
    cout << "Despues de desencolar: " << endl;
    print(queue);
    cout << "Proceso desencolado: " << endl;
    print(dequeuedProcess);
    return 0;
}
