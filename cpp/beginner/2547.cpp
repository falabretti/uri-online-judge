#include <cstdio>

int main() {

    ///freopen("2547.in", "r", stdin);

    int pessoas, alturaMin, alturaMax, entrada, total = 0;

    while(scanf("%d %d %d", &pessoas, &alturaMin, &alturaMax) != EOF) {

        while(pessoas--) {
            scanf("%d", &entrada);

            if(entrada >= alturaMin and entrada <= alturaMax) {
                total++;
            }
        }

        printf("%d\n", total);
        total = 0;
    }

    return 0;
}
