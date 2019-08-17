#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int testes;
    cin >> testes;

    while(testes--) {
        int tam;
        cin >> tam;

        int tiros[tam];
        string pulos;

        for(int i = 0; i < tam; i++) {
            cin >> tiros[i];
        }

        int total_tiros = 0;

        for(int i = 0; i < tam; i++) {

            bool pulou = pulos[i] == 'J';
            int altura = tiros[i];

            if(not pulou and (altura == 1 or altura == 2)) total_tiros++;
            if(pulou and altura > 2) total_tiros++;
        }

        cout << total_tiros << endl;
    }

    return 0;
}
