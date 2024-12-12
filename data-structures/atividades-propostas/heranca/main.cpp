#include "atleta.h"
#include <iostream>

using namespace std;

int main() {

    // Jogador italo("Italo", 22, 80, 1.80, 7, 9);
    Maratonista marcela("Marcela", 30, 55, 1.60, 18, 4.2);

    Maratonista *ptr = &marcela;

    ptr->info();

    return 0;
}