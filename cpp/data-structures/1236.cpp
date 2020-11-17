#include <bits/stdc++.h>

using namespace std;

int find(string s, int i, int j) {
    for (i; i < j; i++) {
        if (s.at(i) == ' ' or s.at(i) == '0') {
            return i;
        }
    }

    return s.size();
}

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
    cur = find(s, 0, s.size() - 1);

    while (cur < s.size()) {
        int diff = find_diff(s, cur);
        int len = diff - cur;

        if (len >= 3) {
            if (len > 255) {
                len = 255;
                diff = cur + len;
            }

            string enc;
            enc += (s.at(cur) == ' ' ? '$' : '#');
            enc += len;

            s.replace(cur, len, enc);
            cur = diff - len + 2;

            continue;
        }

        cur = diff;
    }

    return s;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.get();

    while (n--) {
        string s;
        getline(cin, s);
        
        s = solve(s);

        cout << s << endl;
    }

    return 0;
}
