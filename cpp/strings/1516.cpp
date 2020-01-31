#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        if (n == m and n == 0) break;

        char img[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> img[i][j];
            }
        }

        int a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < a / n; k++) {
                for (int j = 0; j < m; j++) {
                    for (int l = 0; l < b / m; l++) {
                        cout << img[i][j];
                    }
                    if (j == m - 1) cout << endl;
                }
            }
        }

        cout << endl;
    }

    return 0;
}