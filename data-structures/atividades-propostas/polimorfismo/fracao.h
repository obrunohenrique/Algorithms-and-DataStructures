#include <iostream>

using namespace std;

class Fracao {

    private: 

        long numerador;
        long denominador;

    public:

        Fracao(long numerador = 0  , long denominador = 1);
        ~Fracao();
        friend ostream& operator<<(ostream& os, const Fracao& a);

        Fracao& operator-();
        Fracao& operator++();
        Fracao& operator--();

        Fracao& operator+=(const Fracao&);
        Fracao& operator-=(const Fracao&);
        Fracao& operator *=(const Fracao&);
        Fracao& operator /=(const Fracao&);

        Fracao operator+(const Fracao&) const;
        Fracao operator-(const Fracao&) const;
        Fracao operator*(const Fracao&) const;
        Fracao operator/(const Fracao&) const;
        
};
