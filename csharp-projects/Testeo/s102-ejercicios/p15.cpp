#include <iostream>
using namespace std;

struct DoubleNode{
    int value;
    DoubleNode* prev;
    DoubleNode* next;
};

struct DoublyLinkedList{
    DoubleNode* head;
    DoubleNode* tail;
};


DoubleNode* createNode(int value){
    DoubleNode* newNode = new DoubleNode();
    newNode->value = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

void addFirst(DoublyLinkedList* &list, int value){
    DoubleNode* newNode = createNode(value);
    if(list->head != nullptr){
        newNode->next = list->head;
        list->head->prev = newNode;
    }else{
        list->tail = newNode;    
    }
    list->head = newNode;
}

void print(DoublyLinkedList* list){
    DoubleNode* ptr = list->head;
    while(ptr != nullptr){
        cout << ptr->value << " -> ";
        ptr = ptr->next;
    }
    cout << "null" << endl;
}

void printReverse(DoublyLinkedList* list){
    DoubleNode* ptr = list->tail;
    while(ptr != nullptr){
        cout << ptr->value << " -> ";
        ptr = ptr->prev;
    }
    cout << "null" << endl;
}

int main(){
    DoublyLinkedList* list = new DoublyLinkedList();
    addFirst(list, 10);
    print(list);
    addFirst(list, 20);
    print(list);
    addFirst(list, 30);
    print(list);
    printReverse(list);
    return 0;
}