#include <iostream>
using namespace std;

int main() {

    float n1, n2, n3, me, ma;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "\n";

    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "\n";

    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "\n";

    me = (n1 + n2 + n3)/3;
    ma = (n1 + n2*2 + n3*3 + me)/7;

    if (ma >= 9) {
        cout << 'A' << endl;
    } else if (ma >= 7.5 && ma < 9) {
        cout << 'B' << endl;
    } else if (ma >= 6 && ma < 7.5) {
        cout << 'C' << endl;
    } else if (ma >= 4 && ma < 6) {
        cout << 'D' << endl;
    } else {
        cout << 'E' << endl;
    }

    return 0;
}