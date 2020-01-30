#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1182.in", "r", stdin);
    cout << fixed << setprecision(1);
    double soma, m[12][12];
    int c;
    string t;
    soma = 0;

    cin >> c;
    cin >> t;

    for(int i = 0; i <= 11; i++) {
        for(int j = 0; j <= 11; j++) {
            cin >> m[i][j];
        }
    }
    for(int p = 0; p <= 11; p++) {
        soma += m[p][c];
    }

    if(t == "S") {
        cout << soma << endl;
    }
    if(t == "M") {
        cout << soma / 12.0 << endl;
    }

    return 0;
}
