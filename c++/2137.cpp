#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("2137.in", "r", stdin);
    int n;

    while(cin >> n) {
        string entrada[n];

        for(int i = 0; i < n; i++) {
            cin >> entrada[i];
        }

        sort(entrada, entrada + n);
        for(int i = 0; i < n; i++) {
            cout << entrada[i] << endl;
        }
    }

    return 0;
}
