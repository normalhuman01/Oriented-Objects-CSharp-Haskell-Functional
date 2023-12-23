#include <iostream>
using namespace std;


class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            this->next = nullptr;
        }
};


class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            this->head = nullptr;
        }

        //Agregar al inicio
        void addFirst(int value){
            Node* newNode = new Node(value);
            if(this->head != nullptr){
                newNode->next = head;        
            }
            //Se modificara el nodo cabecera (sera el nuevo nodo)
            this->head = newNode;
        }

        //Agregar al final
        void addLast(int value){
            Node* newNode = new Node(value);
            Node* ptr = this->head;

            if(this->head != nullptr){
                while(ptr->next != nullptr){
                    ptr = ptr->next;
                }
                ptr->next = newNode;
            }else{
                this->addFirst(value);
            } 
        }

        //Agregar antes de un eleemnto de referencia
        void addBefore(int reference, int value){
            Node* ptr = this->head;
            Node* prev = nullptr;
            //Primero buscamos el elemento de referencia
            while(ptr != nullptr && ptr->value != reference){
                prev = ptr;
                ptr = ptr->next;
            }
            if(ptr != nullptr){
                //Si la referencia coincide con la cabecera, agregamos al inicio
                if(ptr == this->head){
                    this->addFirst(value);    
                }else{
                    //En caso contrario creamos el nodo y actualizamos referencias
                    Node* newNode = new Node(value);
                    prev->next = newNode;
                    newNode->next = ptr;
                }
            }
        }

        //Elimina el nodo que tenga el valor dado como dato
        void remove(int element){
            /*
                Necesitamos un puntero que apunte al nodo de referencia y uno
                a su predecesor
            */
            Node* ptr = head;
            Node* prev = nullptr;
            //Primero buscamos el elemento a eliminar (podria ser una funcion?)
            while(ptr != nullptr && ptr->value != element){
                prev = ptr;
                ptr = ptr->next;
            }
            if(ptr != nullptr){
                //Si la referencia coincide con la cabecera, la cabecera sera modificada
                if(ptr == this->head){
                    head = this->head->next;    
                }else{
                    //En caso contrario actualizamos referencias
                    prev->next = ptr->next;
                }
                //Liberamos memoria
                delete ptr;
            }
        }


        void print(){
            Node* ptr = this->head;
            while(ptr != nullptr){
                cout << ptr->value << " -> ";
                ptr = ptr->next;
            }
            cout << "null" << endl;
        }
};

int main(){
    LinkedList* list1 = new LinkedList();
    list1->addFirst(50);
    list1->addFirst(80);
    list1->addFirst(120);
    list1->addLast(60);
    list1->addLast(350);
    list1->print();
    list1->remove(120);
    list1->remove(50);
    list1->addBefore(350, 600);
    list1->print();    
    return 0;
}