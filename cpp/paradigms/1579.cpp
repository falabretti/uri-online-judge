#include <bits/stdc++.h>
using namespace std;

int n, p, t, s;

int calcRequired(int arr[], int target) {
    int required = 1;
    int loaded = 0;

    for (int i = 0; i < p; i++) {
        if (loaded + arr[i] <= target) {
            loaded += arr[i];
        } else {
            required++;
            loaded = arr[i];
        }
    }

    return required;
}

int bs(int arr[], int start, int end, int target) {
    if (start < end) {
        int mid = (start + end) / 2;
        int required = calcRequired(arr, mid);

        if (required > target)
            return bs(arr, mid + 1, end, target);
        else if (required <= target)
            return bs(arr, start, mid, target);
    }

    return start;
}

int main() {
    cin >> n;

    while (n--) {
        cin >> p >> t >> s;

        int weights[p];
        for (int i = 0; i < p; i++) cin >> weights[i];

        int start = *max_element(weights, weights + p);
        int end = accumulate(weights, weights + p, 0);

        int res = bs(weights, start, end, t);
        int price = res * t * s;

        printf("%d $%d\n", res, price);
    }

    return 0;
}
