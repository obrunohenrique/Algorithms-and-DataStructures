#include "hashtable.h"

int main() {

    int num_testscases, inputs;
    string input;

    cin >> num_testscases;
 
    for(int i = 0; i<num_testscases; i++) {
        cin >> inputs;

        HashTable ht;
        ht.inicializarTabela();

        for(int j =0; j<inputs; j++) {
            cin >> input;
            string palavra = input.substr(4);
            if(input[0] == 'A') {
                ht.inserir(palavra);
            } else {
                ht.excluir(palavra);
            }
        }

        ht.print();
    }
    

    return 0;
}