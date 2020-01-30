#include <iostream>

using namespace std;

int main() {

    int entrada, turistas = 0, jipes = 0;
    string acao;

    while(cin >> acao) {
        if(acao == "ABEND") {
            cout << turistas << endl;
            cout << jipes << endl;
            break;
        }

        cin >> entrada;

        if(acao == "SALIDA") {
            turistas += entrada;
            jipes++;
        }
        if(acao == "VUELTA") {
            turistas -= entrada;
            jipes--;
        }
    }


    return 0;
}
