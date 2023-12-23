#include <iostream>
#include <vector>
#include <thread>

using namespace std;

long long sumThread(const vector<int>& v, int start, int end) {
    long long sum = 0;
    for (int i = start; i < end; ++i) {
        sum += v[i];
    }
    return sum;
}

int main() {
    // Generar un vector de gran tamano (un millon de elementos, todos 4s)
    vector<int> largeVector(1000000, 4);

    // Numero de hilos
    const int numThreads = 4;

    // Tamano de cada bloque que vamos a procesar
    int sectionSize = largeVector.size() / numThreads;
    
    // Almacenamos cada uno de los hilos
    vector<thread> threads;

    // Aqui almacenamos las sumas parciales
    vector<long long> partialSums(numThreads, 0);

    // Liberamos los hilos para el procesamiento
    for (int i = 0; i < numThreads; ++i) {
        int start = i * sectionSize;
        int end = (i == numThreads - 1) ? largeVector.size() : (start + sectionSize);

        threads.push_back(thread([&largeVector, start, end, i, &partialSums] {
            partialSums[i] = sumThread(largeVector, start, end);
        }));
    }

    // Juntamos los threads (join)
    for (auto& thread : threads) {
        thread.join();
    }

    // Calculamos la suma total usando cada uno de los bloques
    long long finalSum = 0;
    for (const auto& sum : partialSums) {
        finalSum += sum;
    }

    cout << "Suma de elementos: " << finalSum << endl;

    return 0;
}
