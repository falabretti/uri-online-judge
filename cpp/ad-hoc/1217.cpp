#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int dias;
    cin >> dias;

    double total_valor;
    double total_peso;

    for(int i = 1; i <= dias; i++) {
        double valor;
        string frutas;

        cin >> valor;
        cin.get();

        total_valor += valor;

        getline(cin, frutas);
        stringstream ss(frutas);

        int peso_dia = 0;
        string fruta;

        while(ss >> fruta) {
            peso_dia++;
        }

        printf("day %d: %d kg\n", i, peso_dia);
        total_peso += peso_dia;
    }

    double media_peso = total_peso / dias;
    double media_valor = total_valor / dias;

    printf("%.2lf kg by day\n", media_peso);
    printf("R$ %.2lf by day\n", media_valor);

    return 0;
}
