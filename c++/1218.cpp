#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int tam;
    int caso = 0;

    while(cin >> tam) {
        cin.get();
        caso++;

        if(caso > 1) cout << endl;

        int iguais = 0;
        int masc = 0;
        int fem = 0;
        bool anterior = false;

        string entrada;
        getline(cin, entrada);

        stringstream ss(entrada);
        string valor;

        while(ss >> valor) {
            if(valor != "F" and valor != "M") {
                int num = strtol(valor.c_str(), NULL, 10);

                if(num == tam) {
                    iguais++;
                    anterior = true;
                } else {
                    anterior = false;
                }
            } else {
                if(valor == "F" and anterior) fem++;
                if(valor == "M" and anterior) masc++;
            }
        }

        printf("Caso %d:\n", caso);
        printf("Pares Iguais: %d\n", iguais);
        printf("F: %d\n", fem);
        printf("M: %d\n", masc);
    }

    return 0;
}
