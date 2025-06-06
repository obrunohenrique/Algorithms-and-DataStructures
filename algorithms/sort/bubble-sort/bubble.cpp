#include <iostream>

using namespace std;

int main() {

    int tam = 7;
    int lista[tam] = {15, 6, 4, 3, 2, 19, 8};

    //bubble sort algorithm

    for(int q=0; q< tam-1; q++) {
        for(int i=0; i<tam; i++) {
            if(lista[i] > lista[i+1]) {
                int temp = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = temp; 
            }
        }
    }
    
    // fim do algoritmo

    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;

    return 0;
}