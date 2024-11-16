#include <iostream>

using namespace std;

int main() {

    int vetor[6] = {10,20,30,40,50,60}; 
    
    for (int i=0; i < sizeof(vetor)/4 ; i++) { //sizeof retorna o tamanho em bytes (cada int tem 4 bytes)
        cout << vetor[i] << endl;
    }
    

    return 0;
}