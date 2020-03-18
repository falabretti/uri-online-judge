#include <bits/stdc++.h>
using namespace std;

struct Pilot {
    int start;
    int finish;
};

typedef struct Pilot Pilot;

Pilot positions[25];

int n;

Pilot find_pilot(int target) {
    Pilot* ret = find_if(positions + 1, positions + n + 1,
                         [target](Pilot a) { return a.start == target; });
    return *ret;
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            int p;
            cin >> p;
            positions[p].start = i;
        }
        for (int i = 1; i <= n; i++) {
            int p;
            cin >> p;
            positions[p].finish = i;
        }

        // sort(positions + 1, positions + n + 1, [](Pilot a, Pilot b) {
        //     return a.finish < b.finish;
        // });

        for (int i = 1; i <= n; i++) {
            cout << positions[i].start << ' ' << positions[i].finish << endl;
            while (positions[i].finish != positions[i].start) {
                
                int next_pos = positions[i].finish < positions[i].start
                                   ? positions[i].start - 1
                                   : positions[i].start + 1;
                Pilot prev = find_pilot(next_pos);
            }
        }
    }

    return 0;
}
