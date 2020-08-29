#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int, int> edge;
typedef vector<edge> adj_list;

void add_edge(adj_list adj[], int v, int u, int w) {

    for (auto& [t, tw] : adj[u]) {

        if (t == v) {
            w = 0;
            tw = 0;
        }
    }

    adj[v].push_back(make_pair(u, w));
}

int dijkstra(adj_list adj[], int v, int src, int dest) {

    priority_queue<edge, vector<edge>, greater<edge>> pq;
    vector<int> dist(v, INF);
    vector<bool> extracted(v, false);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {

        int cur = pq.top().second;
        pq.pop();
        extracted[cur] = true;

        for (auto [u, w] : adj[cur]) {

            if (not extracted[u] and dist[cur] + w < dist[u]) {
                dist[u] = dist[cur] + w;
                pq.push(make_pair(dist[u], u));
            }
        }
    }

    return dist[dest];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int e;

    while (scanf("%d %d", &n, &e) and (n or e)) {

        adj_list adj[n + 1];

        while (e--) {
            int x;
            int y;
            int h;

            scanf("%d %d %d", &x, &y, &h);
            add_edge(adj, x, y, h);
        }

        int k;
        scanf("%d", &k);

        while (k--) {
            int x;
            int y;

            scanf("%d %d", &x, &y);
            int res = dijkstra(adj, n + 1, x, y);

            if (res == INF) {
                printf("Nao e possivel entregar a carta\n");
            } else {
                printf("%d\n", res);
            }
        }

        printf("\n");
    }


    return 0;
}
