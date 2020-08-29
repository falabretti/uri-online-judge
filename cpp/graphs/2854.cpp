#include <bits/stdc++.h>

using namespace std;

map<string, bool> visited;
map<string, vector<string>> adj;

void dfs(string at) {

    if (visited[at])
        return;

    visited[at] = true;

    for (string next : adj[at]) {
        dfs(next);
    }
}

int count() {

    int c = 0;

    for (auto [cur, _] : adj) {
        if (!visited[cur]) {
            c++;
            dfs(cur);
        }
    }

    return c;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    int n;
    cin >> m >> n;

    while (n--) {
        string a;
        string _;
        string b;

        cin >> a >> _ >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int res = count();
    cout << res << "\n";

    return 0;
}
