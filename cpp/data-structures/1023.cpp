#include <bits/stdc++.h>
using namespace std;

#define MAX 201

int main() {
    int c = 1;
    bool f = true;

    int n;
    while (cin >> n and n) {
        if (f) {
            f = false;
        } else {
            printf("\n");
        }
        int arr[MAX];
        memset(arr, 0, sizeof(arr));

        float total_x = 0;
        float total_y = 0;

        while (n--) {
            int x, y;
            cin >> x >> y;

            total_x += x;
            total_y += y;

            int z = y / x;
            arr[z] += x;
        }

        printf("Cidade# %d:\n", c++);

        bool first = true;

        for (int i = 0; i < MAX; i++) {
            if (arr[i] == 0) continue;

            if (first) {
                first = false;
            } else {
                printf(" ");
            }

            printf("%d-%d", arr[i], i);
        }
        printf("\n");

        float avg = total_y / total_x;
        printf("Consumo medio: %.2f m3.\n", trunc(avg * 100) / 100);
    }

    return 0;
}
