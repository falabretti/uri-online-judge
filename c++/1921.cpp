#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    long long int n;
    cout << fixed << setprecision(0);

    cin >> n;

    cout << n * (n - 3) * 0.5 << endl;

    return 0;
}
