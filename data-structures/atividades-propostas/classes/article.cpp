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

Article::~Article() {
    --cont;
    cout << "Destrutor chamado para: " << name << endl;
}

Article global("Camisa", 5990, 59.9);

int test() {

    static Article static_test("Bermuda", 1235, 39.9);
    Article local_test("casaco", 123, 59.9);

    local_test.setPrice(70);

    return 0;
}

int main() {

    Article main_article("Sapato", 45678, 120.20);

    cout << "Chamando função test()..." << "\n";
    test();

    cout << "Chamando função test() pela segunda vez..." << "\n";
    test();


    cout << "Função print para objeto criado na main(): " << endl;
    main_article.print();
    
    return 0;
}