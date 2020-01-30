#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int n;

    while(cin >> n) {
        if(n == 0) break;

        int seg = 0;
        int anterior;

        while(n--) {
            int x;
            cin >> x;

            if(seg == 0) seg += 10;
            else {
                int dif = x - anterior;
                if(dif >= 10) seg += 10;
                else seg += dif;
            }

            anterior = x;
        }

        cout << seg << endl;
    }

    return 0;
}

