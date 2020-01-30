#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {

    freopen("2640.in", "r", stdin);

    int a, b, roubo = 0;

    cin >> a >> b;

    int caixas[a][b];
    int linha[b];
    int coluna[a];
    int maiorLinha[b];
    int maiorColuna[a];

    for(int l = 0; l < a; l++) {
        for(int c = 0; c < b; c++) {
            cin >> caixas[l][c];
            linha[c] = caixas[l][c];
        }
        sort(linha, linha + b);
        maiorLinha[l] = linha[b - 1];
        //cout << maiorLinha[l] << endl;
    }

    for(int c1 = 0; c1 < b; c1++) {
        for(int l1 = 0; l1 < a; l1++) {
            coluna[l1] = caixas[l1][c1];
        }
        sort(coluna, coluna + a);
        maiorColuna[c1] = coluna[a - 1];
        //cout << maiorColuna[c1] << endl;
    }

    for(int l2 = 0; l2 < a; l2++) {
        for(int c2 = 0; c2 < b; c2++) {
            if(caixas[l2][c2] > 1) {
                if(caixas[l2][c2] < maiorColuna[c2] and caixas[l2][c2] < maiorLinha[l2]) {
                        roubo += caixas[l2][c2] - 1;
                        /*cout << caixas[l2][c2] << endl;
                        cout << maiorColuna[c2] << endl;
                        cout << maiorLinha[l2] << endl;
                        cout << endl;*/
                }
            }
        }
    }

    cout << roubo << endl;






    return 0;
}
