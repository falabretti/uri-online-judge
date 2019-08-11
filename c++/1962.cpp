#include <iostream>

using namespace std;

int main() {

    int n, ano, saida;
    string epoca;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> ano;
        saida = 2015 - ano;
        if(saida <= 0) {
            saida--;
            if(saida < 0) {
                saida *= -1;
            }
            epoca = " A.C.\n";
        } else {
            epoca = " D.C.\n";
        }
        cout << saida << epoca;
    }

    return 0;
}
