#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;

        int notes[n];
        for (int i = 0; i < n; i++) cin >> notes[i];

        double avg = accumulate(notes, notes + n, sum) / (double)n;

        if (avg - (int)avg != 0) {
            cout << -1 << endl;
            continue;
        }

        int diff[n];
        int sum_neg = 0, sum_pos = 0;
        for (int i = 0; i < n; i++) {
            diff[i] = notes[i] - avg;

            if (diff[i] > 0)
                sum_pos += diff[i];
            else
                sum_neg += diff[i];
        }

        if (sum_pos == abs(sum_neg))
            cout << sum_pos + 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
