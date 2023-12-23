#include <iostream>
using namespace std;

class Triangle{
    private:
        double a;
        double b;
        double c;
    public:
        Triangle(double a, double b, double c){
            cout << "Constructor de triangulo..." << endl;
            this->a = a;
            this->b = b;
            this->c = c;
        }
        double getPerimeter(){
            return this->a + this->b + this->c;
        }
        void print(){
            cout << this->a << "|" << this->b << "|" << this->c << endl;
        }
        double getA(){
            return a;
        }
        double getB(){
            return b;
        }
        double getC(){
            return c;
        }
};

//Heredamos de la clase triangulo
class EquilateralTriangle : public Triangle{
    public:
        //Estamos invocando al constructor de la clase padre
        EquilateralTriangle(double side): Triangle(side, side, side) {
            cout << "Constructor de triangulo equilatero..." << endl;
        }
        //Se sobreescribe getPerimeter para realizar el calculo de forma especifica
        double getPerimeter(){
            return 3 * this->getA();
        }
};

int main(){
    Triangle* t1 = new Triangle(3, 4, 5);
    Triangle* t2 = new Triangle(5, 5, 5);
    t1->print();
    cout << "Perimetro de t1: " << t1->getPerimeter() << endl;
    t2->print();
    cout << "Perimetro de t2: " << t2->getPerimeter() << endl;
    EquilateralTriangle* t3 = new EquilateralTriangle(8);
    cout << "Perimetro de t3: " << t3->getPerimeter() << endl;
    return 0;
}