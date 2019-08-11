#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    double d, p;

    cin >> d >> p;

    cout << d / p << endl;

    return 0;
}
