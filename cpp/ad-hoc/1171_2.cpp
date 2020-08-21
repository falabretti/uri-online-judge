#include <bits/stdc++.h>
using namespace std;

#define MAX 2001

int main() {
    int n;
    cin >> n;

    int arr[MAX];
    memset(arr, 0, sizeof(arr));

    while (n--) {
        int x;
        cin >> x;

        arr[x]++;
    }

    for (int i = 0; i < MAX; i++) {
        if (arr[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }
    
    return 0;
}
 