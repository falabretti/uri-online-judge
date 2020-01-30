#include <iostream>

using namespace std;

int main() {

    int i, n, a, b, c;
    a = -1;
    b = 1;

    cin >> n;

    for(i = 1; i <= n; i++) {
        c = a + b;
        cout << c;
        if(i < n) {
            cout << " ";
        }
        if(i == n) {
            cout << endl;
        }
        a = b;
        b = c;

    }

    return 0;
}
