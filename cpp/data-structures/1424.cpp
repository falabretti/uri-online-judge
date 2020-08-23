#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;

    while (cin >> n >> m) {

        map<int, vector<int>> data;

        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;

            data[v].push_back(i + 1);
        }

        while (m--) {
            int k;
            int v;

            cin >> k >> v;

            auto& idxs = data[v];

            if (idxs.empty() or k > idxs.size()) {
                cout << 0 << endl;
            } else {
                cout << idxs[k - 1] << endl;
            }
        }
    }

    return 0;
}
