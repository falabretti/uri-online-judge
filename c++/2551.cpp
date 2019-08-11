#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

    ///freopen("2551.in", "r", stdin);
    int n;
    double t, d, vm;

    while(scanf("%d", &n) != EOF) {

        int dias[n];
        int contador = 0;
        double maior = 0;

        for(int i = 1; i <= n; i++) {
            cin >> t >> d;
            vm = d / t;

            if(vm > maior) {
                dias[contador] = i;
                contador++;
                maior = vm;
            }
        }

        sort(dias, dias + contador);

        for(int i = 0; i < contador; i++) {
            cout << dias[i] << endl;
        }
    }

    return 0;
}
