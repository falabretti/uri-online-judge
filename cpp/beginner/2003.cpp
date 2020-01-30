#include <cstdio>

const int HORA = 60 * 8;

int main() {

    int h, m, minutos, atraso;

    while(scanf("%d:%d", &h, &m) != EOF)  {

        minutos = h * 60 + m;
        atraso = minutos + 60 - HORA;

        if(atraso < 0) {
            atraso = 0;
        }

        printf("Atraso maximo: %d\n", atraso);
    }

    return 0;
}
