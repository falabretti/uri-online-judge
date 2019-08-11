#include <iostream>

using namespace std;

int main() {

    int n, m, l;

    while(cin >> n) {

        cin >> m >> l;

        int marcos[m][n], leonardo[l][n];

        for(int i = 0; i < m; i ++) {
            for(int j = 0; j < n; j++) {
                cin >> marcos[i][j];
            }
        }

        for(int i = 0; i < l; i ++) {
            for(int j = 0; j < n; j++) {
                cin >> leonardo[i][j];
            }
        }

        int escolha_marcos, escolha_leonardo, atr_sorteada;

        cin >> escolha_marcos >> escolha_leonardo;
        cin >> atr_sorteada;

        escolha_marcos--;
        escolha_leonardo--;
        atr_sorteada--;

        if(marcos[escolha_marcos][atr_sorteada] > leonardo[escolha_leonardo][atr_sorteada]) {
            cout << "Marcos" << endl;
        }
        else if(marcos[escolha_marcos][atr_sorteada] < leonardo[escolha_leonardo][atr_sorteada]) {
            cout << "Leonardo" << endl;
        }
        else if(marcos[escolha_marcos][atr_sorteada] == leonardo[escolha_leonardo][atr_sorteada]) {
            cout << "Empate" << endl;
        }
    }
    return 0;
}
