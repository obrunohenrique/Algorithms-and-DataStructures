#include <iostream>

using namespace std;

int fatorial(int num);

int main() {

    cout << fatorial(6);

    return 0;
}

int fatorial(int num) {
    int fat;
    
    if(num == 1) {
        return 1;
    } else {
        return num * fatorial(num-1);
    }

    return fat;
}