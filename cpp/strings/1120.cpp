#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    char digito;
    string numero;

    while(cin >> digito >> numero) {
        if(digito == '0' and numero == "0") break;

        while(true) {
            int pos = numero.find(digito);
            if(pos == string::npos) break;

            numero.erase(pos, 1);
        }

        int qnt_zeros = 0;

        for(int i = 0; i < numero.size(); i++) {
            if(numero[i] == '0') qnt_zeros++;
            else break;
        }

        numero.erase(0, qnt_zeros);

        if(numero.size() == 0) numero = "0";

        cout << numero << endl;
    }

    return 0;
}
