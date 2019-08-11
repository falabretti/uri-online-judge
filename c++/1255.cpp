#include <iostream>
#include <cstdio>

using namespace std;

char minuscula(char ptr) {

    if(ptr >= 65 and ptr <= 90) {
        return ptr + 32;
    } else {
        return ptr;
    }
}

bool se_letra(char ptr) {

    if(ptr >= 65 and ptr <= 90 or ptr >= 97 and ptr <= 122) {
        return true;
    } else {
        return false;
    }
}

int main() {

    //freopen("1255.in", "r", stdin);
    int n;
    cin >> n;
    cin.get();

    int alfabeto[26];
    for(int i = 0; i < 26; i++) {
        alfabeto[i] = 0;
    }

    while(n--) {
        string entrada;
        getline(cin, entrada);

        int tam = entrada.size();
        int maior = 0;

        for(int i = 0; i < tam; i++) {
            int pos = minuscula(entrada[i]) - 97;
            if(se_letra(entrada[i])) {
                alfabeto[pos]++;
                if(alfabeto[pos] > maior) {
                    maior = alfabeto[pos];
                }
            }
        }

        for(int i = 0; i < 26; i++) {
            if(alfabeto[i] == maior) {
                cout << char(i + 97);
            }
            alfabeto[i] = 0;
        }
        cout << endl;
    }

    return 0;
}
