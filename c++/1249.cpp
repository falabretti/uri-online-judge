#include <bits/stdc++.h>

using namespace std;

string rot13(string linha) {

    for(int i = 0; i < linha.size(); i++) {
        if(isalpha(linha[i])) {
            char base;
            if(isupper(linha[i])) base = 'A';
            else base = 'a';

            int val = linha[i] - base;
            val += 13;

            if(val > 25) val -= 26;

            linha[i] = val + base;
        }
    }
    return linha;
}

int main() {

    string linha;

    while(getline(cin, linha)) {
        cout << rot13(linha) << endl;
    }

    return 0;
}