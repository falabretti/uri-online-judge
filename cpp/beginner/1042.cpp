#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    int ar[] {a, b, c};

    if (ar[0] > ar[1]) {
        swap(ar[0], ar[1]);
    }
    if (ar[1] > ar[2]) {
        swap(ar[1], ar[2]);
    }
    if (ar[0] > ar[1]) {
        swap(ar[0], ar[1]);
    }

    cout << ar[0] << endl;
    cout << ar[1] << endl;
    cout << ar[2] << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
