#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n and n != 0) {
        cin.get();

        while (true) {
            string line;
            getline(cin, line);

            if (line == "0") {
                cout << endl;
                break;
            }

            stringstream ss(line);
            string token;

            int order[n];
            int idx = 0;

            while (ss >> token) order[idx++] = strtol(token.c_str(), NULL, 10);
            idx = 0;

            int wagon = 1;
            stack<int> s;
            vector<int> exit;

            while (true) {
                if (wagon <= n and wagon <= order[idx]) {
                    s.push(wagon++);
                }

                if (idx < n and order[idx] == s.top()) {
                    exit.push_back(s.top());
                    s.pop();
                    idx++;
                }

                if (!s.empty() and s.top() > order[min(idx, n)]) break;
                if (exit.size() == n) break;
            }

            cout << (exit.size() == n ? "Yes" : "No") << endl;
        }
    }

    return 0;
}
