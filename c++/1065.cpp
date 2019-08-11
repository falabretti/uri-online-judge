#include <iostream>

using namespace std;

int main() {

    int i, n, total;
    total = 0;

    for (i = 1; i <=5; i++) {
        cin >> n;
        if (n % 2 == 0) {
            total = total + 1;
        }
    }
    cout << total << " valores pares" << endl;

    return 0;
}
