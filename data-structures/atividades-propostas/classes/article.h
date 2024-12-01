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

public:
    Article( const string&, unsigned long, double );

    string getName() { return name; } 
    double getPrice() { return price; }

    void print() {
        cout << "Article: " << "\n\n";
        cout << "------------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Number: " << num << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------------" << endl;
        system("pause");
    } 
    
};

#endif