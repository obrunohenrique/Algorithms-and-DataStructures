#include <iostream>

using namespace std;

int main()
{

    int n1, n2, res;
    char opc;

    cout << "Digite um valor para n1: ";
    cin >> n1;

    cout << "Digite um valor para n2: ";
    cin >> n2;

    cout << "Digite um valor para opc:";
    cin >> opc;

    if(opc == 's') {
        res = n1 + n2;
        cout << "A soma de " << n1 << " e " << n2 << " e igual a " << res << endl;
    } else {
        res = n1 - n2;
        cout << "A subtração de " << n1 << " e " << n2 << " e igual a " << res << endl;
    }
  
    system("pause");

    return 0;
}
