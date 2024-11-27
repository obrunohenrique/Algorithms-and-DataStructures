#include <iostream>
#include <queue>

using namespace std;

int main() {

    /*
    empty
    size
    front
    back
    push
    pop
    */

   //FIFO

   queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    while(!cartas.empty()) {
        cout << "Primeira Carta: " << cartas.front() << "\n";
        cartas.pop();
    }

    return 0;
}