#include "article.h"
#include <iostream>
using namespace std;

int Article::cont = 0;

Article::Article(
    const string & a_name,
    unsigned long a_num,
    double a_price )
    : name(a_name), num(a_num)
{
    if(a_price < 0.0) {
        price = 0.0;
    } else { price = a_price; }
    
    cout << "Artigo criado: " << name << endl;
    ++cont;
}

Article::Article(const Article& objeto) : name(objeto.name), num(objeto.num), price(objeto.price) {
    cont++;
    cout << "Objeto copiado: " << name << endl;
}

Article::~Article() {
    --cont;
    cout << "Destrutor chamado para: " << name << endl;
}

int test(Article a) {

    cout << "Dentro da função test() - Contagem de objetos: " << Article::getCont() << endl;
    a.print();

    return 0;
}

int main() {

    Article art1("Colchão", 45678, 600);
    Article art2("Sofá", 78952, 800.99);
    
    cout << "Chamando a função test passando art1: " << endl;
    test(art1);

    cout << "Chamando a função test passando art2: " << endl;
    test(art2);
    

    cout << "Contagem final do número de objetos: " << Article::getCont() << endl;

    return 0;
}