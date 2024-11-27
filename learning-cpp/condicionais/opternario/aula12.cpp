#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n1, n2;
    string res;
    float media;

    inicio:

    system("cls");

    cout << "\nDigite a primeira nota: ";
    cin >> n1;

    cout << "\nDigite a segunda nota: ";
    cin >> n2;

    media = (n1+n2)/2;

    res = (media >= 7) ? "Aluno Aprovado\n" : "Aluno reprovado\n";

    cout << "Situacao: " << res;


    char repetir;
    cout << "Deseja digitar mais notas? [s/n]: ";
    cin >> repetir;
    if(repetir=='s' or repetir=='S') {
        goto inicio;
    }

    return 0;
}