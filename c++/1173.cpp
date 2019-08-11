#include <iostream>

using namespace std;

int main() {

    int i, n[10];
    i = 0;

    cin >> n[i];

    for(i; i <= 9; i++) {

        if(i == 0) {
            cout << "N[" << i << "] = " << n[i] << endl;
        } else {
            n[i] = n[i - 1] * 2;
            cout << "N[" << i << "] = " << n[i] << endl;
        }
    }

    return 0;
}
