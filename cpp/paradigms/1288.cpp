#include <bits/stdc++.h>

using namespace std;

int knapsack(int weights[], int values[], int qnt, int max_weight) {

    int dp[qnt + 1][max_weight + 1];

    for (int i = 0; i <= qnt; i++) {
        for (int j = 0; j <= max_weight; j++) {

            if (i == 0 or j == 0) {
                dp[i][j] = 0;
                continue;
            }

            int without = dp[i - 1][j];
            int with = 0;

            if (weights[i] <= j) {
                with = values[i] + dp[i - 1][j - weights[i]];
            }

            dp[i][j] = max(without, with);
        }
    }

    return dp[qnt][max_weight];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int weights[n + 1];
        int values[n + 1];

        for (int i = 1; i <= n; i++) {
            scanf("%d %d", &values[i], &weights[i]);
        }

        int k;
        scanf("%d", &k);

        int r;
        scanf("%d", &r);

        int best = knapsack(weights, values, n, k);

        if (best >= r) {
            printf("Missao completada com sucesso\n");
        } else {
            printf("Falha na missao\n");
        }
    }

    return 0;
}
