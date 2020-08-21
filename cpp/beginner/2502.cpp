#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, n;
    while (cin >> c >> n) {
        cin.get();

        string c1, c2;
        getline(cin, c1);
        getline(cin, c2);

        map<char, char> dict;
        for (int i = 0; i < c; i++) {
            dict.insert(make_pair((char)tolower(c1[i]), (char)tolower(c2[i])));
            dict.insert(make_pair((char)tolower(c2[i]), (char)tolower(c1[i])));
        }

        while (n--) {
            string s;
            getline(cin, s);

            for (char c : s) {
                auto res = dict.find(tolower(c));

                if (res == dict.end()) {
                    cout << c;
                    continue;
                }

                if (isupper(c)) {
                    cout << (char)toupper(res->second);
                } else {
                    cout << res->second;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
