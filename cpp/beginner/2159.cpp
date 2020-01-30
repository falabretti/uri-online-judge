#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    int n;

    cin >> n;

    cout << n / log(n) << " ";
    cout << 1.25506 * (n / log(n)) << endl;

    return 0;
}
