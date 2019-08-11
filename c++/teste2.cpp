#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int di, df, hi[3], hf[3], segi, segf, dif;

    scanf("Dia %d\n", &di);
    scanf("%d : %d : %d\n", &hi[0], &hi[1], &hi[2]);
    ///setbuf(stdin, NULL);
    scanf("Dia %d\n", &df);
    scanf("%d : %d : %d", &hf[0], &hf[1], &hf[2]);

    segi = hi[2] + hi[1] * 60 + hi[0] * 3600 + di * 3600 * 24;
    segf = hf[2] + hf[1] * 60 + hf[0] * 3600 + df * 3600 * 24;

    dif = segf - segi;

    cout << dif / (3600 * 24) << " dia(s)" << endl;
    dif = dif % (3600 * 24);
    cout << dif / 3600 << " hora(s)" << endl;
    dif = dif % 3600;
    cout << dif / 60 << " minuto(s)" << endl;
    cout << dif % 60 << " segundo(s)" << endl;

    return 0;
}

