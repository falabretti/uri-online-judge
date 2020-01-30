#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    string frase;

    while(getline(cin, frase)) {
        if(frase == "*") break;

        stringstream ss(frase);
        string palavra;

        vector<string> palavras;

        while(ss >> palavra) {
            palavras.push_back(palavra);
        }

        bool tautograma = true;
        char letra_base = tolower(palavras[0][0]);

        for(int i = 0; i < palavras.size(); i++) {
            char letra = tolower(palavras[i][0]);

            if(letra != letra_base) {
                tautograma = false;
                break;
            }
        }

        tautograma ? cout << "Y" : cout << "N";
        cout << endl;
    }

    return 0;
}
