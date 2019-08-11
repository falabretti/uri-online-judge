#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1973.in", "r", stdin);
    long long int n, totalInicial = 0, estrelasAtacadas = 0;

    cin >> n;

    long long int estrelas[n];
    char verificacaoEstrelasAtacadas[n];

    for(int i = 0; i < n; i++) {
        cin >> estrelas[i];
        totalInicial += estrelas[i];
    }

    for(int i = 0;;) {
        if(estrelas[i] % 2 == 0) {
            if(estrelas[i] > 0) {
                totalInicial -= 1;
                estrelas[i]--;
                if(verificacaoEstrelasAtacadas[i] != 'v') {
                    estrelasAtacadas++;
                    verificacaoEstrelasAtacadas[i] = 'v';
                }
            }
            if(i == 0) {
                break;
            }
            i--;
        }
        if(estrelas[i] % 2 != 0) {
            if(estrelas[i] > 0) {
                totalInicial -= 1;
                estrelas[i]--;
                if(verificacaoEstrelasAtacadas[i] != 'v') {
                    estrelasAtacadas++;
                    verificacaoEstrelasAtacadas[i] = 'v';
                }
            }
            if(i == n - 1) {
                break;
            }
            i++;
        }
    }

    cout << estrelasAtacadas << " " << totalInicial << endl;

    return 0;
}
