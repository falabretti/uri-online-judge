#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    int vf;
    int vg;

    while (cin >> d >> vf >> vg) {

        double f_time = 13. / vf;

        double dg = sqrt(d * d + 13 * 13);
        double g_time = dg / vg;

        printf(g_time < f_time ? "S\n" : "N\n");
    }

    return 0;
}
