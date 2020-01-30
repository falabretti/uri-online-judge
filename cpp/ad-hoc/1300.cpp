#include <iostream>

using namespace std;

int main() {

    int angulo;

    while(cin >> angulo) {
        char resultado;

        angulo % 6 == 0 ? resultado = 'Y' : resultado = 'N';

        cout << resultado << endl;
    }

    return 0;
}
