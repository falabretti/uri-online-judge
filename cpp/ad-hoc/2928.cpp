#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int qnt_linhas;

    cin >> qnt_linhas;

    char gelo[qnt_linhas];

    for(int i = 0; i < qnt_linhas; i++) {
        string linha;
        cin >> linha;

        gelo[i] = linha[0];
    }

    int pulos = 0;
    bool impossivel = false;

    int cont_fino = 0;

    for(int i = 0; i < qnt_linhas; i++) {
        if(gelo[i] == '.') cont_fino++;

        if(cont_fino > 2) {
            impossivel = true;
            break;
        }

        if(gelo[i] == '-') {
            cont_fino = 0;
            if(gelo[i - 1] == '.') pulos++;
        }

        if(gelo[i] =='.' and i == qnt_linhas - 1) pulos++;
    }

    if(impossivel) cout << "N" << endl;
    else cout << pulos << endl;

    return 0;
}
