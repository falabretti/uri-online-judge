#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int n;
    string operacao;
    int cores[3], maior;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> operacao;
        cin >> cores[0] >> cores[1] >> cores[2];

        if(operacao == "eye") {
            cout << "Caso #" << i << ": " << trunc(cores[0] * 0.3 + cores[1] * 0.59 + cores[2] * 0.11) << endl;
        }
        if(operacao == "mean") {
            cout << "Caso #" << i << ": " << (cores[0] + cores[1] + cores[2]) / 3 << endl;
        }
        if(operacao == "max") {
            sort(cores, cores+3);
            cout << "Caso #" << i << ": " << cores[2] << endl;
        }
        if(operacao == "min") {
            sort(cores, cores+3);
            cout << "Caso #" << i << ": " << cores[0] << endl;
        }
    }
    return 0;
}
