#include <iostream>

using namespace std;

int *fibonacci(int num, int seq[]);

int main() {

    int fib[2] = {1,1};

    cout << fibonacci(5, fib);

    return 0;
}

int *fibonacci(int num, int seq[]){
    
    int add, tam;
    tam = sizeof(seq)/4;

    if(num == tam){
        return seq;
    } else {
        add = seq[tam-1] + seq[tam-2];
        seq[tam+1] = add;

        return fibonacci(num, seq);
    }

}
