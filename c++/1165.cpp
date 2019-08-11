#include <iostream>
using namespace std;
int main() {

    int i, j, n, x, s;
    s = 0;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> x;
        for(j = 1; j <= x; j++) {
            if(x % j == 0) {
                s += j;
            }
        }
        cout << x;
        if(s == (x + 1)) {
            cout << " eh primo" << endl;
        } else {
            cout << " nao eh primo" << endl;
        }
        s = 0;
    }

    return 0;
}
