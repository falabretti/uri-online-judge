#include <iostream>

using namespace std;

int main () {

    int a, b, troco, notas = 0;

    while(cin >> a >> b) {
            if(a == 0 and b == 0) {
                break;
            }

        troco = b - a;

        while(notas < 2 and troco >= 4 and troco <= 200) {

            if(troco >= 100) {
                troco -= 100;
                notas++;
            }
            if(troco >= 50 and troco < 100) {
                troco -= 50;
                notas++;
            }
            if(troco >= 20 and troco < 50) {
                troco -= 20;
                notas++;
            }
            if(troco >= 10 and troco < 20) {
                troco -= 10;
                notas++;
            }
            if(troco >= 5 and troco < 10) {
                troco -= 5;
                notas++;
            }
            if(troco >= 2 and troco < 5) {
                troco -= 2;
                notas++;
            }
        }

        if(notas == 2 and troco == 0) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
        notas = 0;

    }

    return 0;
}
