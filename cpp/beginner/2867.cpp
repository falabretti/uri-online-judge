#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("2867.in", "r", stdin);
    ///cout << fixed << setprecision(0);
    int t, n, m;

    cin >> t;

    while(t--) {
        cin >> n >> m;
        cout << floor(log10(pow(n, m))) + 1 << endl;
    }

    return 0;
}
