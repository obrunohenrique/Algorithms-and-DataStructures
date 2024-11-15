#include <iostream>

using namespace std;

int main()
{

    int opc;
    cout << "Selecione um dos números abaixo: \n [1]carro,  [2]moto,  [3]aviao,  [4]helicoptero\n";
    cin >> opc;

    switch (opc)
    {

    case 1:
    case 2:
        cout << "\nTransporte terrestre\n";
        switch (opc)
        {
        case 1:
            cout << "Carro selecionado\n";
            break;

        case 2:
            cout << "Moto selecionado\n";
            break;
        }
        break;

    case 3:
    case 4:
        cout << "\nTransporte aerio\n";
        switch (opc)
        {
        case 3:
            cout << "Aviao selecionado\n";
            break;

        case 4:
            cout << "Helicoptero selecionado\n";
            break;
        }
        break;
    default:
        cout << "\nvc digitou um numero fora do intervalo.";
        break;
    }

    system("pause");

    return 0;
}