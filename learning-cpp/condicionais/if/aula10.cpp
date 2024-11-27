#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int n1, n2, res;
    char opc;

    inicio:
    system("cls");

    cout << "Digite um valor para n1: ";
    cin >> n1;

    cout << "Digite um valor para n2: ";
    cin >> n2;

    res = n1 + n2;

    /*
        >=60 - aprovado
        >=40 and <60 - recuperação
        <40 - reprovado
    */

    if (res >= 60)
    {
        cout << "\nAluno Aprovado!\n";
    }
    else if (res >= 40)
    {
        cout << "\nAluno em recuperacao!\n";
    }
    else
    {
        cout << "\nAluno Reprovado!\n";
    }

    cout << "Deseja digitar outras notas? [s/n]: ";
    cin >> opc;
    if(opc == 's' or opc == 'S') {
        goto inicio; //redireciona o ponteiro de execução.
    }

    system("pause");

    return 0;
}
