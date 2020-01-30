#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(10);
    double f = 0, n;

    cin >> n;

    while(n--) {
        f += 2.0;
        f = 1.0 / f;
    }

    cout << 1.0 + f << endl;

    return 0;
}
