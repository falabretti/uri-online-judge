#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b and a != 0 and b != 0) {
        int c1[a], c2[b];

        for (int i = 0; i < a; i++) cin >> c1[i];
        for (int i = 0; i < b; i++) cin >> c2[i];

        set<int> s1(c1, c1 + a);
        set<int> s2(c2, c2 + b);

        vector<int> intersec;
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                         back_inserter(intersec));

        int smaller_s = s1.size() < s2.size() ? s1.size() : s2.size();
        int max_share = smaller_s - intersec.size();

        cout << max_share << "\n";
    }

    return 0;
}