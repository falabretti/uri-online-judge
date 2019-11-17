#include <bits/stdc++.h>

using namespace std;

int main() {

    string linha;

    while(getline(cin, linha)) {
        
        if(linha.size() == 0) {
            cout << linha << endl;
            continue;
        }

        linha.erase(remove_if(linha.begin(), linha.end(), ::isspace), linha.end());
        sort(linha.begin(), linha.end());

        vector<pair<char, char>> faixas;

        char last = linha[0];
        char start = linha[0];
        
        for(int i = 0; i < linha.size(); i++) {
            char letra = linha[i];

            int idx = letra - 'a';
            int prev_idx = last - 'a';

            if(idx - prev_idx > 1) {
                faixas.push_back({start, last});

                start = letra;
            }

            if(i == linha.size() - 1) {
                faixas.push_back({start, letra});
            }

            last = letra;
        }

        bool first = true;       
        
        for(pair<char, char> p : faixas) {
            if(not first) cout << ", ";
            else first = false;

            cout << p.first << ':' << p.second;
        }
        cout << endl;
    }

    return 0;
}