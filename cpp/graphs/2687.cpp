#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d", &n);

    while (n--) {
        int s;
        scanf("%d", &s);

        int bact[s][s];

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                scanf("%d", &bact[i][j]);
                bact[i][j] = -bact[i][j];
            }
        }

        for (int i = 0; i < s; i++) {
            bool after_one = false;
            for (int j = 0; j < s; j++) {
                if (bact[i][j] == -1) after_one = true;
                if (after_one and bact[i][j] != -1) bact[i][j]++;
            }
        }

        for (int i = 0; i < s; i++) {
            bool after_one = false;
            for (int j = s - 1; j >= 0; j--) {
                if (bact[i][j] == -1) after_one = true;
                if (after_one and bact[i][j] != -1) bact[i][j]++;
            }
        }

        for (int j = 0; j < s; j++) {
            bool after_one = false;
            for (int i = 0; i < s; i++) {
                if (bact[i][j] == -1) after_one = true;
                if (after_one and bact[i][j] != -1) bact[i][j]++;
            }
        }

        for (int j = 0; j < s; j++) {
            bool after_one = false;
            for (int i = s - 1; i >= 0; i--) {
                if (bact[i][j] == -1) after_one = true;
                if (after_one and bact[i][j] != -1) bact[i][j]++;
            }
        }

        int total = 0;

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (bact[i][j] == -1 or bact[i][j] == 4) total++;
            }
        }

        double res = total / 2.;

        printf("%.2lf\n", res);
    }

    return 0;
}
