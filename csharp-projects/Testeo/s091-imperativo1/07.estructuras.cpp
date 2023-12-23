/*
    a) Defina la estructura alumno con los siguientes campos:
        nombre (cadena)
        nota1 (entero)
        nota2 (entero)
    b) Implemente una funcion que reciba una estructura de tipo
       alumno, muestre en pantalla el nombre del alumno y la
       menor de sus calificaciones.
*/
#include <iostream>
using namespace std;

struct Student{
    string name;
    int grade1;
    int grade2;
};

void showStudent(Student s1){
    int minGrade = 0;
    if(s1.grade1 < s1.grade2){
        minGrade = s1.grade1;
    }else{
        minGrade = s1.grade2;
    }
    cout << "Nombre: " << s1.name << endl;
    cout << "Minima nota: " << minGrade << endl;
}

int main(){
    Student s1 = {"Juan Perez", 12, 18};
    Student s2 = {"Ana Vargas", 17, 15};
    showStudent(s1);
    showStudent(s2);
    return 0;
}
