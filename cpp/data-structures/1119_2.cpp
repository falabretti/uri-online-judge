#include <bits/stdc++.h>
using namespace std;

int go_up(bool arr[], int size, int pos, int k) {
    int target = pos;
    for (int i = 0; i < k;) {
        target++;
        if (target == size) target = 0;
        if (!arr[target]) i++;
    }

    return target;
}

int go_down(bool arr[], int size, int pos, int k) {
    int target = pos;
    for (int i = 0; i < k;) {
        target--;
        if (target == -1) target = size - 1;
        if (!arr[target]) i++;
    }

    return target;
}

int main() {
    int n, k, m;
    while (cin >> n >> k >> m and n and k and m) {
        int values[n];
        bool ref[n];

        for (int i = 0; i < n; i++) values[i] = i + 1;
        memset(ref, false, sizeof(ref));

        int count = 0;
        int up = -1;
        int down = n;

        while (count < n) {
            up = go_up(ref, n, up, k);
            down = go_down(ref, n, down, m);

            ref[up] = true;
            ref[down] = true;

            if (up == down) {
                printf("%3d", values[up]);
                count++;
            } else {
                printf("%3d%3d", values[up], values[down]);
                count += 2;
            }

            printf(count < n ? "," : "\n");
        }
    }

    return 0;
}
