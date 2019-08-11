#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;
    int area, areaReal, terreno;

    while(cin >> a) {
        if (a == 0) {
            break;
        }
        cin >> b >> c;
        area = a * b;
        areaReal = pow(int(sqrt(area)), 2);
        terreno = (area * 100) / c;
        cout << int(sqrt(terreno))  << endl;
    }

    return 0;
}
