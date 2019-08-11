#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ordenar(string p, string s) {
    return p.size() < s.size();
}

int main() {

    int n, fotos = 0, teste;
    string fotoTeste;

    while(cin >> n) {
        if(n == 0) {
            break;
        }

        string nomes[n];

        for(int i = 0; i < n; i++) {
            cin >> nomes[i];
        }
        sort(nomes, nomes + n, ordenar);


        //for(int l = 0; l < n; l++) {
        // cout << nomes[l] << endl;
        //}

        int resultado = 0;

        for(int t = 0; t < n - 1; t++) {
            for(int j = t; j < n - 1; j++) {
                if(j == 0) {
                    fotoTeste = nomes[j];
                }
                teste = nomes[j+1].find(fotoTeste);

                if(teste >= 0) {
                    fotos++;
                    fotoTeste = nomes[j+1];
                }
            }
            if(fotos > resultado) {
                resultado = fotos;
            }
            fotos = 0;
            if(resultado > t) {
                break;
            }
        }

        cout << resultado + 1 << endl;
        resultado = 0;

    }

    return 0;
}
