#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

void imprime_bin (long long int decimal) {
        int bin[100];
        int tam = 0;

        for(int i = 0; decimal != 0; i++, tam++) {
            bin[i] = decimal % 2;
            decimal /= 2;
        }

        for(int i = tam - 1; i >= 0; i--) {
            cout << bin[i];
        }
        cout << " bin" << endl;
    }

int main() {

    //freopen("entrada.in", "r", stdin);

    int testes;
    cin >> testes;

    for(int j = 1; j <= testes; j++) {
        string num, base;
        cin >> num >> base;

        cout << "Case " << j << ":" << endl;

        if(base == "bin") {
            int bin = strtol(num.c_str(), NULL, 2);

            cout << bin << " dec" << endl;
            cout << hex << bin << " hex" << endl;
        }

        if(base == "dec") {
            long long int decimal = strtol(num.c_str(), NULL, 10);

            cout << hex << decimal << " hex" << endl;
            imprime_bin(decimal);
        }

        if(base == "hex") {
            long long int hexa = strtol(num.c_str(), NULL, 16);

            cout << dec << hexa << " dec" << endl;
            imprime_bin(hexa);
        }

        cout << dec << endl;
    }

    return 0;
}
