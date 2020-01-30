#include <iostream>

using namespace std;

int main() {

    int i, n;

    while(n =! 0) {
        cin >> n;
        if (n == 0) {
            break;
        }
        for(i = 1; i <= n; i++) {
            cout << i;
            if(i < n) {
                cout << " ";
            }
            if(i == n) {
                cout << endl;
            }
        }
    }

    return 0;
}
