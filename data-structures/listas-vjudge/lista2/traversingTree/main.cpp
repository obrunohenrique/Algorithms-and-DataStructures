#include "bst.h"

int main() {

    int n, input;
    Arvore arv;

    cin >> n;

    for(int i =0; i<n; i++) {
        cin >> input;
        arv.inserir(input);
    }

    arv.print();

    return 0;
}