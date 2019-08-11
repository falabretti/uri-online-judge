#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    double v, d, h, r, a;


    while(scanf("%lf", &v) != EOF) {

        cin >> d;

        r = d / 2;
        a = 3.14 * pow(r, 2);
        h = v / a;

        cout << "ALTURA = " << h << endl;
        cout << "AREA = " << a << endl;

    }

    return 0;
}
