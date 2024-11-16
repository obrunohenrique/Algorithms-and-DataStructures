#include <iostream>

using namespace std;

int main()
{

    int cont = 0;

    while (cont < 1000)
    {

        cout << "O contador está em: " << cont << endl;
        if (cont == 100)
        {
            break;
        }

        cont++;
    }

    return 0;
}