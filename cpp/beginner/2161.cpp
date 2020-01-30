#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(10);
    double n, t, f = 0;

    n = 3;

    cin >> t;

    while(t--) {
        f += 6.0;
        f = 1.0 / f;
    }
    n += f;

    cout << n << endl;;

    return 0;
}
