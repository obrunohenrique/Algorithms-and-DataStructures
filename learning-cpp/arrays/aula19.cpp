#include <iostream>

using namespace std;

int main()
{

    int matriz[3][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {2, 2, 2, 2}};

    int l, c;

    // for (l=0; l<3; l++) {
    //     for(c=0; c<4; c++) {
    //         matriz[l][c] = l;
    //     }
    // }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            cout << " " << matriz[l][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}
