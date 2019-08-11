#include <iostream>
#include <cstdio>
using namespace std;
int main() {

    ///freopen("1061.in", "r", stdin);

    int d1, h1, m1, s1, d2, h2, m2, s2, seg1, seg2, dif;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    fflush(stdin);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    /*
    seg1 = s1 + m1 * 60 + h1 * 3600 + d1 * 3600 * 24;
    seg2 = s2 + m2 * 60 + h2 * 3600 + d2 * 3600 * 24;

    dif = seg2 - seg1;



        cout << dif / (24 * 3600) << " dia(s)" << endl;
        dif = dif % (24 * 3600);
        cout << dif / 3600 << " hora(s)" << endl;
        dif = dif % 3600;
        cout << dif / 60 << " minuto(s)" << endl;
        dif = dif % 60;
        cout << dif << " segundo(s)" << endl;*/

    ///segundo
    if(m2 == m1) {
        s = s2 - s1;
    }
    else if(m2 > m1) {
        s = (m2 - m1) % 2;
    }

    return 0;
}
