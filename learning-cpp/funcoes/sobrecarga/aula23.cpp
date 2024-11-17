

//Sobrecarga de funcoes -> possibilidade de existirem duas funçoes com o mesmo nome no mesmo programa.
//Desde que os argumentos de entrada sejam diferentes.

#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main() {

    soma(53, 658);
    soma();

    system("pause");

    return 0;
}


void soma(int n1, int n2) {
    cout << "A soma dos valores é: " << n1+n2 << endl;
}

void soma() {
    int n1, n2, re;
    n1 = 53;
    n2= 154;
    re = n1+n2;
    cout << "Soma: " << re << endl;
}