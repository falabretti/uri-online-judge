#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

int main() {

    //freopen("1243.in", "r", stdin);
    string entrada, palavra;

    while(getline(cin, entrada)) {
        stringstream s(entrada);
        int soma = 0;
        int total = 0;

        while(s >> palavra) {
            int tam = palavra.size();

            bool word = true;

            for(int i = 0; i < tam; i++) {
                if(isalpha(palavra[i]) or palavra[i] == '.') {
                    if(isalpha(palavra[i])) {
                        continue;
                    } else {
                        if(i != tam - 1 or tam == 1) {
                            word = false;
                            break;
                        }
                    }
                } else {
                    word = false;
                    break;
                }
            }

            if(word) {
                if(palavra[tam - 1] == '.') {
                    tam--;
                }
                soma += tam;
                total++;
            }
            //cout << palavra << " " << tam << " " << word << endl;
        }
        int pontos;
        if(soma != 0) {
            int media = soma / total;
            if(media <= 3) {
                pontos = 250;
            } else if(media > 3 and media <= 5) {
                pontos = 500;
            } else if(media >= 6) {
                pontos = 1000;
            }
        } else {
            pontos = 250;
        }
        cout << pontos << endl;
    }

    return 0;
}
