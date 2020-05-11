#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int efficiency[n];
    for (int i = 0; i < n; i++) cin >> efficiency[i];

    priority_queue<pair<int, int>> checkout;
    for (int i = 0; i < n; i++) checkout.push(make_pair(0, -i));

    int greatest = 0;

    while (m--) {
        int q;
        cin >> q;

        auto next = checkout.top();
        int acc_time = -next.first;
        int idx = -next.second;
        checkout.pop();

        int new_time = q * efficiency[idx] + acc_time;
        checkout.push(make_pair(-new_time, -idx));

        if (new_time > greatest) greatest = new_time;
    }

    cout << greatest << endl;

    return 0;
}
