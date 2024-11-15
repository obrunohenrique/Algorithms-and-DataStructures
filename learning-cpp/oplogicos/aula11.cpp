#include <iostream>

using namespace std;

int main() {

    // &&, or, ||, !

    int num = 16;

    if( (num>4 && num<7) || (num>14 && num<22)){
        cout << "Precisei das duas pra ser vdd";
    } else if(num>3 or num<8) {
        cout << "verdadeiro\n" << "so precisei de uma condicao verdadeira";
    }

    return 0;
}