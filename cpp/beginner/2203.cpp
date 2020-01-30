#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    double x1, y1, x2, y2, v, r1, r2;

    while(cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2) {
        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double a = r1 + r2;

        d += v * 1.5;

        if(a >= d) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}
