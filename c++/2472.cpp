#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int l, n;
    cin >> l >> n;

    unsigned long long int soma = ceil(pow(l - (n - 1), 2)) + n - 1;

    cout << soma << endl;

    return 0;
}
