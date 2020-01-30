#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int n, codigo, quantidade;
    double total = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> codigo >> quantidade;

        switch (codigo) {
        case 1001:
            total += quantidade * 1.5;
            break;
        case 1002:
            total += quantidade * 2.5;
            break;
        case 1003:
            total += quantidade * 3.5;
            break;
        case 1004:
            total += quantidade * 4.5;
            break;
        case 1005:
            total += quantidade * 5.5;
            break;
        }
    }

    cout << total << endl;

    return 0;
}
