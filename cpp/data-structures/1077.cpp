#include <bits/stdc++.h>
using namespace std;

map<char, int> operators{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2},
                         {'^', 3}, {'(', 0}, {')', 0}};

int main() {
    int n;
    cin >> n;

    while (n--) {
        string line;
        cin >> line;

        stack<char> s;
        string out = "";

        for (char c : line) {
            if (operators.find(c) == operators.end()) {
                out += c;
            } else {
                if (c == '(') {
                    s.push(c);
                } else if (c == ')') {
                    while (s.top() != '(') {
                        out += s.top();
                        s.pop();
                    }
                    s.pop();
                } else {
                    if (s.empty() or operators.at(c) > operators.at(s.top())) {
                        s.push(c);
                    } else {
                        while (!s.empty() and
                               operators.at(c) <= operators.at(s.top())) {
                            out += s.top();
                            s.pop();
                        }
                        s.push(c);
                    }
                }
            }
        }

        while (!s.empty()) {
            out += s.top();
            s.pop();
        }

        cout << out << endl;
    }

    return 0;
}