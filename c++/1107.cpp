#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int altura, comprimento;

    while(cin >> altura >> comprimento) {
        if(altura == 0 and comprimento == 0) break;

        int soma = 0;
        int anterior;

        for(int i = 0; i < comprimento; i++) {
            int x;
            cin >> x;

            if(i == 0) {
                soma += altura - x;
            }
            else if(x < anterior) {
                soma += anterior - x;
            }

            anterior = x;
        }

        cout << soma << endl;
    }

    return 0;
}
