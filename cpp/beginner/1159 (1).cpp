#include <iostream>

using namespace std;

int main() {

    int i, n;
    n = 1;

    for (i = 1; i <= 100; i = i + 1) {
        if (n % 2 == 0) {
            cout << n << endl;
        }
        n = n + 1;
    }

    return 0;
}
