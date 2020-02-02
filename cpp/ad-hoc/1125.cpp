#include <bits/stdc++.h>
using namespace std;

struct Pilot {
    int id;
    int pt;
};

typedef struct Point Point;

int main() {
    int g, p;
    while (cin >> g >> p and g != 0 and p != 0) {
        int results[g][p];

        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                cin >> results[i][j];
            }
        }

        int s;
        cin >> s;

        for (int i = 0; i < s; i++) {
            int k;
            cin >> k;

            int points[k];
            for (int i = 0; i < k; i++) cin >> points[i];

            Pilot ranking[p];
            for (int i = 0; i < p; i++) ranking[i] = {i, 0};

            int greater = 0;

            for (int i = 0; i < g; i++) {
                for (int j = 0; j < p; j++) {
                    int pos = results[i][j] - 1;
                    ranking[j].pt += (pos < k ? points[pos] : 0);
                    greater = max(greater, ranking[j].pt);
                }
            }

            sort(ranking, ranking + p,
                 [](Pilot a, Pilot b) { return a.id < b.id; });

            bool first = true;
            for (Pilot p : ranking) {
                if (p.pt == greater) {
                    if (first)
                        first = false;
                    else
                        cout << ' ';

                    cout << p.id + 1;
                }
            }
            cout << endl;
        }
    }

    return 0;
}