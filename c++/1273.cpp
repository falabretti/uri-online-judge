#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1273.in", "r", stdin);
    int n;

    bool teste = false;

    while(cin >> n) {
        if(n == 0) {
            break;
        }

        if(teste) {
            cout << endl;
        }

        string palavras[n];
        int maior = 0;

        for(int i = 0; i < n; i++) {
            cin >> palavras[i];
            if(palavras[i].size() > maior) {
                maior = palavras[i].size();
            }
        }

        for(int i = 0; i < n; i++) {
            int esp = maior - palavras[i].size();
            while(esp--) {
                cout << " ";
            }
            cout << palavras[i] << endl;;
        }
        teste = true;
    }

    return 0;
}
