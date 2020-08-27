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

    int c;
    int f;

    int t = 0;

    while (cin >> c >> f and c and f) {

        t++;

        int weights[f + 1];
        int values[f + 1];

        for (int i = 1; i <= f; i++) {
            cin >> weights[i] >> values[i];
        }

        int best = knapsack(weights, values, f, c);

        cout << "Teste " << t << "\n";
        cout << best << "\n\n";
    }


    return 0;
}
