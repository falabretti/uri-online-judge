#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i, total;
    double n, soma;
    cout << fixed << setprecision(1);
    total = 0;
    soma = 0;

    for (i = 1; i <= 6; i++) {
        cin >> n;
        if (n > 0) {
            total = total + 1;
            soma = soma + n;
        }
    }
    cout << total << " valores positivos" << endl;
    cout << soma / total << endl;

    return 0;
}
