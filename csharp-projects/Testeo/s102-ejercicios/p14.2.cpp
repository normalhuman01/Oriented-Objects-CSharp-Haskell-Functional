#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;
//Implementacion de pilas (usando listas enlazadas)
bool isEmpty(Node* top){
    return top == nullptr;
}

void push(Node* &top,int value){ 
    addFirst(top, value);
}

int pop(Node* &top){
    int value = top->value;
    remove(top, top->value);
    return value;
}

int peek(Node* top){
    return top->value;
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