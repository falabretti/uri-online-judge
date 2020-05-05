#include <bits/stdc++.h>
using namespace std;

map<char, int> operators{{'^', 6}, {'*', 5}, {'/', 5}, {'+', 4}, {'-', 4},
                         {'>', 3}, {'<', 3}, {'=', 3}, {'#', 3}, {'.', 2},
                         {'|', 1}, {'(', 0}, {')', 0}};

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    string line;
    while (cin >> line) {
        stack<char> s;
        string out = "";
        bool success = true;
        bool op;
        bool first = true;

        for (char c : line) {
            if (!success) {
                break;
            }

            if (operators.find(c) == operators.end()) {
                if (!isalnum(c)) {
                    success = false;
                    cout << "Lexical Error!" << endl;
                    break;
                }

                if (!first and !op) {
                    success = false;
                    cout << "Syntax Error!" << endl;
                    break;
                }
                first = false;
                op = false;

                out += c;
            } else {
                if (c == '(') {
                    s.push(c);
                } else if (c == ')') {
                    // cout << c << endl;
                    if (s.empty()) {
                        success = false;
                        cout << "Syntax Error!" << endl;
                        break;
                    }

                    while (s.top() != '(') {
                        if (s.top() == ')') {
                            success = false;
                            cout << "Syntax Error!" << endl;
                            break;
                        }

                        out += s.top();
                        s.pop();

                        if (s.empty()) {
                            success = false;
                            cout << "Syntax Error!" << endl;
                            break;
                        }
                    }

                    s.pop();
                } else {
                    if (!first and op) {
                        success = false;
                        cout << "Syntax Error!" << endl;
                        break;
                    }
                    first = false;
                    op = true;

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

        while (success and !s.empty()) {
            if (s.top() == '(' or s.top() == ')') {
                success = false;
                cout << "Syntax Error!" << endl;
            }
            out += s.top();
            s.pop();
        }

        if (success) {
            cout << out << endl;
        }
    }

    return 0;
}