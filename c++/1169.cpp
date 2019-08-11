#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1169.in", "r", stdin);
    unsigned long long int n, casas;

    cin >> n;

    while(n--) {
        cin >> casas;

        unsigned long long int graos = pow(2, casas) - 1;
        unsigned long long int gramas = graos / 12;
        unsigned long long int kilos = gramas / 1000;

        cout << kilos  << " kg" << endl;
    }

    return 0;
}
