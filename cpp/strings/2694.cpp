#include <iostream>
#include <cstdio>

using namespace std;

int numero(char num) {

    int i;
    i = num - 48;

    return i;
}

int main() {

    //freopen("2694.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {

        string entrada;
        int num1 = 0, num2 = 0, num3 = 0;

        cin >> entrada;

        num1 = numero(entrada[2]) * 10 + numero(entrada[3]);
        num2 = numero(entrada[5]) * 100 + numero(entrada[6]) * 10 + numero(entrada[7]);
        num3 = numero(entrada[11]) * 10 + numero(entrada[12]);

        //cout << num1 << endl;
        //cout << num2 << endl;
        //cout << num3 << endl;
        cout << num1 + num2 + num3 << endl;
    }

    return 0;
}
