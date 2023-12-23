#include <iostream>
using namespace std;
//Implementacion de pilas (desde cero)
struct Node{
    int value;
    Node* next;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    return newNode;
}

bool isEmpty(Node* top){
    return top == nullptr;
}
//Agregar un nodo (en la cima)
void push(Node* &top,int value){ 
    Node* newNode = createNode(value);
    if(top != nullptr){
        newNode->next = top;
    }
    top = newNode;
}

int pop(Node* &top){
    Node* ptr = top;
    int value = ptr->value;
    if(!isEmpty(top)){
        top = top->next;
        delete ptr;
    }
    return value;
}

int peek(Node* top){
    return top->value;
}

void print(Node* top){
    Node* ptr = top;
    cout << "top -> ";
    while(ptr != nullptr){
        cout << ptr->value << " -> ";
        ptr = ptr->next;
    }
    cout << "bottom" << endl;
}

//Que sucede con la memoria ocupada por la pila original?
void reverse(Node* &stack){
    Node* reversedStack = nullptr;
    while(!isEmpty(stack)){
        push(reversedStack, pop(stack));
    }
    stack = reversedStack;
}

int main(){
    Node* stack = nullptr;
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    print(stack);
    pop(stack);
    print(stack);
    reverse(stack);
    print(stack);

    return 0;
}