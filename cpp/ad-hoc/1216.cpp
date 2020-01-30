#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    string nome;
    double total_distancia = 0;
    int qnt = 0;

    while(getline(cin, nome)) {
        int distancia;

        cin >> distancia;
        cin.get();

        total_distancia += distancia;
        qnt++;
    }

    printf("%.1lf\n", total_distancia / qnt);

    return 0;
}

