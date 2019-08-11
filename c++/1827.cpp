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

                if(l == c) {
                    m[l][c] = 2;
                }
                else if(l == (n - 1) - c) {
                    m[l][c] = 3;
                } else {
                    m[l][c] = 0;
                }
                if(l == n / 3 or c == n / 3) {
                    m[l][c] = 1;
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
    }


    return 0;
}
