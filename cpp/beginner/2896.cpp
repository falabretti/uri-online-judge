#include <iostream>

using namespace std;

int main() {

    int t, n, k, troca, resto;

    cin >> t;

    while(t--) {
        cin >> n >> k;
        troca = n / k;
        resto = n % k;
        cout << troca + resto << endl;
    }

    return 0;
}
