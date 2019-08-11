#include <cstdio>

using namespace std;

int main() {

    int n, h, m, opt;

    scanf("%d", &n);

    while(n--) {
        scanf("%d %d %d", &h, &m, &opt);
        printf("%.2d:%.2d - A porta ", h, m);
        if(opt == 1) {
            printf("abriu!\n");
        }
        if(opt == 0) {
            printf("fechou!\n");
        }
    }

    return 0;
}
