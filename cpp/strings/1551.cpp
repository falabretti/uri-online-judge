#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.get();

    while(n--) {
        string frase;
        getline(cin, frase);

        bool alfabeto[26];
        memset(alfabeto, false, sizeof(alfabeto));

        string letras = "";

        for(char letra : frase) {
            if(isalpha(letra)) {
                int idx = letra - 'a';
                
                if(not alfabeto[idx]) {
                    letras += letra;
                    alfabeto[idx] = true;
                }
            }
        }

        int tam = letras.size();
        string resultado;

        if(tam == 26) resultado = "frase completa";
        else if (tam >= 13) resultado = "frase quase completa";
        else resultado = "frase mal elaborada";

        cout << resultado << endl;
    }

    return 0;
}