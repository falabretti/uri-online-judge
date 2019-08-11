#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int n, tam;
    string entrada;

    cin >> n;

    for(int i = 1; i <= 3; i++) {
        getline(cin, entrada);

        tam = entrada.size();
        char entrada_array[tam];
        strcpy(entrada_array, entrada.c_str());

        int saida[tam];
        int cont_saida = 0;

        for(int j = 0; j < tam; j++) {
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'I' or entrada_array == 'S' or entrada_array == 'b' or entrada_array == 'l' or entrada_array == 'v') {
                saida[cont_saida] = 1;
                cont_saida++;
            }
            if(entrada_array == 'E' or entrada_array == 'O' or entrada_array == 'Y' or entrada_array == 'c' or entrada_array == 'm' or entrada_array == 'w') {
                saida[cont_saida] = 2;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }
            if(entrada_array == 'C' or entrada_array == 'Q' or entrada_array == 'a' or entrada_array == 'k' or entrada_array == 'u') {
                saida[cont_saida] = 0;
                cont_saida++;
            }

        }





    }


    return 0;
}
