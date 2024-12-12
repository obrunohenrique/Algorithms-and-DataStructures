#include "atleta.h"
#include <iostream>
#include <iomanip>

using namespace std;

Atleta::Atleta(const string &nome, int idade, double altura, double peso) : nome(nome), idade(idade), altura(altura), peso(peso) {};

Atleta::~Atleta()
{
    cout << endl;
};

double Atleta::calcularIMC() const {
    return peso / (altura * altura);
}

void Atleta::info()
{
    
    cout << "   informacoes do atleta:   " << endl;
    cout << "============================" << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Idade: " << this->getIdade() << endl;
    cout << "Altura: " << this->getAltura() << endl;
    cout << "Peso: " << this->getPeso() << endl;
}

Jogador::Jogador(
    const string &nome, int idade, double altura, double peso,
    int chute, int forca) : Atleta(nome, idade, altura, peso)
{

    this->chute = chute;
    this->forca = forca;
};

Jogador::~Jogador()
{
    cout << endl;
}

void Jogador::info()
{
    cout << endl;
    cout << "Esporte: Futebol" << endl;
    Atleta::info();

    cout << "Chute[0-10]: " << this->getChute() << endl;
    cout << "Forca[0-10]: " << this->getForca() << endl;
    cout << "============================" << endl;
}

Maratonista::Maratonista(
    const string &nome, int idade, double altura, double peso,
    double velocidadeMax, double pace) : Atleta(nome, idade, altura, peso)
{
    this->velocidadeMax = velocidadeMax;
    this->pace = pace;
}

Maratonista::~Maratonista() {
    cout << endl;
}

void Maratonista::info() {

    cout << endl;
    cout << "Esporte: Maratona" << endl;
    Atleta::info();

    cout << "Velocidade Maxima[km/h]: " << this->getVelocidadeMax() << endl;
    cout << "Pace: " << this->getPace() << endl;
    cout << "============================" << endl;
}