#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstring>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    string entrada;

    while(cin >> entrada) {

        bool decimal = true;
        int n = 0;

        if(entrada.size() > 1) {
            if(entrada[1] == 'x') {
                decimal = false;
            }
        }

        if(decimal) {
            stringstream ss(entrada);
            ss >> n;

            if(n < 0) break;

            printf("0x%X\n", n);
        } else {
            entrada = entrada.substr(2);
            char entrada_char[entrada.size()];

            strcpy(entrada_char, entrada.c_str());
            sscanf(entrada_char, "%X", &n);

            cout << n << endl;
        }
    }

    return 0;
}
