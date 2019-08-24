#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int testes;
    cin >> testes;

    while(testes--) {
        int c, d;
        cin >> c >> d;

        int total = ceil(pow(26, c)) * ceil(pow(10, d));

        if(c == 0 and d == 0) total = 0;

        cout << total << endl;
    }

    return 0;
}
