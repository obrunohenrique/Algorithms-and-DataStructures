#include "fracao.h"
#include <iostream>

using namespace std;

int main() {
    
    Fracao a(1, 2);
    Fracao b(4, 2);

    a = -a;

    cout << a << endl;


    return 0;
}