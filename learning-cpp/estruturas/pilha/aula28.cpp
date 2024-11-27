#include <iostream>
#include <stack>

using namespace std;

int main() {

    //FILO

    stack <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");
 
    if(cartas.empty()){
        cout << "Pilha vazia\n\n";
    } else {
        cout << "Pilha com cartas\n\n";
    }

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cout << "Carta do topo: " << cartas.top() << "\n";

    cartas.pop();
    cartas.pop();
    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "Nova carta do topo: " << cartas.top() << "\n";
  
    return 0;
}