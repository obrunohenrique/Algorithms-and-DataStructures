// Article.h
// Definindo class article
// ------------------------------------------------
#ifndef _ARTICLE_
#define _ARTICLE_
#include <string>
#include <iostream>

using namespace std;

class Article
{
private:
    string name;
    unsigned long num;
    double price;

    static int cont;

public:
    Article( const string&, unsigned long, double );
    ~Article();

    Article(const Article& objeto);

    string getName() { return name; } 
    double getPrice() { return price; }

    void print() {
        cout << "Article: " << "\n";
        cout << "------------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Number: " << num << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------------" << "\n\n";
        // system("pause");
    } 
    
    static int getCont() { return cont; }
    void setPrice( double valor ) { 
        price = valor; 
        cout << "Preço de " << name << " modificado para: " << price << endl;
    }

};

#endif