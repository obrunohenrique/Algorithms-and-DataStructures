#include <iostream>
#include <string.h> //biblioteca com strcmp() usada na comparação de strings

using namespace std;

int main(int argc, char *argv[]) { //argc = quantidade de argumentos / argv = vetor com os parâmetros

    if(argc > 1) {
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube.\n";
        } else if(!strcmp(argv[1], "nublado")) {
            cout << "Vou ao cinema.\n";
        } else {
            cout << "Vou ficar em casa\n\n";
        }
    } else {
        cout << "Nenhum parametro foi passado\n\n";
    }

    system("pause");

    return 0;
}