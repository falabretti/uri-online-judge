#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1478.in", "r", stdin);

    int n;

    while(cin >> n) {
        if(n == 0) {
            break;
        }
        int m[n][n];
        for(int l = 0; l < n; l++) {
            int v = l + 1;
            for(int c = 0; c < n; c++) {
                m[l][c] = v;
                if(l == 0) {
                        v++;
                }
                else if(v > 1 and m[l][c - 1] > v or c == 0) {
                    v--;
                }
                else if(v == 1 and m[l][c - 1] > v){
                    v++;
                } else {
                v++;
                }
            }
        }

        for(int lp = 0; lp < n; lp++) {
            for(int cp = 0; cp < n; cp++) {
                if(m[lp][cp] > 99) {
                }
                else if(m[lp][cp] > 9) {
                    cout << " ";
                }
                else if(m[lp][cp] < 10) {
                    cout << "  ";
                }
                cout << m[lp][cp];
                if(cp == n - 1) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
