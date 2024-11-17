#include <iostream>

using namespace std;

void imp(string txt="Texto padrao"); //Passando valor padrão

int main() { 

    imp();

    system("pause");
    return 0;
}

void imp(string txt) {
    cout << "\n" << txt << "\n";
}
    
