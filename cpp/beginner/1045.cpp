#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;
    double ar[] = {a, b, c};

    if (ar[0] < ar[1] ) {
        swap(ar[0], ar[1]);
    }
    if (ar[1] < ar[2]) {
        swap(ar[1], ar[2]);
    }
    if (ar[0] < ar[1]) {
        swap(ar[0], ar[1]);
    }
    a = ar[0];
    b = ar[1];
    c = ar[2];

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(a, 2) < (pow(b, 2) + pow(c, 2))) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if ((a == b) && (b == c)) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((a == b) && (b != c) || (a == c) && (a != b) || (b == c) && (a != b)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
