#include <bits/stdc++.h>

using namespace std;

int retira_cpf(string linha, vector<char> &vec_cpf) {

    int i;
    for(i = 0; i < linha.size() and vec_cpf.size() < 11; i++) {
        if(isdigit(linha[i])) vec_cpf.push_back(linha[i]);
    }

    return i - 1;
}

double retira_num(int pos, string linha) {

    vector<char> vec;
    bool ponto = false;
    int cont = 0;

    for(int i = pos; i < linha.size(); i++) {
        if(isdigit(linha[i])) {
           vec.push_back(linha[i]);

           if(ponto) cont++;
           if(cont == 2) break;
        }

        if(linha[i] == '.') {
            vec.push_back(linha[i]);
            ponto = true;
        }
    }

    char char_vec[linha.size()];
    copy(vec.begin(), vec.end(), char_vec);

    return strtod(char_vec, NULL);
}

int main() {

    //freopen("entrada.in", "r", stdin);
    cout << fixed << setprecision(2);

    string linha_1, linha_2;
    cin >> linha_1 >> linha_2;

    vector<char> cpf;

    int pos = retira_cpf(linha_1, cpf);

    cout << "cpf ";
    for(int i = 0; i < 11; i++) {
        cout << cpf[i];
    }
    cout << endl;

    double num_1 = retira_num(pos, linha_1);
    double num_2 = retira_num(0, linha_2);

    cout << num_1 + num_2 << endl;

    return 0;
}
