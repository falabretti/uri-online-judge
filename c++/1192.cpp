#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int testes;
    cin >> testes;

    while(testes--) {
        string entrada;
        cin >> entrada;

        int num1 = entrada[0] - '0';
        int num2 = entrada[2] - '0';
        char letra = entrada[1];

        int saida;

        if(num1 == num2) saida = num1 * num2;
        else if(isupper(letra)) saida = num2 - num1;
        else saida = num1 + num2;

        cout << saida << endl;
        }

    return 0;
}
