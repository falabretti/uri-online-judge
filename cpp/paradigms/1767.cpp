#include <bits/stdc++.h>

using namespace std;

int knapsack(int weights[], int values[], int solution[], int qnt, int max_weight) {

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

    int weight_left = max_weight;

    for (int i = qnt; i > 0; i--) {
        solution[i] = 0;

        if (dp[i][weight_left] != dp[i - 1][weight_left]) {
            solution[i] = 1;
            weight_left -= weights[i];
        }
    }

    return dp[qnt][max_weight];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    scanf("%d", &n);

    while (n--) {

        int p;
        scanf("%d", &p);

        int weights[p + 1];
        int values[p + 1];
        int solution[p + 1];

        for (int i = 1; i <= p; i++) {
            scanf("%d %d", &values[i], &weights[i]);
        }

        int best = knapsack(weights, values, solution, p, 50);

        int used_weight = 0;
        int rest = p;

        for (int i = 1; i <= p; i++) {
            if (solution[i] == 1) {
                used_weight += weights[i];
                rest--;
            }
        }

        printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n",
                    best, used_weight, rest);
    }

    return 0;
}
