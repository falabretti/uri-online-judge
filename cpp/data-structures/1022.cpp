#include <cstdio>

int main() {

    freopen("1022.in", "r", stdin);

    long int n, n1, d1, n2, d2, numResultado, demResultado;
    char operador;

    scanf("%ld", &n);

    while(n--) {
        scanf("%ld / %ld %c %ld / %ld\n", &n1, &d1, &operador, &n2, &d2);

        switch(operador) {

        case '+':

            numResultado = n1 * d2 + n2 * d1;
            demResultado = d1 * d2;

            printf("%ld/%ld = ", numResultado, demResultado);

            //SIMPLIFICAR
            for(int i = 1;; i++) {
                if(numResultado % i == 0 and demResultado % i == 0) {
                    numResultado = numResultado / i;
                    demResultado = demResultado / i;
                }
                if(i == numResultado or i == demResultado) {
                    break;
                }
            }

            printf("%ld/%ld\n", numResultado, demResultado);

            break;

        case '-':

            numResultado = n1 * d2 - n2 * d1;
            demResultado = d1 * d2;

            printf("%ld/%ld = ", numResultado, demResultado);

            //SIMPLIFICAR
            for(int i = 1;; i++) {
                if(numResultado % i == 0 and demResultado % i == 0) {
                    numResultado = numResultado / i;
                    demResultado = demResultado / i;
                }
                if(i == numResultado or i == demResultado) {
                    for(int j = 1;; j++) {
                        if(numResultado % i == 0 and demResultado % j == 0) {
                            numResultado = numResultado / j;
                            demResultado = demResultado / j;
                        }
                        if(j == numResultado or j == demResultado) {
                            break;
                        }
                    }
                }
            }

            printf("%ld/%ld\n", numResultado, demResultado);

            break;

        case '*':

            numResultado = n1 * n2;
            demResultado = d1 * d2;

            printf("%ld/%ld = ", numResultado, demResultado);

            //SIMPLIFICAR
            for(int i = 1;; i++) {
                if(numResultado % i == 0 and demResultado % i == 0) {
                    numResultado = numResultado / i;
                    demResultado = demResultado / i;
                }
                if(i == numResultado or i == demResultado) {
                    break;
                }
            }

            printf("%ld/%ld\n", numResultado, demResultado);

            break;

        case '/':

            numResultado = n1 * d2;
            demResultado = n2 * d1;

            printf("%ld/%ld = ", numResultado, demResultado);

            //SIMPLIFICAR
            for(int i = 1;; i++) {
                if(numResultado % i == 0 and demResultado % i == 0) {
                    numResultado = numResultado / i;
                    demResultado = demResultado / i;
                }
                if(i == numResultado or i == demResultado) {
                    break;
                }
            }

            printf("%ld/%ld\n", numResultado, demResultado);

            break;
        }
    }

    return 0;
}
