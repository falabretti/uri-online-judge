#include <bits/stdc++.h>
using namespace std;

int main() {
    string exp;
    while (cin >> exp) {
        stack<char> s;
        bool correct = true;

        for (char c : exp) {
            if (c == '(') {
                s.push(c);
            }

            if (c == ')') {
                if (s.empty() or s.top() != '(') {
                    correct = false;
                    break;
                }

                s.pop();
            }
        }

        if (!s.empty()) {
            correct = false;
        }

        cout << (correct ? "correct" : "incorrect") << endl;
    }

    return 0;
}