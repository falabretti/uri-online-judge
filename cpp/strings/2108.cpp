#include <bits/stdc++.h>

using namespace std;

int main() {

    string frase;

    string maior = "";

    while(getline(cin, frase)) {
        if(frase == "0") break;

        stringstream ss(frase);
        string palavra;

        bool first = true;

        while(ss >> palavra) {
            
            if(not first) cout << '-';
            else first = false;

            int tam = palavra.size();
            if(tam >= maior.size()) maior = palavra;
            
            cout << tam;
        }
        cout << endl;
    }

    cout << endl <<  "The biggest word: " << maior << endl;

    return 0;
}