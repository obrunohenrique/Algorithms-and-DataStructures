#include <iostream>
#include "avl.h"

using namespace std;

int main() {

    Avl a;

    a.inserir(4);
    a.inserir(6);
    a.inserir(8);
    a.inserir(3);
    a.inserir(2);
    a.inserir(5);

    a.emOrdem();


    return 0;
}