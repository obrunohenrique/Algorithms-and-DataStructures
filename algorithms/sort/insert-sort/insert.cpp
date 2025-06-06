#include <iostream>

using namespace std;

int main() {

    int tam = 7;
    int lista[tam] = {15, 6, 4, 3, 2, 19, 8};

    //insertion sort algorithm

    for(int i=1; i<tam; i++) {
        int v = lista[i];
        int j = i - 1;

        while (j>=0 && lista[j] > v)
        {
            lista[j+1] = lista[j];
            j = j - 1;
            lista[j+1]  = v;
        }
        
    }
    // fim do algoritmo

    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;


    return 0;
}