#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2) {
        if (x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0) break;

        int moves;

        if (x1 == x2 and y1 == y2)
            moves = 0;
        else if (x1 == x2 or y1 == y2)
            moves = 1;
        else if (abs(x1 - x2) == abs(y1 - y2))
            moves = 1;
        else
            moves = 2;

        cout << moves << "\n";
    }

    return 0;
}