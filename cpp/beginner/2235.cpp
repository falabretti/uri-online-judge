#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b or a == c or b == c) {
        cout << "S" << endl;
    }
    else if(a == b + c or b == a + c or c == a + b) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
