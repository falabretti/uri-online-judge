#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string n;
    int contador = 0;

    cin >> n;

    int t = n.length();
    char valor[t + 2];
    strcpy(valor, n.c_str());

    for(int i = 0; i < t; i++) {
        if(valor[i] == '1') {
                contador++;
        }
    }

    if(contador % 2 == 0) {
        valor[t] = '0';
    }
    if(contador % 2 != 0) {
        valor[t] = '1';
    }

    for(int j = 0; j <= t; j++) {
        cout << valor[j];
    }
    cout << endl;

    return 0;
}
