#include <bits/stdc++.h>
using namespace std;

int seg_idx;
int visited[22];
int adj[22][22];
string tab = "  ";

void dfs(int v) {
    visited[v] = seg_idx;

    for (int a = 0; a < 22; a++) {
        if (adj[v][a] == 1) {
            if (visited[a] != -1) {
                printf("%s%d-%d\n", tab.c_str(), v, a);
                continue;
            }

            printf("%s%d-%d pathR(G,%d)\n", tab.c_str(), v, a, a);

            tab.insert(0, "  ");
            dfs(a);
            tab.erase(0, 2);
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int c = 1; c <= n; c++) {
        for (int i = 0; i < 22; i++) {
            for (int j = 0; j < 22; j++) adj[i][j] = 0;
            visited[i] = 0;
        }
        seg_idx = 0;

        int v, e;
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;

            adj[a][b] = 1;
            visited[a] = -1;
            visited[b] = -1;
        }

        printf("Caso %d:\n", c);
        for (int i = 0; i < v; i++) {
            if (visited[i] != -1) continue;
            dfs(i);
            printf("\n");
        }
    }

    return 0;
}
