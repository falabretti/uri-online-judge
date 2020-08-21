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

int get_last(bool arr[], int n) {
    for (int i = 0; i < n; i++){
        if (!arr[i]) return i;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n and n) {
        pair<string, int> values[n];
        bool ref[n];
        memset(ref, false, sizeof(ref));

        for (int i = 0; i < n; i++) {
            string s;
            int x;

            cin >> s >> x;
            values[i] = make_pair(s, x);
        }

        reverse(values + 1, values + n);

        int cur = 0;

        for (int i = 0; i < n - 1; i++) {
            int k = values[cur].second;

            if (k % 2 == 0) {
                cur = go_up(ref, n, cur, k);
            } else {
                cur = go_down(ref, n, cur, k);
            }

            ref[cur] = true;
            k = values[cur].second;
        }

        int last = get_last(ref, n);
        printf("Vencedor(a): %s\n", values[last].first.c_str());
    }

    return 0;
}
