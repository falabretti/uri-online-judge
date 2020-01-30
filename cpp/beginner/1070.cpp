#include <iostream>

using namespace std;

int main() {

    int n, i;
    cin >> n;

    for (i = 1; i <= 6;) {
        if (n % 2 != 0) {
            cout << n << endl;
            i = i + 1;
        }
        n = n + 1;
    }

    return 0;
}
