#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1836.in", "r", stdin);

    int t;
    int bs, iv, ev;
    string nome;
    int level;
    string atr;
    int valor;

    cin >> t;

    for(int i = 1; i <= t; i++) {
        cin >> nome >> level;
        cout << "Caso #" << i << ": " << nome << " nivel " << level << endl;
        for(int j = 1; j <= 4; j++) {
            cin >> bs >> iv >> ev;

            if(j == 1) {
                atr = "HP";
            }
            else if(j == 2) {
                atr = "AT";
            }
            else if(j == 3) {
                atr = "DF";
            }
            else if(j == 4) {
                atr = "SP";
            }

            if(j == 1) {
                valor = (((iv + bs + sqrt(ev) / 8 + 50) * level) / 50) + 10;
            } else {
                valor = (((iv + bs + sqrt(ev) / 8) * level) / 50) + 5;
            }
            cout << atr << ": " << valor << endl;
        }
    }
}
