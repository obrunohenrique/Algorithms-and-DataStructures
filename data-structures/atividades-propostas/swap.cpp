#include <iostream>

using namespace std;

void swap(float *n1, float *n2);

int main() {

    float x=10.5, y=20.8;

    swap(&x, &y);

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    
    return 0;
}

void swap(float *n1, float *n2) {
    float aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
