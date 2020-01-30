#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int tam;
    cin >> tam;

    int numeros[tam];

    for(int i = 0; i < tam; i++) {
        cin >> numeros[i];
    }

    sort(numeros, numeros + tam);

    int anterior = numeros[0];
    int total = 0;

    for(int i = 0; i < tam; i++) {
        if(numeros[i] == anterior) total++;

        if(numeros[i] != anterior) {
            printf("%d aparece %d vez(es)\n", anterior, total);
            total = 1;
            anterior = numeros[i];
        }

        if(i == tam - 1) {
            printf("%d aparece %d vez(es)\n", anterior, total);
        }
    }

    return 0;
}
