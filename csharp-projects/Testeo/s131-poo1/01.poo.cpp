#include <iostream>
using namespace std;

//Definicion de clase
class Person{
    private:
        string nombre;
        string apellido;
        int edad;
    public:
        Person(string nombre, string apellido, int edad){
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = edad;
        }
        void print(){
            cout << "Nombre: " << this->nombre << " " << this->apellido << endl;
            cout << "Edad: " << this->edad << endl;
        }
};


int main(){
    Person* p1 = new Person("Juan", "Alvarez", 22);
    Person* p2 = new Person("Valeria", "Cespedes", 35);
    Person* p3 = new Person("Cesar", "Vargas", 44);
    p1->print();
    p2->print();
    p3->print();
    return 0;
}