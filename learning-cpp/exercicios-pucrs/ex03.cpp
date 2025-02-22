#include <iostream>
#include <list>

using namespace std;

int main() {

    list <int> lista;
    int num;

    cout << "Digite um número ímpar maior que 5 e menor que 13: ";
    cin >> num;

    for(int i=0; i<num ; i++) {
        lista.push_back(i);
    } 

    for(int i=0; i<num ; i++) {
        cout << lista.front();
        cout << "\n";
    }

    return 0;
}