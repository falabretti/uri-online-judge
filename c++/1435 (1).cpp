#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1435.in", "r", stdin);

    int n;

    while(cin >> n) {
        if(n == 0) {
            break;
        }
        int m[n][n];
        int v = 1, i = 0, f = n -1;
        for(int j = 0; j < n; j++) {
            for(int l = i; l <= f; l++) {
                for(int c = i; c <= f; c++) {
                    if(l == i or c == i or l == f or c == f) {
                        m[l][c] = v;
                    }
                }
            }
            f--;
            i++;
            v++;
        }

        for(int lp = 0; lp < n; lp++) {
            for(int cp = 0; cp < n; cp++) {
                if(m[lp][cp] >= 10){
                    cout << " " << m[lp][cp];
                }
                if(m[lp][cp] < 10){
                    cout << "  " << m[lp][cp];
                }
                if(cp == n - 1){
                    cout << endl;
                } else {
                cout << " ";}
            }

        }
        cout << endl;
    }

    return 0;
}
