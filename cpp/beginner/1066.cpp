#include <iostream>

using namespace std;

int main() {

    int n, i, par, impar, pos, neg;
    par = 0;
    impar = 0;
    pos = 0;
    neg = 0;

    for (i = 1; i <= 5; i++) {
        cin >> n;
        if (n % 2 == 0) {
            par = par + 1;
        } else {
            impar = impar + 1;
        }
        if (n > 0) {
            pos = pos + 1;
        } else if (n < 0) {
            neg = neg + 1;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
