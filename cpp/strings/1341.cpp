#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

typedef struct Point Point;

map<char, Point> moves = {
    {'N', {-1, 0}},
    {'S', {1, 0}},
    {'E', {0, 1}},
    {'W', {0, -1}},
};

int h, w;
char grid[25][25];

string calc_moves() {
    string s = "";

    int n, x, y;
    cin >> n >> x >> y;

    Point cur_pos = {x, y};
    s += grid[cur_pos.x][cur_pos.y];

    for (int i = 0; i < n; i++) {
        char move;
        cin >> move;

        cur_pos.x += moves.at(move).x;
        cur_pos.y += moves.at(move).y;

        s += grid[cur_pos.x][cur_pos.y];
    }

    return s;
}

int lcs(string a, string b) {
    if (a.size() == 0 or b.size() == 0) return 0;

    if (a[a.size() - 1] == b[b.size() - 1])
        return 1 + lcs(a.substr(0, a.size() - 1), b.substr(0, b.size() - 1));
    else
        return max(lcs(a.substr(0, a.size() - 1), b),
                   lcs(a, b.substr(0, b.size() - 1)));
}

int main() {
    int t;
    cin >> t;

    for (int k = 1; k <= t; k++) {
        cin >> h >> w;

        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                cin >> grid[i][j];
            }
        }

        string sa = calc_moves();
        string sb = calc_moves();
        int lcs_size = lcs(sa, sb);

        int dif_a = sa.size() - lcs_size;
        int dif_b = sb.size() - lcs_size;

        printf("Case %d: %d %d\n", k, dif_a, dif_b);
    }

    return 0;
}