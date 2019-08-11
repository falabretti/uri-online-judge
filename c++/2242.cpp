#include <bits/stdc++.h>

using namespace std;

bool isvogal(char ptr) {
    bool teste = false;
    if(ptr == 'a' or ptr == 'e' or ptr == 'i' or ptr == 'o' or ptr == 'u') {
        teste = true;
    }

    return teste;
}

int main() {

    string entrada, risada;
    cin >> entrada;

    for(int i = 0; i < entrada.size(); i++) {
        if(isvogal(entrada[i])) {
            risada += entrada[i];
        }
    }

    string risada_invertida;
    for(int i = risada.size() - 1; i >= 0; i--) {
        risada_invertida += risada[i];
    }

    if(risada == risada_invertida) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
