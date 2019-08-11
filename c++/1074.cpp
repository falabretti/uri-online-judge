#include <iostream>

using namespace std;

int main() {

    int n, i, j;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> j;
        if(j == 0) {
            cout << "NULL" << endl;
        } else {
            if (j % 2 == 0) {
                if (j > 0) {
                    cout << "EVEN POSITIVE" << endl;
                }
                if (j < 0) {
                    cout << "EVEN NEGATIVE" << endl;
                }
            }
            if (j % 2 != 0) {
                if (j > 0) {
                    cout << "ODD POSITIVE" << endl;
                }
                if (j < 0) {
                    cout << "ODD NEGATIVE" << endl;
                }
            }
        }
    }

    return 0;
}
