#ifndef _MERCADORIA_
#define _MERCADORIA_
#include <iostream>
#include <string>

using namespace std;

class Mercadoria
{
private:
    string nome;

protected:
    float preco;
    int quantidade;

public:
    Mercadoria(const string &nome, float preco, int qnt);
    ~Mercadoria();

    void info();
    const string getNome(){ return nome; }
    float getPreco() { return preco; }
    int getQuantidade() { return quantidade; }

    virtual void calcularValorEstoque() = 0;
};


class Fruta: public Mercadoria
{
private:
    double PorcentDesconto = 0.1;
    float valorIntegral;
    float descontoIndividual;

    static float total;
    static float desconto;

public:
    Fruta(const string &nome, float preco, int qnt);
    ~Fruta();

    float getDescontoIndividual() {return descontoIndividual;}
    float getValorIntegral() { return valorIntegral; }
    static float getDesconto() { return desconto; }
    static float getTotal() { return total; }

    void calcularValorEstoque();
};


class Verdura: public Mercadoria
{
private:
    double PorcentDesconto = 0.05;
    float valorIntegral;
    float descontoIndividual;

    static float total;
    static float desconto;

public:
    Verdura(const string &nome, float preco, int qnt);
    ~Verdura();

    float getDescontoIndividual() {return descontoIndividual;}
    float getValorIntegral() { return valorIntegral; }
    static float getDesconto() { return desconto; }
    static float getTotal() { return total; }

    void calcularValorEstoque();
};


class Legume: public Mercadoria
{
private:
    double PorcentDesconto = 1;
    float valorIntegral;
    float descontoIndividual;

    static float total;
    static float desconto;

public:
    Legume(const string &nome, float preco, int qnt);
    ~Legume();

    float getDescontoIndividual() {return descontoIndividual;}
    float getValorIntegral() { return valorIntegral; }
    static float getDesconto() { return desconto; }
    static float getTotal() { return total; }

    void calcularValorEstoque();
};

#endif