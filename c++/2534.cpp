#include <cstdio>
#include <algorithm>

bool ordem (int i, int j) { return i > j; }

int main() {

    ///freopen("2534.in", "r", stdin);

    int n, q, c;

    while(scanf("%d %d", &n, &q) != EOF) {

        int notas[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &notas[i]);
        }

        std::sort(notas, notas + n, ordem);

        for(int j = 1; j <= q; j++) {
            scanf("%d", &c);
            printf("%d\n", notas[c - 1]);
        }
    }

    return 0;
}
