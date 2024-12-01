#include "article.h"
#include <iostream>
using namespace std;

Article::Article(
    const string & a_name,
    unsigned long a_num,
    double a_price )
{
    name = a_name;
    num = a_num;
    if(a_price < 0.0) {
        price = 0.0;
    } else { price = a_price; }
    
}

int main() {

    Article a("Camisa", 123456, 59.90);
     
     a.print();

    return 0;
}