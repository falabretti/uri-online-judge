#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1190.in", "r", stdin);
    cout << fixed << setprecision(1);
    double soma, total, m[12][12];
    soma = 0;
    total = 0;
    string o;

    cin >> o;

    for(int i = 0; i <= 11; i++) {
        for(int j = 0; j <= 11; j ++) {
            cin >> m [i][j];
        }
    }
    for(int l = 0; l <= 11; l++) {
        for(int c = 0; c <= 11; c++) {
            if(c > l and l > 11 - c) {
                soma += m[l][c];
                total++;
            }
        }
    }

    if(o == "S") {
        cout << soma << endl;
    }
    if(o == "M") {
        cout << soma / total << endl;
    }

    return 0;
}
