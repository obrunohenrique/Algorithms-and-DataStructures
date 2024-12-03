#include "fracao.h"
#include <iostream>

using namespace std;

Fracao::Fracao(long numerador=0, long denominador=1) : numerador(numerador), denominador(denominador) {
        cout << "Nova fração criada: " << numerador << "/" << denominador << endl;
    }

Fracao::~Fracao() {
        cout << "Função excluída: " << numerador << "/" << denominador << endl;
    }

