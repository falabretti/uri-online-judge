#include <bits/stdc++.h>

using namespace std;

typedef struct Point {
    int x;
    int y;
} Point;

void read_points(Point points[], int n) {

    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;
}

void move(Point& pos, Point& dest) {

    int diff_x = dest.x - pos.x;
    int diff_y = dest.y - pos.y;

    pos.x += (diff_x > 0) - (diff_x < 0);
    pos.y += (diff_y > 0) - (diff_y < 0);
}

bool is_equal(Point& a, Point& b) {
    return a.x == b.x and a.y == b.y;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {

        Point giovanni;
        Point leporello;
    
        cin >> giovanni.x >> giovanni.y;
        cin >> leporello.x >> leporello.y;

        int l_size;
        cin >> l_size;

        Point leporello_route[l_size];
        read_points(leporello_route, l_size);

        int g_size;
        cin >> g_size;

        Point giovanni_route[g_size];
        read_points(giovanni_route, g_size);

        int next_g = 0;
        int next_l = 0;

        bool secure = false;

        while (true) {

            move(giovanni, giovanni_route[next_g]);
            move(leporello, leporello_route[next_l]);

            if (is_equal(giovanni, giovanni_route[next_g])) {
                next_g++;
            }

            if (is_equal(leporello, leporello_route[next_l])) {
                next_l++;
            }

            if (next_l == l_size) {
                secure = true;
                break;
            }

            if (is_equal(giovanni, leporello)) {
                secure = false;
                break;
            }

            if (next_g == g_size) {
                secure = true;
                break;
            }
        }

        printf(secure ? "Yes\n" : "No\n");

        if (n != 0)
            printf("\n");
    }

    return 0;
}
