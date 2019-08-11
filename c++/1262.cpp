#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1262.in", "r", stdin);
    string rastro;
    int processos;

    while(cin >> rastro >> processos) {
        int tam = rastro.size();
        int ciclos = 0;
        int cont = 0;

        for(int i = 0; i < tam; i++) {
            if(rastro[i] == 'W') {
                ciclos++;
                cont = 0;
            }
            if(rastro[i] == 'R') {
                if(rastro[i + 1] == 'W') {
                    ciclos++;
                } else {
                    cont++;
                }
                if(cont == processos) {
                    ciclos++;
                    cont = 0;
                }
                if(i == tam - 1 and cont != 0) {
                    ciclos++;
                }
            }
        }

        cout << ciclos << endl;
    }

    return 0;
}
