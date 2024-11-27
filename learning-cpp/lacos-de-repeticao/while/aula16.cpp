#include <iostream>

using namespace std;

int main() {

    int n = 60;

    // Do while permite o laço seja executado ao menos uma vez, mesmo que a condição não seja confirmada.

    do {       
        cout << n << endl;
        n++;
    } while(n<=20);

    cout << "\nRotina finalizada.\n";

    return 0;
}