#include <bits/stdc++.h>

using namespace std;

#define MAX 5000

int n;
int m;
char image[MAX][MAX];

int next_x[] = { -1, 1, 0, 0 };
int next_y[] = { 0, 0, -1, 1 };

bool is_valid(int x, int y) {

    return x >= 0 and x < n
            and y >= 0 and y < m
            and image[x][y] == '.';
}

void dfs(int x, int y) {

    stack<pair<int, int>> s;
    s.push({ x, y });

    while (!s.empty()) {

        auto [x, y] = s.top();
        s.pop();

        if (!is_valid(x, y)) {
            continue;
        }

        image[x][y] = 'o';

        for (int i = 0; i < 4; i++) {
            s.push({ x + next_x[i], y + next_y[i] });
        }
    }
}

int count() {

    int c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (is_valid(i, j)) {
                c++;
                dfs(i, j);
            }
        }
    }

    return c;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", image[i]);
    }

    int res = count();
    printf("%d\n", res);

    return 0;
}
