#include <iostream>
#include <cstdio>

using namespace std;

bool se_letra(char ptr) {

    if(ptr >= 65 and ptr <= 90 or ptr >= 97 and ptr <= 122) {
        return true;
    } else {
        return false;
    }
}

int main() {

    //freopen("1024.in", "r", stdin);
    int n;
    cin >> n;
    cin.get();

    while(n--) {
        string entrada;
        getline(cin, entrada);

        int tam = entrada.size();

        for(int i = 0; i < tam; i++) {
            if(se_letra(entrada[i])) {
                entrada[i] += 3;
            }
        }

        string invertido = entrada;

        for(int i = 0, j = tam - 1; i < tam; i++, j--) {
            invertido[j] = entrada[i];
        }

        for(int i = tam / 2; i < tam; i++) {
               invertido[i]--;
        }
        cout << invertido << endl;
    }

    return 0;
}

