/*
    Implemente un programa que lea la nota final de un alumno
    y la cantidad de participaciones que tiene (desde el teclado).
    Si tiene mas de 10 participaciones, incremente su puntaje en 1.
    Muestre en pantalla un mensaje indicando si el alumno pudo
    aprobar o no
*/
#include <iostream>
using namespace std;

int main(){
    int grade, interventions;
    cout << "Ingrese la nota del alumno: ";
    cin >> grade;
    cout << "Ingrese las participaciones: ";
    cin >> interventions;

    if(interventions > 10){
        grade++;
    }

    if(grade >= 11){
        cout << "Alumno aprobado";
    }else{
        cout << "Alumno desaprobado";
    }
    return 0;
}
