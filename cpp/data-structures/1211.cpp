#include <bits/stdc++.h>

using namespace std;

int first_diff(string a, string b) {

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return i;
    }

    return a.size();
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while (cin >> n) {

        string numbers[n];

        for (int i = 0; i < n; i++)
            cin >> numbers[i];

        sort(numbers, numbers + n);

        int length = numbers[0].size();
        int total = 0;

        for (int i = 1; i < n; i++)
            total += first_diff(numbers[i], numbers[i - 1]);

        cout << total << endl;
    }

    return 0;
}
