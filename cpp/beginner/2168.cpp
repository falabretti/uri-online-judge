#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("2168.in", "r", stdin);

    int n, contador = 0;

    cin >> n;

    int quadras[n+1][n+1];

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            cin >> quadras[i][j];
        }
    }

    for(int l = 0; l < n; l++) {
        for(int c = 0; c < n; c++) {
            if(quadras[l][c] == 1) {
                contador++;
            }
            if(quadras[l][c + 1] == 1) {
                contador++;
            }
            if(quadras[l + 1][c] == 1) {
                contador++;
            }
            if(quadras[l + 1][c + 1] == 1) {
                contador++;
            }
            if(contador >= 2) {
                cout << 'S';
            } else {
                cout << 'U';
            }
            contador = 0;
        }
        cout << endl;
    }



    return 0;
}
