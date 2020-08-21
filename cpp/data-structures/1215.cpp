#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> words;
    string s;

    while (cin >> s) {

        string buffer = "";

        for (int i = 0; i < s.size(); i++) {
            if (!isalpha(s[i])) {
                if (!buffer.empty()) {
                    words.insert(buffer);
                }
                buffer = "";
            } else {
                buffer += tolower(s[i]);
            }
        }

        if (!buffer.empty()) {
            words.insert(buffer);
        }
    }

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}
