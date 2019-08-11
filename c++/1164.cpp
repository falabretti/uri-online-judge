#include <iostream>

using namespace std;

int main() {

    int i, j, n, x, t;
    t = 0;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> x;

        for(j = 1; j < x;) {
            if(x % j == 0) {
                t += j;
            }
            j++;
        }

        cout << x;
        if(x == t) {
            cout << " eh perfeito" << endl;
        } else {
            cout << " nao eh perfeito" << endl;
        }
        t = 0;
    }

    return 0;
}
