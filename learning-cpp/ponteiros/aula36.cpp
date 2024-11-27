#include <iostream>

using namespace std;

int main() {
    
    string veiculo = "Carro";
    string *pv; //Um ponteiro armazena o endereço de memória.

    pv = &veiculo;
    
    cout << "Endereço de memória de veiculo: "<< pv;

    *pv = "Moto"; //no endereço apontado por pv, add o valor "moto"

    cout << "\n\n" << veiculo;
    return 0;
}