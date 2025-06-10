#include <iostream>
#include <vector>

using namespace std;

void merge(int lista[], int inicio, int meio, int final) {
    vector<int> lista_esquerda, lista_direita;
    for(int i=0; i<meio; i++) { lista_esquerda.push_back(lista[i]); }   //copiando a primeira metade da lista
    for(int i=meio; i<final; i++) { lista_direita.push_back(lista[i]); }    //copiando a segunda metade da lista

    int acessos_dir, acessos_esq = 0;   //marcador de quantos acessos cada "pilha de números" já teve

    for(int k=inicio; k<final; k++) {
        if(acessos_dir >= lista_direita.size()) {
            lista[k] = lista_esquerda[acessos_esq];
            acessos_esq += 1;
        } else if(acessos_esq >= lista_esquerda.size()) {
            lista[k] = lista_direita[acessos_dir];
            acessos_dir += 1;
        } else if(lista_direita[acessos_dir] < lista_esquerda[acessos_esq]) {
            lista[k] = lista_direita[acessos_dir];
            acessos_dir += 1;
        } else {
            lista[k] = lista_esquerda[acessos_esq];
            acessos_esq += 1;
        }
    }

}

void mergeSort(int lista[], int inicio, int final) { 
    
    int meio = (final + inicio) / 2;
    if(inicio + final > 1) {
        mergeSort(lista, inicio, meio);
        mergeSort(lista, meio, final);
        merge(lista, inicio, meio, final);
    }
}




int main() {

    int tam = 10;
    int lista[tam] = {15, 6, 4, 3, 23, 34, 5, 2, 19, 8};

    mergeSort(lista, 0, tam);


    //printando lista
    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;

    return 0;
}