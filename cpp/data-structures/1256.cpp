#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        int m;
        int c;

        cin >> m >> c;

        vector<int> hash[m];

        while (c--) {
            int key;
            cin >> key;

            int idx = key % m;
            hash[idx].push_back(key);
        }

        for (int i = 0; i < m; i++) {
            printf("%d -> ", i);

            for (int key : hash[i]) 
                printf("%d -> ", key);

            printf("\\\n");
        }

        if (n != 0)
            printf("\n");
    }

    return 0;
}
