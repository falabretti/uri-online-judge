#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    double n, saida;

    cin >> n;

    saida = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);

    cout << saida << endl;


    return 0;
}
