#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

bool is_impossivel(int v1, int v2, int res) {

    if(v1 + v2 == res) return false;
    if(v1 - v2 == res) return false;
    if(v1 * v2 == res) return false;

    return true;
}

int main() {

    //freopen("entrada.in", "r", stdin);

    int qnt_exp;

    while(cin >> qnt_exp) {
        cin.get();

        int valor_1[qnt_exp];
        int valor_2[qnt_exp];
        int resultado[qnt_exp];

        for(int i = 0; i < qnt_exp; i++) {
            string num1, num2, res;

            getline(cin, num1, ' ');
            getline(cin, num2, '=');
            getline(cin, res);

            valor_1[i] = strtol(num1.c_str(), NULL, 10);
            valor_2[i] = strtol(num2.c_str(), NULL, 10);
            resultado[i] = strtol(res.c_str(), NULL, 10);
        }

        vector<string> erros;

        for(int i = 0; i < qnt_exp; i++) {
            string nome;
            int index;
            char op;

            cin >> nome >> index >> op;
            index--;

            if(op == '+') {
                if(valor_1[index] + valor_2[index] != resultado[index]) erros.push_back(nome);
            }
            else if(op == '-') {
                if(valor_1[index] - valor_2[index] != resultado[index]) erros.push_back(nome);
            }
            else if(op == '*') {
                if(valor_1[index] * valor_2[index] != resultado[index]) erros.push_back(nome);
            }
            else if(op == 'I') {
                if(not is_impossivel(valor_1[index], valor_2[index], resultado[index])) erros.push_back(nome);
            }
        }

        int tam_erros = erros.size();

        if(tam_erros == 0) {
            cout << "You Shall All Pass!" << endl;
        }
        else if(tam_erros == qnt_exp) {
            cout << "None Shall Pass!" << endl;
        }
        else {
            sort(erros.begin(), erros.end());

            for(int i = 0; i < tam_erros; i++) {
                cout << erros[i];

                if(i == tam_erros - 1) cout << endl;
                else cout << " ";
            }
        }
    }

    return 0;
}
