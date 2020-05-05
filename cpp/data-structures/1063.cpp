#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n and n != 0) {
        char in[n];
        char order[n];

        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> order[i];

        stack<char> s;
        int next_in = 0;
        int next_order = 0;

        while (true) {
            if (!s.empty() and next_order < n and
                order[next_order] == s.top()) {
                s.pop();
                next_order++;
                cout << "R";
            } else if (next_in < n) {
                s.push(in[next_in++]);
                cout << "I";
            } else {
                break;
            }
        }

        if (!s.empty()) {
            cout << " Impossible";
        }
        cout << endl;
    }

    return 0;
}
