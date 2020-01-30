#include <iostream>

using namespace std;

int main() {

    long long int fib[61], t, n, a, b, s;
    a = -1;
    b = 1;

    for(int j = 0; j <= 60; j++) {
        s = a + b;
        a = b;
        b = s;
        fib[j] = s;
    }

    cin >> t;

    for(int i = 1; i <= t; i++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }

    return 0;
}
