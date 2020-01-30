#include <iostream>

using namespace std;

int main() {

    char a[2], b[2];

    cin >> a[0] >> a[1] >> b[0] >> b[1];

    if(b[0] == a[0] + 1 or b[0] == a[0] - 1) {
        if(b[1] == a[1] + 2 or b[1] == a[1] - 2) {
            cout << "VALIDO" << endl;
        } else {
            cout << "INVALIDO" << endl;
        }
    } else if(b[0] == a[0] + 2 or b[0] == a[0] - 2) {
        if(b[1] == a[1] + 1 or b[1] == a[1] - 1) {
            cout << "VALIDO" << endl;
        } else {
            cout << "INVALIDO" << endl;
        }
    } else {
        cout << "INVALIDO" << endl;
    }

    return 0;
}
