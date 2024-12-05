#include "fracao.h"
#include <iostream>

using namespace std;

Fracao::Fracao(long numerador, long denominador)
 : numerador(numerador), denominador(denominador) {
    if(denominador == 0) {
        cout << "O denominador não pode ser igual a zero! Encerrando o programa..." << endl;
        exit(1);
    }
    if (numerador < 0) {
        this->numerador = -numerador;
        this->denominador = -denominador; 
    }
    cout << "Objeto criado: " << this->numerador << "/" << this->denominador << endl;
}

Fracao::~Fracao() {
        cout << "Fracao excluida: " << numerador << "/" << denominador << endl;
    }

ostream& operator<<(ostream& os, const Fracao& a)
{
    os << a.numerador << "/" << a.denominador;
    return os;
}

Fracao& Fracao::operator++() {

    numerador = numerador + denominador;

    return *this;
}

Fracao& Fracao::operator--() {

    numerador = numerador - denominador;

    return *this;
}

Fracao& Fracao::operator-() {
    numerador *= -1;

    return *this;
}

Fracao& Fracao::operator+=(const Fracao& a) {

    this->numerador = (this->numerador * a.denominador) + (this->denominador * a.numerador);
    this->denominador = this->denominador * a.denominador;

    return *this;
}

Fracao& Fracao::operator-=(const Fracao& a) {

    this->numerador = (this->numerador * a.denominador) - (this->denominador * a.numerador);
    this->denominador = this->denominador * a.denominador;

    return *this;
}

Fracao& Fracao::operator*=(const Fracao& a) {
    this->numerador = this->numerador * a.numerador;
    this->denominador = this->denominador * a.denominador;

    return *this;
}

Fracao& Fracao::operator/=(const Fracao& a) {
    
    this->numerador = this->numerador * a.denominador;
    this->denominador = this->denominador * a.numerador;

    return *this;
}

Fracao Fracao::operator+(const Fracao& a) const {
    Fracao temp;

    temp.numerador = (this->numerador*a.denominador) + (this->denominador * a.numerador);
    temp.denominador = this->denominador * a.denominador;

    return temp;
}

Fracao Fracao::operator-(const Fracao& a) const {
    Fracao temp;

    temp.numerador = (this->numerador*a.denominador) - (this->denominador * a.numerador);
    temp.denominador = this->denominador * a.denominador;

    return temp;
}

Fracao Fracao::operator*(const Fracao& a) const {
    Fracao temp;

    temp.numerador = (this->numerador*a.numerador);
    temp.denominador = this->denominador * a.denominador;

    return temp;
}

Fracao Fracao::operator/(const Fracao& a) const {
    Fracao temp;

    temp.numerador = (this->numerador*a.denominador);
    temp.denominador = this->denominador * a.numerador;

    return temp;
}