#include <cstdio>

int main() {

    ///freopen("2544.in", "r", stdin);
    int n, i;

    while(scanf("%d", &n) != EOF) {

        for(i = 0; n > 0; i++) {
            n = n / 2;
        }

        printf("%d\n", i - 1);
    }

    return 0;
}
