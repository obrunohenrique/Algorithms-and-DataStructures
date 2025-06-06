#include <iostream>

using namespace std;

int main() {

    int tam = 7;
    int lista[tam] = {15, 6, 4, 3, 2, 19, 8};

    //selection sort algorithm

    for (int i=0; i < tam - 1; i++) {
        int min = i;
        for(int j=i+1; j < tam; j++) {
            if(lista[j] < lista[min]) {
                min = j;
            }
        }
        // faz a troca do minimo encontrado na lista já na sua posição de ordenação;
        int temp = lista[i];
        lista[i] = lista[min];
        lista[min] = temp;
    }

    // fim do algoritmo

    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;

    return 0;
}