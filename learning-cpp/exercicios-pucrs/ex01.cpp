#include <iostream>
using namespace std;

int main() {

    int matriz[3][3] = {
        {49, 0, 8},
        {50, 3, 7},
        {19, 23, 33}
    };

    int menornum, linha;
    menornum = matriz[0][0];

    for(int i =0; i<3; i++) {
        for (int j=0; j<3; j++) {
                if (menornum > matriz[i][j]) {
                    menornum = matriz[i][j];
                    linha = i;
                }
            }

        }
    

    cout << "A linha com o menor número é: " << linha << endl; 

    return 0;
}