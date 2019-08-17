#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    cout << fixed << setprecision(2);

    double angulo, distancia, elfo;

    while(cin >> angulo >> distancia >> elfo) {

        double cateto = distancia * tan(angulo * M_PI / 180.0);
        cout << (cateto + elfo) * 5 << endl;
    }

    return 0;
}
