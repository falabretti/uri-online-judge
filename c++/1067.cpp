#include <iostream>

using namespace std;

int main() {

    int i, n, a;
    a = 1;
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (a % 2 != 0) {
            cout << a << endl;
        }
        a = a + 1;
    }

    return 0;
}
