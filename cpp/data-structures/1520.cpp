#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &vec, int start, int end, int target) {
    if (start <= end) {
        int mid = (start + end) / 2;

        if (vec[mid] < target)
            return bs(vec, mid + 1, end, target);
        else if (vec[mid] > target)
            return bs(vec, start, mid - 1, target);
        else
            return mid;
    }

    return -1;
}

int main() {
    int n;

    while (cin >> n) {
        vector<int> values;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            for (int j = a; j <= b; j++) {
                values.push_back(j);
            }
        }

        int target;
        cin >> target;

        sort(values.begin(), values.end());

        int pos = bs(values, 0, values.size() - 1, target);

        if (pos == -1) {
            printf("%d not found\n", target);
        } else {
            int start, end;
            start = end = pos;

            while (values[start] == target) {
                if (values[start - 1] == target)
                    start--;
                else
                    break;
            }

            while (values[end] == target) {
                if (values[end + 1] == target)
                    end++;
                else
                    break;
            }

            printf("%d found from %d to %d\n", target, start, end);
        }
    }

    return 0;
}