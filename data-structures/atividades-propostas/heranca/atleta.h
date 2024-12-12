// Atleta.h
// definindo classe base e derivadas
//======================================================================================

#ifndef _ATLETA_
#define _ATLETA_
#include <string>

using namespace std;

class Atleta
{
private:
    string nome;
    int idade;
    double altura;
    double peso;

protected:

    double calcularIMC() const;

public:
    Atleta(const string &nome, int idade, double peso, double altura);
    ~Atleta();

    string getNome() { return this->nome; }
    int getIdade() { return this->idade; }
    void setIdade(int novaIdade) { idade = novaIdade; }
    double getAltura() { return this->altura; }
    void setAltura(double novaAltura) { altura = novaAltura; }
    double getPeso() { return this->peso; }
    void setPeso(double novoPeso) { peso = novoPeso; }

    void info();
};

class Jogador : public Atleta
{

private:
    int chute;
    int forca;

public:

    Jogador(
        const string &nome, int idade, double peso, double altura,
        int chute,
        int forca
    );

    ~Jogador();

    int getChute() { return this->chute; }
    int getForca() { return this->forca; }

    void info();

};

class Maratonista : public Atleta
{
private:
    double velocidadeMax;
    double pace;

public:
    Maratonista(const string &nome, int idade, double peso, double altura, double velocidadeMax, double pace);
    ~Maratonista();

    double getVelocidadeMax() { return this->velocidadeMax; }
    double getPace() { return this->pace; }

    void info();

};


#endif