#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1914.in", "r", stdin);

    int n, num1, num2, resultado;
    string nome1, nome2, escolha1, escolha2;

    cin >> n;

    for(int i = 1; i <= n; i++) {

        cin >> nome1 >> escolha1 >> nome2 >> escolha2;
        cin >> num1 >> num2;

        resultado = (num1 + num2) % 2;

        if(escolha1 == "PAR") {
            if(resultado == 0) {
                cout << nome1 << endl;
            }
            if(resultado == 1) {
                cout << nome2 << endl;
            }
        }

        if(escolha1 == "IMPAR") {
            if(resultado == 0) {
                cout << nome2 << endl;
            }
            if(resultado == 1) {
                cout << nome1 << endl;
            }
        }
    }

    return 0;
}
