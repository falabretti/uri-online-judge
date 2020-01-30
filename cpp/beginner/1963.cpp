#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    double a, b, aumento;

    cin >> a >> b;

    aumento = b / a * 100 - 100;

    cout << aumento << '%' <<  endl;

    return 0;
}
