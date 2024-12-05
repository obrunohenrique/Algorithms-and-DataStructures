#include "fracao.h"
#include <iostream>

using namespace std;

int main()
{

    Fracao a(1, 2), b(5);

    cout << " a + b = " << a + b << endl;
    cout << " a - b = " << a - b << endl;
    cout << " a * b = " << a * b << endl;
    cout << " a / b = " << a / b << endl;

    cout << " --a = " << --a << endl;
    cout << " ++a = " << ++a << endl;

    cout << "a += b" << endl;
    a += b;
    cout << a << endl;

    cout << "a -= b" << endl;
    a -= b;
    cout << a << endl;

    cout << "-b = " << -b << endl;

    cout << "Fim da execucao..." << endl;

    return 0;
}