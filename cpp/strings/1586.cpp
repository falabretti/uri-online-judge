#include <bits/stdc++.h>
using namespace std;

int n;
string arr[1012345];
int64_t strength[1012345];

int64_t calc(int target) {
    int64_t a = 0;
    int64_t b = 0;

    for (int j = target, k = target + 1; j >= 0 or k < n;) {
        if (j >= 0) {
            a += (strength[j] * (target - j + 1));
        }

        if (k < n) {
            b += (strength[k] * (k - target));
        }

        j--;
        k++;
    }

    return a - b;
}

int bs(int start, int end) {
    if (start <= end) {
        int mid = (start + end) / 2;

        int64_t res = calc(mid);

        if (res < 0)
            return bs(mid + 1, end);
        else if (res > 0)
            return bs(start, mid - 1);
        else
            return mid;
    }

    return -1;
}

int main() {
    while (cin >> n and n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            strength[i] = 0;
            for (char c : arr[i]) {
                strength[i] += (int)c;
            }
        }

        int sol = bs(0, n - 1);

        if (sol != -1)
            cout << arr[sol] << endl;
        else
            cout << "Impossibilidade de empate." << endl;
    }

    return 0;
}