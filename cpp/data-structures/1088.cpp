#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int c = 0;
    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 and j < n2) {
        if (left[i] <= right[j]) {
            c += max(0, k - (start + i));
            arr[k++] = left[i++];
        } else {
            c += max(0, k - (mid + 1 + j));
            arr[k++] = right[j++];
        }
    }

    while (i < n1) {
        c += max(0, k - (start + i));
        arr[k++] = left[i++];
    }
    while (j < n2) {
        c += max(0, k - (mid + 1 + j));
        arr[k++] = right[j++];
    }

    return c;
}

int merge_sort(int arr[], int start, int end) {
    int c = 0;
    if (start < end) {
        int mid = (start + end) / 2;
        c += merge_sort(arr, start, mid);
        c += merge_sort(arr, mid + 1, end);
        c += merge(arr, start, mid, end);
    }

    return c;
}

int main() {
    int n;
    while (cin >> n and n) {
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int count = merge_sort(arr, 0, n - 1);
        cout << (count % 2 == 0 ? "Carlos" : "Marcelo") << endl;
    }

    return 0;
}
