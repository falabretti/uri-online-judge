#include <iostream>

using namespace std;

int main() {

    int i, j, n, x, y, s;
    s = 0;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> x >> y;
        for(j = 1; j <= y;) {
            if(x % 2 != 0) {
                s += x;
                j++;
            }
            x++;
        }
        cout << s << endl;
        s = 0;
    }

    return 0;
}
