#include <iostream>

using namespace std;

int main() {

    int n;
    string jog1, jog2;

    cin >> n;

    while(n--) {
        cin >> jog1 >> jog2;

        if(jog1 == "ataque") {
            if(jog2 == "pedra") {
                cout << "Jogador 1 venceu" << endl;
            }
            if(jog2 == "papel") {
                cout << "Jogador 1 venceu" << endl;
            }
            if(jog2 == "ataque") {
                cout << "Aniquilacao mutua" << endl;
            }
        }

        if(jog1 == "pedra") {
            if(jog2 == "pedra") {
                cout << "Sem ganhador" << endl;
            }
            if(jog2 == "papel") {
                cout << "Jogador 1 venceu" << endl;
            }
            if(jog2 == "ataque") {
                cout << "Jogador 2 venceu" << endl;
            }
        }

        if(jog1 == "papel") {
            if(jog2 == "pedra") {
                cout << "Jogador 2 venceu" << endl;
            }
            if(jog2 == "papel") {
                cout << "Ambos venceram" << endl;
            }
            if(jog2 == "ataque") {
                cout << "Jogador 2 venceu" << endl;
            }
        }
    }

    return 0;
}
