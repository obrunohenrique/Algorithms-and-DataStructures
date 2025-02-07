#include "mercadoria.h"
#include <iostream>

Mercadoria::Mercadoria(const string &nome, float preco, int qnt) : nome(nome), preco(preco), quantidade(qnt)
{
}

Mercadoria::~Mercadoria() {
    cout << endl;
}

void Mercadoria::info() {
    cout << "Nome:.....:" << this->getNome() << endl;
    cout << "Preco.....:" << this->getPreco() << endl;
    cout << "Qunatidade:" << this->getQuantidade() << endl;
    cout << "------------------------------------" << endl;
}

float Fruta::desconto = 0.0;  //inicializando desconto das frutas 
float Fruta::total = 0.0;

Fruta::Fruta(const string &nome, float preco, int qnt)
    : Mercadoria(nome, preco, qnt)
{
    calcularValorEstoque();
}

Fruta::~Fruta() {
    cout << endl;
}

void Fruta::calcularValorEstoque() {
    this->valorIntegral = this->preco * this->quantidade; // calculando valor integral
    descontoIndividual = this->PorcentDesconto * this->valorIntegral; //calculando quanto será descontado
    total += this->valorIntegral - this->descontoIndividual; // calculando desconto em cima do produto
    desconto += descontoIndividual; // atribuindo desconto do produto ao desconto geral
}


float Verdura::desconto = 0.0;  //inicializando desconto das Verduras 
float Verdura::total = 0.0; // inicializando valor a cobrar das verduras

Verdura::Verdura(const string &nome, float preco, int qnt)
    : Mercadoria(nome, preco, qnt)
{
    calcularValorEstoque();
}

Verdura::~Verdura() {
    cout << endl;
}

void Verdura::calcularValorEstoque() {
    this->valorIntegral = this->preco * this->quantidade; // calculando valor integral
    descontoIndividual = this->PorcentDesconto * this->valorIntegral; //calculando quanto será descontado
    total += this->valorIntegral - this->descontoIndividual; // calculando desconto em cima do produto
    desconto += descontoIndividual; // atribuindo desconto do produto ao desconto geral
}


float Legume::desconto = 0.0;  //inicializando desconto dos Legumes 
float Legume::total = 0.0; // inicializando valor a cobrar dos Legumes

Legume::Legume(const string &nome, float preco, int qnt)
    : Mercadoria(nome, preco, qnt)
{
    calcularValorEstoque();
}

Legume::~Legume() {
    cout << endl;
}

void Legume::calcularValorEstoque() {
    this->valorIntegral = this->preco * this->quantidade; // calculando valor integral
    total += this->valorIntegral; // calculando desconto em cima do produto
}