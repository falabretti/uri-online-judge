#include <bits/stdc++.h>

using namespace std;

int find_diff(string s, int i) {
    char target = s.at(i++);

    for (i; i < s.size(); i++) {
        if (s.at(i) != target) {
            return i;
        }
    }

    return s.size();
}

string solve(string s) {

    int cur = 0;
    int last = 0;

    while (cur < s.size()) {
        int diff = find_diff(s, cur);
        int len = diff - cur;

        if (len > 1) {
            if (len > 9) {
                len = 9;
                diff = cur + len;
            }

            if (cur != last) {
                s.insert(s.begin() + last, '1');
                s.insert(s.begin() + cur + 1, '1');

                int end = cur + 1;
                for (int i = last + 1; i < end; i++) {
                    if (s.at(i) == '1') {
                        s.insert(s.begin() + i, '1');
                        i++;
                        end++;
                        cur++;
                        diff++;
                    }
                }

                cur += 2;
                diff += 2;
            }

            string enc;
            enc += len + 48;
            enc += s.at(cur);

            s.replace(cur, len, enc);
            cur = diff - len + 2;
            last = cur;

            continue;
        }

        cur = diff;
    }

    if (cur != last) {
        s.insert(s.begin() + last, '1');
        s.insert(s.begin() + cur + 1, '1');

        int end = cur + 1;
        for (int i = last + 1; i < end; i++) {
            if (s.at(i) == '1') {
                s.insert(s.begin() + i, '1');
                i++;
                end++;
            }
        }
    }

    return s;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (getline(cin, s)) {
        s = solve(s);
        cout << s << endl;
    }

    return 0;
}
