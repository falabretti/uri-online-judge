#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1277.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        int qnt;
        cin >> qnt;

        string alunos[qnt];
        string frequencia[qnt];

        for(int i = 0; i < qnt; i++) {
            cin >> alunos[i];
        }
        for(int i = 0; i < qnt; i++) {
            cin >> frequencia[i];
        }

        for(int i = 0; i < qnt; i ++) {
            //cout << alunos[i] << " " << frequencia[i] << " ";
            int total = 0, presenca = 0;
            int tam = frequencia[i].size();
            bool teste;
            if(i == 0) {
                teste = false;
            }

            for(int j = 0; j < tam; j++) {
                if(frequencia[i][j] == 'P' or frequencia[i][j] == 'A') {
                    if(frequencia[i][j] == 'P') {
                        presenca++;
                    }
                    total++;
                }
            }
            double media = presenca * 100 / double(total);

            if(media < 75) {
                if(teste) {
                    cout << " ";
                }
                cout << alunos[i];
                teste = true;
            }
            if(i == qnt - 1) {
                cout << endl;
            }
        }


    }


    return 0;
}
