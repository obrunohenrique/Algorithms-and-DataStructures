#include <iostream>
#include <vector>
#include <string>
#include "Hash.h"

using namespace std;

int main() {
    vector<int> valores_letras(26);
    for (int i = 0; i < 26; ++i) {
        cin >> valores_letras[i];
    }

    string s;
    cin >> s;
    int n = s.size();

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + valores_letras[s[i] - 'a'];
    }

    long long total = 0;

    MyUnorderedMap<char, MyUnorderedMap<long long, int>> freq;

    for (int i = 0; i < n; ++i) {
        char c = s[i];

        if (freq[c].count(prefix[i])) {
            total += freq[c][prefix[i]];
        }

        freq[c][prefix[i + 1]]++;
    }

    cout << total << endl;
    return 0;
}
