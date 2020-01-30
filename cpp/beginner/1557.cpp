#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    ///("1557.in", "r", stdin);

    int n;

    while(cin >> n) {
        if(n == 0) {
            break;
        }

        int m[n][n];
        int v = 1;

        for(int l = 0; l < n; l++) {
            for(int c = 0; c < n; c++) {
                m[l][c] = v;
                v = v * 2;
            }
            v = m[l][0] * 2;
        }

        int tamUltNum = 0;
        int ultValor = m[n - 1][n - 1];

        while(ultValor != 0) {
            tamUltNum++;
            ultValor = ultValor / 10;
        }

        int valor = 0;
        int tamNum = 0;
        string esp = " ";

        for(int lp = 0; lp < n; lp++) {
            for(int cp = 0; cp < n; cp++) {

                valor = m[lp][cp];
                tamNum = 0;

                while(valor != 0) {
                    tamNum++;
                    valor = valor / 10;
                }

                for(int p = 1; p <= tamUltNum - tamNum; p++) {
                    cout << esp;
                }

                cout << m[lp][cp];

                if(cp != n - 1) {
                    cout << esp;
                }
                else if(cp == n - 1) {
                    cout << endl;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
