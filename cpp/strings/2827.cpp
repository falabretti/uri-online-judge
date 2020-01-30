#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    string linha;
    getline(cin, linha);

    vector<string> tokens;

    for(int i = 0; i < linha.size() - 1; i++) {
        char letra_1 = tolower(linha[i]);
        char letra_2 = tolower(linha[i + 1]);
        tokens.push_back({letra_1, letra_2});
    }

    sort(tokens.begin(), tokens.end());

    int maior = 0;
    int cont = 0;
    string maior_token;
    string anterior = tokens[0];

    for(int i = 0; i < tokens.size(); i++) {
        if(tokens[i] == anterior) cont++;
        else {
            cont = 1;
            anterior = tokens[i];
        }

        if(cont > maior) {
            maior = cont;
            maior_token = tokens[i];
        }
    }

    cout << maior_token << ":" << maior << endl;

    return 0;
}
