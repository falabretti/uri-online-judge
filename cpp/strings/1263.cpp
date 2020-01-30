#include <iostream>
#include <cstdio>
#include <locale>
#include <ctype.h>

using namespace std;

int main() {

    //freopen("1263.in", "r", stdin);
    string entrada;

    while(getline(cin, entrada)) {
        int total = 0;
        int tam = entrada.size();
        char last = '0', last2 = '0';

        for(int i = 0; i < tam; i++) {
            entrada[i] = char(tolower(entrada[i]));
        }

        for(int i = 0; i < tam; i++) {
            if(i == 0) {
                last = entrada[i];
            }
            if(entrada[i] == ' ') {
                if(entrada[i + 1] == last and entrada[i + 1] != last2) {
                    total++;
                }
                last2 = last;
                last = entrada[i + 1];
            }
        }
        cout << total << endl;
    }

    return 0;
}
