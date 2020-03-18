#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

int counter;

void dfs(int v) {
    visited[v] = true;
    for (int a : adj[v]) {
        if (visited[a]) continue;
        counter++;
        dfs(a);
        counter++;
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        counter = 0;
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < 10000; i++) adj[i].clear();

        int n;
        cin >> n;

        int v, a;
        cin >> v >> a;

        for (int i = 0; i < a; i++) {
            int a, b;
            cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        dfs(n);
        cout << counter << endl;
    }

    return 0;
}
