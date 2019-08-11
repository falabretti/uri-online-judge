#include <iostream>

using namespace std;

int main() {

    unsigned long long int p;

    while(cin >> p) {
        if(p == - 1) {
            break;
        }

        if(p == 0) {
            cout << p << endl;
        } else {
            cout << p - 1 << endl;
        }
    }

    return 0;
}
