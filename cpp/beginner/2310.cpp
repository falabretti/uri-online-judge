#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("2310.in", "r", stdin);
    cout << fixed << setprecision(2);
    int n, entrada;
    double saque = 0, bloqueio = 0, ataque = 0;
    double saqueTentativa = 0, bloqueioTentativa = 0, ataqueTentativa = 0;
    string nome;

    cin >> n;

    while(n--) {
        cin >> nome;

        cin >> entrada;
        saqueTentativa += entrada;
        cin >> entrada;
        bloqueioTentativa += entrada;
        cin >> entrada;
        ataqueTentativa += entrada;

        cin >> entrada;
        saque += entrada;
        cin >> entrada;
        bloqueio += entrada;
        cin >> entrada;
        ataque += entrada;
    }

    cout << "Pontos de Saque: " << (saque * 100) / saqueTentativa << " %." << endl;
    cout << "Pontos de Bloqueio: " << (bloqueio * 100) / bloqueioTentativa << " %." << endl;
    cout << "Pontos de Ataque: " << (ataque * 100) / ataqueTentativa << " %." << endl;

    return 0;
}
