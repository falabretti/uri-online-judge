#include <iostream>

using namespace std;

int main() {

    int n, a, p, menor;
    cin >> n;
    int x[n];

    for(int i = 0; i < n; i++) {
        cin >> a;
        x[i] = a;
        if(i == 0) {
            menor = x[0];
        }
        if(x[i] < menor) {
            menor = x[i];
            p = i;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << p << endl;

    return 0;
}
