#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        stack<char> s;
        int total = 0;

        for (char c : str) {
            if (c == '<') {
                s.push(c);
            }

            if (c == '>') {
                if (!s.empty() and s.top() == '<') {
                    s.pop();
                    total++;
                }
            }
        }

        cout << total << endl;
    }

    return 0;
}