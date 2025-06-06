#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> lista, int num) {

    int inicio = 0;
    int final = lista.size() - 1;
    int meio = (final - inicio)/2 + inicio;

    while (inicio <= final)
    {
        meio = (final - inicio)/2 + inicio; 
        if(lista[meio] == num) {
            return meio;
        } else if(num < lista[meio]) {
            final = meio - 1; 
        } else if(num > lista[meio]) {
            inicio = meio + 1;
        }
    }

    return -1;
}


int main() {

    vector<int> lista;
    for (int i = 1; i<21 ; i++) {
        lista.push_back(i);
    } 

    cout << binarySearch(lista, 9)<< endl;

    return 0;
}