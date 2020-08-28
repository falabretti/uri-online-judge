#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> jewels;

    string s;
    while (cin >> s) {
        jewels.insert(s);
    }

    cout << jewels.size() << '\n';

    return 0;
}
