#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1184.in", "r", stdin);
    cout << fixed << setprecision(1);
    double soma, m[12][12];
    string o;
    soma = 0;

    cin >> o;

    for(int i = 0; i <=11; i++) {
        for(int j = 0; j <= 11; j++) {
            cin >> m[i][j];
        }
    }
    for(int o = 0; o <= 11; o++) {
        for(int p = 0; p <= 11; p++) {
            if(o > p) {
                soma += m[o][p];
            }
        }
    }

    if(o == "S") {
        cout << soma << endl;
    }
    if(o == "M") {
        cout << soma / 66.0 << endl;
    }

    return 0;
}
