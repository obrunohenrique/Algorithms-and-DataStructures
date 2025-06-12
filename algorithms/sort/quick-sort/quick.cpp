#include <iostream>
using namespace std;


int particao(int lista[], int inicio, int final) {

    int pivot = lista[final]; //o pivot pode ser qualquer elemento da lista, não necessariamente o final
    int i = inicio;

    for(int k = inicio; k<final; k++) {
        if(lista[k] <= pivot) {  // se for menor que o pivot, vai pra marcação i e depois o i é incrementado garantindo que para n<i todos os numeros sao menores que o pivot
            int temp = lista[k];    
            lista[k] = lista[i];
            lista[i] = temp;

            i++; //incrementa a barra que demarca a esquerda para os menores que o pivot - para na próxima troca continue mantendo os maiores a direita
        }
    }
    int temp = lista[i];        //esse swap faz com que o pivot fique no meio dos números maiores/menores que ele
    lista[i] = lista[final];    //aqui faz com que o pivot vá para a posição i;
    lista[final] = temp;    

    return i; // retorna o index do pivot;
}


void quickSort(int lista[], int inicio, int final) {

    if(inicio < final) {
        int p = particao(lista, inicio, final);
        quickSort(lista, inicio, p-1);
        quickSort(lista, p+1, final);
    }
}


int main() {

    int tam = 20;
    int lista[tam] = {15, 6, 4, 3, 23, 34, 5, 2, 19, 8, 22, 33, 5, 6, 99, 874, 321, 15, 18, 87};


    quickSort(lista, 0, tam-1); // o final aqui é a posição do pivot


    //printando lista
    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;

    return 0;
}