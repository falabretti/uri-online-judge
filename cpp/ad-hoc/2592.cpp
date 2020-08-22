#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    while (cin >> n and n) {

        int count = 0;

        while (true) {
            count++;

            int prev = 0;
            bool sorted = true;

            for (int i = 0; i < n; i++) {
                int v;
                cin >> v;

                sorted = sorted && v > prev;
                prev = v;
            }

            if (sorted) {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
