#include <iostream>

using namespace std;

void somar (float *var, float valor);
void ptar( float *v);

int main() {

    float num = 0;
    float *ptr = &num;
    float vetor[5];
    
    somar(ptr, 15);
    cout << num << "\n\n";

    ptar(vetor);
    
    for(int i=0; i<5; i++){
        cout << vetor[i] << "\n";
    }
    
    return 0;
}

void somar (float *var, float valor) {
    *var += valor;
}

void ptar( float *v){
    v[0] = 0; 
    v[1] = 0;
    v[2] = 3; // quando for vetor não precisa add o operador de ponteiro(*)
    v[3] = 0;
    v[4] = 0;
}