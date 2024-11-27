#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> aula;
    int tam=10;
    list<int>::iterator it;

    for(int i=0; i<tam; i++) {
        aula.push_back(i);
    }

    // it=aula.begin();
    // advance(it, 7);

    // aula.insert(it, 0);


    cout << "Tamanho da lista: " << aula.size() << endl;

    tam = aula.size();
    for(int i=0; i<tam; i++) {
        cout << aula.back() << "\n";
        aula.pop_back();
    }

    return 0;
}