#include <cstdio>

int main() {

    int mes, dia;
    int meses[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(scanf("%d %d", &mes, &dia) != EOF) {

        int dias_restantes = 0;

        if(mes == 12) {
            if(dia == 25) {
                printf("E natal!\n");
            }
            if(dia == 24) {
                printf("E vespera de natal!\n");
            }
            if(dia > 25) {
                printf("Ja passou!\n");
            }
            if(dia < 24) {
                dias_restantes = 25 - dia;
                printf("Faltam %d dias para o natal!", dias_restantes);
            }
        } else {
            for(int i = mes; i < 11; i++) {
                dias_restantes += meses[i];
            }
            dias_restantes += meses[mes - 1] - dia;
            dias_restantes += 25;

            printf("Faltam %d dias para o natal!\n", dias_restantes);
        }
    }

    return 0;
}
