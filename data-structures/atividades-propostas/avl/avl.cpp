#include <iostream>
#include "avl.h"

using namespace std;

int main() {

    Avl a;

    a.inserir(1);
    a.inserir(2);
    a.inserir(3);
    a.inserir(4);
    a.inserir(5);
    a.inserir(6);
    a.deletar(4);
    a.deletar(5);


    a.preOrdem();
    cout << endl;
    a.emOrdem();
    cout << endl;
    a.posOrdem();


    return 0;
}