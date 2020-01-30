#include <bits/stdc++.h>

using namespace std;

int main() {

    // freopen("entrada.in", "r", stdin);
    int n, m;

    while(cin >> n >> m) {
        cout << n << ' ' << m << endl;
        if(n == 0 and m == 0) break;

        int values[n];

        for(int i = 0; i < n; i++) {
            cin >> values[i];
        }

        sort(values, values + n, [m](int a, int b) { 

            if(a % m == b % m) {
                if(a % 2 == 0 and b % 2 == 0) return a < b;                
                else if(a % 2 != 0 and b % 2 != 0) return a > b;                
                else return a % 2 != 0;                
            }
            
            return a % m < b % m;
        });

        for(int val : values) {
            cout << val << endl;
        }
    }


    return 0;
}