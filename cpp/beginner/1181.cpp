#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("entrada.in", "r", stdin);

    cout << fixed << setprecision(1);
    double soma, m[12][12];
    int l;
    string t;
    soma = 0;

    cin >> l;
    cin >> t;

    for(int i = 0; i <= 11; i++) {
        for(int j = 0; j <= 11; j++) {
            cin >> m[i][j];
        }
    }
    for(int a = 0; a <= 11; a++) {
        soma += m[l][a];
    }

    if(t == "S") {
        cout << soma << endl;
    }
    if(t == "M") {
        cout << soma / 12.0 << endl;
    }

    return 0;
}
