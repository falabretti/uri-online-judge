#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long int a, b, c, t;

    cin >> a >> b >> c;

    if((abs(b - c) < a and a < b + c) and (abs(a - c) < b and b < a + c) and (abs(a - b) < c and c < a + b)) {
        if (a == b and b == c) {
            cout << "Valido-Equilatero" << endl;
        } else if(a != b and a != c and b != c) {
            cout << "Valido-Escaleno" << endl;
        } else if(a == b or a == c or b == c) {
            cout << "Valido-Isoceles" << endl;
        }
        if(b >= a) {
            t = b;
            b = a;
            a = t;
        }
        if(c >= b) {
            t = c;
            c = b;
            b = t;
        }
        if(b >= a) {
            t = b;
            b = a;
            a = t;
        }
        if(a * a == b * b + c * c) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
    } else {
        cout << "Invalido" << endl;
    }


    return 0;
}
