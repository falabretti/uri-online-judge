#include <bits/stdc++.h>
using namespace std;

int component_idx;
int visited[30];
vector<int> adj[30];

int char_to_int(char c) { return (int)c - 97; }
char int_to_char(int n) { return (char)n + 97; }

void dfs(int v) {
    visited[v] = component_idx;
    for (int a : adj[v]) {
        if (visited[a] != -1) continue;
        dfs(a);
    }
}

int main() {
    int n;
    cin >> n;

    for (int c = 1; c <= n; c++) {
        for (int i = 0; i < 30; i++) {
            adj[i].clear();
            visited[i] = -1;
        }
        component_idx = 0;

        int v, e;
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            char a, b;
            cin >> a >> b;

            adj[char_to_int(a)].push_back(char_to_int(b));
            adj[char_to_int(b)].push_back(char_to_int(a));
        }

        for (int i = 0; i < v; i++) {
            if (visited[i] != -1) continue;
            dfs(i);
            component_idx++;
        }

        printf("Case #%d:\n", c);
        for (int i = 0; i < component_idx; i++) {
            for (int j = 0; j < v; j++) {
                if (visited[j] == i) printf("%c,", int_to_char(j));
            }
            printf("\n");
        }
        printf("%d connected components\n\n", component_idx);
    }

    return 0;
}
