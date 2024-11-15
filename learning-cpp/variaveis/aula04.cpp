#include <iostream>
using namespace std;

int main() {
    // TIPO + NOME;
    // TIPO + NOME = VALOR;

    char encerrar;
    int vidas = 1; 
    char letra = 'B'; // recebe uma letra (tamanho de um byte) 'B'
    double decimal = 5.2; // 2.49999999999
    float decimal2 = 5.2; // float tem uma precisão menor (2.5)
    bool vivo = true;
    string nome = "Bruno";

    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << vidas << endl << letra << endl << decimal << endl << decimal2 << endl << vivo << endl << nome;

    cout << "Deseja encerrar o programa? [y/n]: ";
    cin >> encerrar;

    return 0;
}
