#include <iostream>

using namespace std;

int main() {

    int p, maletasEntrada[3][3], maletasDiferenca[3][3];
    int diferencas[9], contador = 0, repeticoes[5], contador2 = 0;

    cin >> p;

    while(p--) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> maletasEntrada[i][j];
            }
        }

        for(int l = 0; l < 3; l++) {
            for(int c = 0; c < 3; c++) {
                if(c == 0) {
                    maletasDiferenca[l][c] = abs(maletasEntrada[l][c] - maletasEntrada[l][c + 1]);
                } else {
                    maletasDiferenca[l][c] = abs(maletasEntrada[l][c] - maletasEntrada[l][c - 1]);
                }
                diferencas[contador] = maletasDiferenca[l][c];
                contador++;
            }
        }

        for(int p = 0; p < 8; p++) {
            if(diferencas[p] == diferencas[p + 1] and diferencas[p] != diferencas[p - 1]) {
                repeticoes[contador2] = diferencas[p];
                contador2++;
            }
        }

        cout << diferencas[0] << endl;
        cout << diferencas[1] << endl;
        cout << diferencas[2] << endl;
        cout << diferencas[3] << endl;
        cout << diferencas[4] << endl;







    }


    return 0;
}
