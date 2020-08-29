#include <bits/stdc++.h>

using namespace std;

typedef struct Spam {
    int start;
    int lb;
    int ub;
    string a1;
    string a2;
    string a3;
} Spam;

bool visited[22];
vector<int> adj[22];
int reach[22];

void dfs(int at) {

    if (visited[at]) {
        return;
    }

    visited[at] = true;
    reach[at] = adj[at].size();

    for (int next : adj[at]) {
        dfs(next);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while (cin >> n and n) {
        for (auto& vec : adj) vec.clear();

        for (int i = 1; i <= n; i++) {
            
            int v;
            while (cin >> v and v) {
                adj[i].push_back(v);
            }            
        }

        int p;
        int t1;
        int t2;

        string a1;
        string a2;
        string a3;

        vector<Spam> spams;

        while (cin >> p and p) {
            cin >> t1 >> t2 >> a1 >> a2 >> a3;
            spams.push_back({ p, t1, t2, a1, a2, a3 });
        }

        string names[n + 1];

        for (int i = 1; i <= n; i++) {
            cin >> names[i];
        }

        string results[n + 1][spams.size()];

        for (int i = 0; i < spams.size(); i ++) {
            memset(visited, 0, sizeof(visited));
            memset(reach, 0, sizeof(reach));

            Spam spam = spams[i];
            dfs(spam.start);

            for (int j = 1; j <= n; j++) {

                if (reach[j] < spam.lb) {
                    results[j][i] = spam.a1;
                } else if (reach[j] < spam.ub) {
                    results[j][i] = spam.a2;
                } else {
                    results[j][i] = spam.a3;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << names[i] << ": ";
            for (int j = 0; j < spams.size(); j++) {
                cout << results[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
