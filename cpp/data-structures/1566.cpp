#include <bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n, int max) {
    int count[max + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++) count[arr[i]]++;

    for (int i = 0, k = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[k++] = i;
            count[i]--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;

        int arr[s];
        for (int i = 0; i < s; i++) cin >> arr[i];

        counting_sort(arr, s, 230);

        for (int i = 0; i < s; i++) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}
