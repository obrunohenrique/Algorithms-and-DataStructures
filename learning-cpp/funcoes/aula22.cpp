#include <iostream>

using namespace std;

void texto(); //protótipo de função(apresentar antes do main)
void soma(int n1, int n2); //não se esquecer de especificar os argumentos na prototipação
int multiplicacao(int n1, int n2);
void mostrartr(string tra[4]);


int main() { 

    string transp[4] = {"carro", "moto", "barco", "aviao"};
    mostrartr(transp);

    cout << multiplicacao(2000, 5456) << endl;

    system("pause");
    return 0;
}


void texto() {
    cout << "\nHello world\n";
}

void soma(int n1, int n2) {
    cout << "A soma dos argumentos é igual a:  " << n1+n2 << endl;
}

int multiplicacao(int n1, int n2) {
    int multi = n1 * n2;
    return multi;
}

void mostrartr(string tra[4]) {
    for(int i=0;i<4;i++) {
        cout << tra[i] << endl;
    }
}