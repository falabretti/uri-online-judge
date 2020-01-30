#include <cstdio>

int main() {

    char frase[50] {'A','M','O',' ','F','A','Z','E','R',' ','E','X','E','R','C','I','C','I','O',' ','N','O',' ','U','R','I'};

    printf("<%s>\n", frase);
    printf("<%30s>\n", frase);
    printf("<%.20s>\n", frase);
    printf("<%-20s>\n", frase);
    printf("<%-30s>\n", frase);
    printf("<%.30s>\n", frase);
    printf("<%30.20s>\n", frase);
    printf("<%-30.20s>\n", frase);

    return 0;
}
