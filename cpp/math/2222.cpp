#include <bits/stdc++.h>

using namespace std;

#define MAX 61

int count(int matrix[][MAX], int a, int b, int op) {

    int count = 0;

    for (int j = 0; j < MAX; j++) {
        if (op == 1) {
            count += matrix[a][j] and matrix[b][j];
        } else {
            count +=  matrix[a][j] or matrix[b][j];
        }
    }

    return count;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        int len;
        cin >> len;

        int matrix[len][MAX];
        memset(matrix, 0, sizeof(matrix));

        for (int i = 0; i < len; i++) {
            int size;
            cin >> size;

            for (int j = 0; j < size; j++) {
                int v;
                cin >> v;

                matrix[i][v] = 1;
            }
        }

        int q;
        cin >> q;

        while (q--) {
            int op;
            int a;
            int b;

            cin >> op >> a >> b;

            int res = count(matrix, a - 1, b - 1, op);
            cout << res << endl;
        }
    }

    return 0;
}
