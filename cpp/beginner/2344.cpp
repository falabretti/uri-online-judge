#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    char score = 'E';

    if (n >= 1) score = 'D';
    if (n >= 36) score = 'C';
    if (n >= 61) score = 'B';
    if (n >= 86) score = 'A';

    cout << score << endl;

    return 0;
}
