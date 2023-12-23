#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

int findSecondMostFrequent(Node* elementList, Node* countList){
    Node* ptrCount = countList;
    //1) Encontrar la mayor cantidad de apariciones
    //Asumimos que el primer valor es el mayor
    int maxCount = countList->value;
    //Encontramos tambien el minimo valor para inicializar el segundo contador
    int minCount = countList->value;
    //Encontramos la mayor cantidad de apariciones (solo cuantas son)
    while(ptrCount != nullptr){
        if(maxCount < ptrCount->value) maxCount = ptrCount->value;
        if(minCount > ptrCount->value) minCount = ptrCount->value;
        ptrCount = ptrCount->next;
    }
    //2) Encontrar el segundo mas frecuente
    Node* ptrElement = elementList;
    ptrCount = countList;
    //Asumimos que el segundo mayor conteo es el minimo que calculamos (se reemplazara)
    int maxCount2 = minCount;
    int valueMaxCount2;
    while(ptrCount != nullptr){
        //Solo consideramos valores menores que el maximo encontrado
        if(maxCount2 < ptrCount->value && ptrCount->value < maxCount){
            maxCount2 = ptrCount->value;
            valueMaxCount2 = ptrElement->value;
        }
        ptrCount = ptrCount->next;
        ptrElement = ptrElement->next;
    }
    return valueMaxCount2;
}

void countOccurences(int number[], int size){
    int currentValue = number[0];
    Node* elementList = nullptr;
    Node* countList = nullptr;
    int count = 1;
    int i;
    for(i = 0; i < size - 1; i++){
        if(number[i] == number[i + 1]){
            count++;
        }else{
            addLast(elementList, number[i]);
            addLast(countList, count);
            count = 1;
        }
    }
    addLast(elementList, number[i]);
    addLast(countList, count);
    cout << "Elementos:   ";
    print(elementList);
    cout << "Apariciones: ";
    print(countList);
    int max2 = findSecondMostFrequent(elementList, countList);
    cout << "Elemento con la segunda mayor cantidad de apariciones: " << max2 << endl;
}


int main(){
    int numbers[] = {10, 10, 10, 20, 20, 20, 20, 30, 30, 80, 80};
    countOccurences(numbers, sizeof(numbers) / sizeof(int));
    return 0;
}