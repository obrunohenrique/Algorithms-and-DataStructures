#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto=false;

    tam = 0;
    i = 0;
    chances = 6;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0') {     // '\0' é a flag que indica que a string termina ali. É add com o click do enter
        tam++;
        i++;
    }

    for(i=0; i<30; i++) {
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos<tam)) {

        cout << "Total de chances: " << chances << "\n\n";
        cout << "Palavra secreta: ";

        for(i=0; i<tam; i++) {
            cout << secreta[i];
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        for (i=0; i<tam; i++) {
            if (palavra[i] == letra[0]) {
                acerto = true;
                secreta[i] = palavra[i];
                acertos += 1;
            }
        }

        if (!acerto) {
            chances -= 1;
        }
        acerto = false;
        system("cls");

    }

    if (acertos == tam) {
        cout << "Parabens! voce venceu!";
    } else {
        cout << "Game Over. Tente novamente...";
    }
        
    

    system("pause");
    return 0;
}