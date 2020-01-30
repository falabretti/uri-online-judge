#include <iostream>

using namespace std;

int main() {

    int a, b, c, a1, b1, c1, total = 0;

    cin >> a >> b >> c;
    cin >> a1 >> b1 >> c1;

    if(a1 > a) {
        total += a1 - a;
    }
    if(b1 > b) {
        total += b1 - b;
    }
    if(c1 > c) {
        total += c1 - c;
    }

    cout << total << endl;

    return 0;
}
