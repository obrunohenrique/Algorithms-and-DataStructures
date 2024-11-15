#include <iostream>
using namespace std;

int n1, n2; //globais

int main() {
    
    //Operadores matemáticos: + - * / % ()

    int n3, n4; //locais

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;
    
    int res = (n1 + n2 + n3 + n4)-10;

    cout << "Valor de res: " << res;

    return 0;
}