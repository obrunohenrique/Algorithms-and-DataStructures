    #include <iostream>
using namespace std;


void particao3(int lista[], int inicio, int fim, int &menor, int &maior) {

    int p = lista[fim];
    menor = inicio;
    maior = fim;
    int i = inicio;

    while(i <= maior) {
        if(lista[i] < p) {
            int temp = lista[i];
            lista[i] = lista[menor];
            lista[menor] = temp;

            menor++;
            i++;
        } else if((lista[i] > p)) {
            int temp = lista[i];
            lista[i] = lista[maior];
            lista[maior] = temp;
            maior--;
        } else {
            i++;
        }
    }
    
}

void quickSort3(int lista[], int inicio, int fim) {

    if(fim > inicio) {
        int menor, maior;
        particao3(lista, inicio, fim, menor, maior);
        quickSort3(lista, inicio, menor-1);
        quickSort3(lista, maior+1, fim);
    }
}



int main() {

    int tam = 15;
    int lista[tam] = {13,19,9,5, 12,21,7,4,11,2,6,6, 6, 6, 6};

    
    quickSort3(lista, 0, tam-1);


    for(int k=0; k<tam; k++) {
        cout << lista[k] << " ";
    }

    cout << endl;

    return 0;
}