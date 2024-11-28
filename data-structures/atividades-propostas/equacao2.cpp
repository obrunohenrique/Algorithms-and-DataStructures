#include <iostream>
#include <cmath>

bool equacaoseg(float a, float b, float c, float *x1, float *x2);

using namespace std;

int main() {

    float a, b, c, x1, x2;
    a = 2;
    b = 0;
    c = 2;

    if(equacaoseg(a, b, c, &x1, &x2)) {
        if(x1 == x2) {
            cout << "x1 = x2 = " << x1 << endl;
        } else {
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    } else {
        cout << "Não existe raiz real" << endl;
    }
    
    return 0;
}

bool equacaoseg(float a, float b, float c, float *x1, float *x2) {
    
    float delta = (b*b) - (4*a*c);

    if (delta < 0) {
        return false;
    } 

    b *= -1;
    delta = sqrt(delta);

    *x1 = (b + delta)/(2*a);
    *x2 = (b - delta)/(2*a);
    
    return true;
}
