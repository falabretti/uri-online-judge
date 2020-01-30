#include <iostream>

using namespace std;

int main() {

    int n;

    while(cin >> n) {
        if(n == NULL) {
            break;
        }

        int m[n][n];
        for(int l = 0; l < n; l++) {
            for(int c = 0; c < n; c++) {

                m[l][c] = 1;

                if(l < n/3 or c < n/3 or (n-1) - l < n/3 or (n-1) - c < n/3) {
                    m[l][c] = 0;
                }
                if(l == c and m[l][c] != 1) {
                    m[l][c] = 2;
                }
                if(l == (n - 1) - c and m[l][c] != 1) {
                    m[l][c] = 3;
                }

                if(l == (n - 1) / 2 and c == (n - 1) / 2) {
                    m[l][c] = 4;
                }
            }
        }

        for(int lp = 0; lp < n; lp++) {
            for(int cp = 0; cp < n; cp++) {
                cout << m[lp][cp];
                if(cp == n - 1) {
                    cout << endl;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
