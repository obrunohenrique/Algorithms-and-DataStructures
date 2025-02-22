#include <iostream>
#include "astack.h"
#include <vector>

using namespace std;

void brokenKeyboard(const string& frase);

int main() {

    string frase;
    cin >> frase;

    brokenKeyboard(frase);

    return 0;
}

void brokenKeyboard(const string& frase) {
    AStack<char> st;
    bool emp = false;
    vector<char> str;

    for(char c : frase) {
        if(c == '[' && emp == false) {
            emp = true;
        }
        if((c != '[' && c != ']') && emp == false) {
            str.push_back(c);
        } else
        if((c != '[' && c != ']') && emp == true) {
            st.push(c);
        }
        if(c == ']') {
            emp = !emp;
        }
    }

    while (st.length() > 0) {
        char c = st.pop();
        str.insert(str.begin(), c);
    }

    for(int i =0; i < str.size() ; i++) {
        cout << str[i];
    }

}