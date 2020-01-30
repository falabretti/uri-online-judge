#include <iostream>

using namespace std;

int main() {

    int i, total;
    double n;
    total = 0;

    for (i = 1; i <= 6; i = i + 1) {
        cin >> n;
        if (n > 0) {
            total = total + 1;
        }
    }
    cout << total << " valores positivos" << endl;


    return 0;
}
