#include "bst.h"

int main() {

    Bst a1(5);

    a1.inserir(1);
    a1.inserir(2);
    a1.inserir(3);
    a1.inserir(4);
    //a1.deletar(4);
    a1.inserir(5);
    a1.inserir(6);
/*
    cout << "Pre ordem: ";
    a1.preOrdem();
    cout << endl;

    cout << "Em ordem: ";
    a1.emOrdem();
    cout << endl;
    
    cout << "Pos ordem: ";
    a1.posOrdem();
    cout << endl;

    cout << "Altura: " << a1.altura() << endl;
    cout << "Minimo: " << a1.minimo() << endl;
    cout << "Maximo: " << a1.maximo() << endl;
*/
    cout << "Tamanho: " << a1.tamanho() << endl;

    return 0;
}