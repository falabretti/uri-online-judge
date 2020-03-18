#include <bits/stdc++.h>
using namespace std;

int bs(int arr[], int start, int end, int target) {
    if (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] < target)
            return bs(arr, mid + 1, end, target);
        else if (arr[mid] > target)
            return bs(arr, start, mid - 1, target);
        else
            return mid;
    }

    return -1;
}

int main() {
    int n, q;
    int caso = 1;

    while (cin >> n >> q and n != 0 and q != 0) {
        int arr[n];
        int con[q];

        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < q; i++) cin >> con[i];

        sort(arr, arr + n);
        printf("CASE# %d:\n", caso);

        for (int val : con) {
            int idx = bs(arr, 0, n - 1, val);

            if (idx == -1)
                printf("%d not found\n", val);
            else {
                while (arr[idx] == val) {
                    if (arr[idx - 1] == val)
                        idx--;
                    else
                        break;
                }

                printf("%d found at %d\n", val, idx + 1);
            }
        }

        caso++;
    }

    return 0;
}