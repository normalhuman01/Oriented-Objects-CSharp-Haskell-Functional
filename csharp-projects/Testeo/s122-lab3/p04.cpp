#include <iostream>
using namespace std;

int getTotalTime(int processIdToSearch, int processIds[], int executionTimes[], int processCount){
    int totalTime = 0;
    for(int i = 0; i < processCount; i++){
        if(processIdToSearch == processIds[i]){
            totalTime += executionTimes[i];
        }
    }
    return totalTime;
}

int main(){
    int ids[] = {1234, 1236, 1238, 1234};
    int times[] = {4, 2, 3, 4};
    int processId;
    int processCount = sizeof(ids) / sizeof(int);
    cout << "Ingrese un ID de proceso para calcular el tiempo total: ";
    cin >> processId;
    cout << "Tiempo total de ejecucion: " << getTotalTime(processId, ids, times, processCount) << endl;
    return 0;
}