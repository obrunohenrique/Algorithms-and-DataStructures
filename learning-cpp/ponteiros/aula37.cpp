#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p = &vetor[0]; //endereço de memória do primeiro elemento do vetor
    cout << p << endl;

    *p = 10;
    cout << vetor[0] << endl;
    
    p = &vetor[1]; //endereço de memória do primeiro elemento do vetor
    *p = 20;
    cout << vetor[1] << endl;

    p= &vetor[2];
    *p = 30;
    cout << vetor[2] << endl;
    
    return 0;
}