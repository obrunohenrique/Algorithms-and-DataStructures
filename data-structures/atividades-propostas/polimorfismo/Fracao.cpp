#include "fracao.h"
#include <iostream>

using namespace std;

Fracao::Fracao(long numerador, long denominador)
 : numerador(numerador), denominador(denominador) {
    cout << "Objeto criado: " << numerador << "/" << denominador << endl;
}

Fracao::~Fracao() {
        cout << "Fração excluída: " << numerador << "/" << denominador << endl;
    }

ostream& operator<<(ostream& os, const Fracao& a)
{
    os << a.numerador << "/" << a.denominador;
    return os;
}

Fracao Fracao::operator++() {

    numerador = numerador + denominador;

    return *this;
}

Fracao Fracao::operator--() {

    numerador = numerador - denominador;

    return *this;
}

Fracao Fracao::operator-() {
    numerador *= -1;

    return *this;
}