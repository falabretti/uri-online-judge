#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct cortes {
    string nome;
    int validade;
};

bool ordem(cortes obj1, cortes obj2) {
    return obj1.validade < obj2.validade;
}

int main() {

    //freopen("entrada.in", "r", stdin);
    int tam;

    while(cin >> tam) {
        cortes carnes[tam];

        for(int i = 0; i < tam; i++) {
            string nome;
            int validade;

            cin >> nome >> validade;

            carnes[i] = {nome, validade};
        }

        sort(carnes, carnes + tam, ordem);

        for(int i = 0; i < tam; i++) {
            cout << carnes[i].nome;

            if(i == tam - 1) cout << endl;
            else cout << " ";
        }
    }

    return 0;
}
