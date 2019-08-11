#include <iostream>

using namespace std;

int main() {

    int i, n;
    cin >> n;

    for(i = 1; i <= n; i++) {
        cout << "Ho";
        if(i == n) {
            cout << "!" << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
