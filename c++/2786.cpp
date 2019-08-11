#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int tipo1 = a * b + (a - 1) * (b - 1);
    int tipo2 = (a - 1 + b - 1) * 2;

    cout << tipo1 << endl;
    cout << tipo2 << endl;

    return 0;
}
