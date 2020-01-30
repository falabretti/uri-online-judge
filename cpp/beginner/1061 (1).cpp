#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int dia1, h1, m1, s1, dia2, h2, m2, s2, d;

    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    setbuf(stdin, NULL);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    d = ((dia2 * 86400) + (h2 * 3600) + (m2 * 60) + s2) - ((dia1 * 86400) + (h1 * 3600) + (m1 * 60) + s1);

    cout << d / (86400) << " dia(s)" << endl;
    d = d % 86400;
    cout << d / 3600 << " hora(s)" <<endl;
    d = d % 3600;
    cout << d / 60 << " minuto(s)" << endl;
    d = d % 60;
    cout << d << " segundo(s)" << endl;

    return 0;
}
