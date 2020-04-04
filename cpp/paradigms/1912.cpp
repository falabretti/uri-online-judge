#include <bits/stdc++.h>
using namespace std;

int n, a;
int arr[101234];

#define EPS 0.0001

double sum(double floor) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += max(0., arr[i] - floor);
    }

    return s;
}

double bs(double start, double end) {
    if (start <= end) {
        double mid = (start + end) / 2.;
        double s = sum(mid);

        if (fabs(s - a) < EPS)
            return mid;
        else if (s > a)
            return bs(mid, end);
        else if (s < a)
            return bs(start, mid);
    }

    return -1;
}

int main() {
    while (cin >> n >> a and n != 0 and a != 0) {
        for (int i = 0; i < n; i++) cin >> arr[i];

        double full_sum = sum(0);

        if (full_sum == a)
            cout << ":D" << endl;
        else if (full_sum < a)
            cout << "-.-" << endl;
        else {
            double h = bs(0, *max_element(arr, arr + n));
            printf("%.4f\n", h);
        }
    }

    return 0;
}