#include <bits/stdc++.h>

using namespace std;

struct Edge {
    int from;
    int to;
    int weight;

    Edge(int f, int t, int w) : from(f), to(t), weight(w) {}
};

bool checkCycle(int from, int to, int roots[]) {

    while (roots[from] != -1) {
        from = roots[from];
    }

    while (roots[to] != -1) {
        to = roots[to];
    }

    if (from != to) {
        roots[to] = from;
        return true;
    }

    return false;
}

int kruskal(vector<Edge>& edges, int vertexQty) {

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) { return a.weight < b.weight; });

    int edgeCount = 0;
    int vertexCount = 1;

    int roots[vertexQty];
    memset(roots, -1, sizeof(roots));

    int minWeight = 0;

    while (edgeCount < edges.size() and vertexCount < vertexQty) {
        Edge edge = edges[edgeCount];

        if (checkCycle(edge.from, edge.to, roots)) {
            vertexCount++;
            minWeight += edge.weight;
        }

        edgeCount++;
    }

    return minWeight;
}

int main() {

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    int e;

    while (true) {
        cin >> v >> e;

        if (v == 0 and e == 0) {
            break;
        }

        vector<Edge> edges;
        edges.reserve(e);

        int totalWeight = 0;

        while (e--) {
            int from;
            int to;
            int weight;
            
            cin >> from >> to >> weight;

            edges.push_back(Edge(from, to, weight));

            totalWeight += weight;
        }

        int minWeight = kruskal(edges, v);
        int result = totalWeight - minWeight;

        cout << result << endl;
    }

    return 0;
}
