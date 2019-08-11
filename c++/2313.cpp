#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long int a, b, c;

    cin >> a >> b >> c;

    if(a < b + c and abs(b - c) < a) {
        if(a == b and b == c) {
            cout << "Valido-Equilatero" << endl;
        } else if(a != b and a != c and b !=c) {
            cout << "Valido-Escaleno" << endl;
        } else if(a == b or a == c or b ==c) {
            cout << "Valido-Isoceles" << endl;
        }
        if(c * c == ((a * a) + (b * b))) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
    } else {
        cout << "Invalido" << endl;
    }

    return 0;
}
