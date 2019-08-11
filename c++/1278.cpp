#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1278.in", "r", stdin);
    int n;
    bool teste = false;

    while(cin >> n) {
        cin.get();
        if(n == 0) {
            break;
        }
        if(teste) {
            cout << endl;
        }

        string linhas[n];
        int maior = 0;

        for(int l = 0; l < n; l++) {
            string entrada;
            getline(cin, entrada);

            int tam = entrada.size();

            for(int i = tam - 1; i >= 0; i--) {
                if(not isalpha(entrada[i])) {
                    if(not isalpha(entrada[i-1]) or not isalpha(entrada[i+1])) {
                        entrada.erase(i, 1);
                    }
                }
            }

            tam = entrada.size();
            if(tam > maior) {
                maior = tam;
            }

            linhas[l] = entrada;
        }

        for(int i = 0; i < n; i ++) {
            int tam = linhas[i].size();

            for(int j = 1; j <= maior - tam; j++) {
                cout << " ";
            }
            cout << linhas[i] << endl;
        }
        teste = true;
    }

    return 0;
}
