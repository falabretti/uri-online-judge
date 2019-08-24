#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int a, b;

    while(cin >> a >> b) {
        if(a == 0 and b == 0) break;

        int dif = b - a;
        int c = a - dif;

        cout << c << endl;
    }

    return 0;
}
