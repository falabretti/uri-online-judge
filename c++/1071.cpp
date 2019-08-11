#include <iostream>

using namespace std;

int main() {

    int a, b, i,total;
    total = 0;
    cin >> a >> b;

    if (a < b) {
        if (a % 2 != 0) {
            a = a + 1;
        }
        while (a < b) {
            if (a % 2 != 0) {
                total = total + a;
            }
            a = a + 1;
        }
    }
    if (a > b) {
        if (b % 2 != 0) {
            b = b + 1;
        }
        while (a > b) {
            if (b % 2 != 0) {
                total = total + b;
            }
            b = b + 1;
        }
    }

    cout << total << endl;

    return 0;
}
