#include <iostream>

using namespace std;

int main() {

    int i, a, b;

    cin >> a >> b;

    for(i = 1; i <= b; i++) {

        cout << i;
        if(i % a != 0) {
            cout << " ";
        }
        if(i % a == 0) {
            cout << endl;
        }
    }

    return 0;
}

