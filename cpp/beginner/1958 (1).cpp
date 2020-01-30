#include <cstdio>
#include <iostream>

using namespace std;

int main () {

    double n;
    char valor [110];

    scanf("%LE", &n);

    sprintf(valor, "%+.4LE\n", n);
    // 9, 10, 11

    for(int i = 0; i <= 8; i++) {
        cout << valor[i];
    }

    if(valor[9] == '0') {
        cout << valor[10] << valor[11];
    } else {
        cout << valor[9] << valor[10] << valor[11];
    }

    return 0;
}
