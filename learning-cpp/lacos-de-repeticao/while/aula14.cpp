#include <iostream>

using namespace std;

int main() {

    int n = 0;

    while(n++<=20) {       

        cout << n << endl;
        if(n == 10) {
            break;
        }
    }

    return 0;
}