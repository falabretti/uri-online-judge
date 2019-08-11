#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {

    ///freopen("2533.in", "r", stdin);

    cout << fixed << setprecision(4);
    int materias;
    double media, carga, totalCarga = 0, totalMedia = 0;

    while(scanf("%d\n", &materias) != EOF) {
        while(materias--) {
            cin >> media >> carga;
            totalCarga += carga;
            totalMedia += media * carga;
        }

        cout << totalMedia / (totalCarga * 100) << endl;
        totalCarga = 0;
        totalMedia = 0;
    }

    return 0;
}
