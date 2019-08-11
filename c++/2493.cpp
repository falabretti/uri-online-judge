#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    freopen("2493.in", "r", stdin);
    int n;

    while(cin >> n) {
        int valor1[n], valor2[n], resultado[n];
        string jogador[n], nome;
        int indice, total = 0, contador = 0;
        char operador;
        string erros[n];


        for(int i = 0; i < n; i++) {
            scanf("%d %d=%d",&valor1[i], &valor2[i], &resultado[i]);
            //printf("%d %d %d\n", valor1[i], valor2[i], resultado[i]);
        }

        for(int i = 0; i < n; i++) {
            cin >> jogador[i] >> indice >> operador;
            indice--;
            //cout << jogador[i] << endl;
            if(operador == '+') {
                if(valor1[indice] + valor2[indice] == resultado[indice]) {
                    total++;
                } else {
                    erros[contador] = jogador[i];
                    contador++;
                }
            } else if(operador == '-') {
                if(valor1[indice] - valor2[indice] == resultado[indice]) {
                    total++;
                } else {
                    erros[contador] = jogador[i];
                    contador++;
                }
            } else if(operador == '*') {
                if(valor1[indice] * valor2[indice] == resultado[indice]) {
                    total++;
                } else {
                    erros[contador] = jogador[i];
                    contador++;
                }
            } else if(operador == 'I') {
                if(valor1[indice] * valor2[indice] != resultado[indice]) {
                    if(valor1[indice] - valor2[indice] != resultado[indice]) {
                        if(valor1[indice] + valor2[indice] != resultado[indice]) {
                            total++;
                        } else {
                            erros[contador] = jogador[i];
                            contador++;
                        }
                    }
                }
            }
        }

        sort(erros, erros+contador);
        //cout << erros[2] << " " << erros[1] << endl;

        if(total == n) {
            cout << "You Shall All Pass!" << endl;
        } else if(total == 0) {
            cout << "None Shall Pass!" << endl;
        } else {
            for(int i = 0; i <= contador; i++) {
                cout << erros[i];
                if(i == contador) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
        }
        total = 0;
        contador = 0;
    }



    return 0;
}
