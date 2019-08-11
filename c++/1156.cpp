#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double s, a, b;
    cout << fixed << setprecision(2);
    s = 0;
    b = 1.0;

    for(int i = 1; i <= 39; i += 2) {
        s += i / b;
        b *= 2;
    }

    cout << s << endl;

    return 0;
}
