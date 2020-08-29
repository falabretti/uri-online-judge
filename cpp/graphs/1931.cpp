#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int, int> edge;
typedef vector<edge> adj_list;

void add_edge(adj_list adj[], int v, int u, int w) {

    adj[v].push_back(make_pair(u, w));
    adj[u].push_back(make_pair(v, w));
}

void transform_edges(adj_list adj[], adj_list new_adj[], int v_size) {

    for (int i = 1; i < v_size; i++) {

        adj_list& a = adj[i];

        for (auto [v, w] : a) {            
            for (auto [kv, kw] : adj[v]) {
                new_adj[i].push_back(make_pair(kv, w + kw));
            }
        }
    }
}

int dijkstra(adj_list adj[], int v_size, int src, int dest) {

    priority_queue<edge, vector<edge>, greater<edge>> pq;
    vector<int> dist(v_size, INF);
    vector<bool> extracted(v_size, false);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {

        int cur = pq.top().second;
        pq.pop();
        extracted[cur] = true;

        if (cur == dest) {
            break;
        }

        for (auto [v, w] : adj[cur]) {

            if (not extracted[v] and dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist[dest] != INF ? dist[dest] : -1;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    int v;

    scanf("%d %d", &c, &v);

    adj_list adj[c + 1];

    while (v--) {
        int u;
        int t;
        int g;

        scanf("%d %d %d", &u, &t, &g);

        add_edge(adj, u, t, g);
    }

    adj_list adj_paired[c + 1];
    transform_edges(adj, adj_paired, c + 1);

    int res = dijkstra(adj_paired, c + 1, 1, c);
    printf("%d\n", res);

    return 0;
}
