#include <iostream>

using namespace std;

int main () {

    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    if (p == 1) {
        if ((r == a) && (r == 1)) {
            cout << "Jogador 2 ganha!" << endl;
        } else if ((r != a) && (a == 0)) {
            cout << "Jogador 1 ganha!" << endl;
        } else {
            if ((j1 + j2) % 2 == 0) {
                cout << "Jogador 1 ganha!" << endl;
            } else if ((j1 + j2) != 0) {
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    } else if (p == 0) {
        if ((r == a) && (r == 1)) {
            cout << "Jogador 2 ganha!" << endl;
        } else if ((r != a) && (a == 0)) {
            cout << "Jogador 1 ganha!" << endl;
        } else {
            if ((j1 + j2) % 2 == 0) {
                cout << "Jogador 2 ganha!" << endl;
            } else if ((j1 + j2) != 0) {
                cout << "Jogador 1 ganha!" << endl;
            }
        }
    }
/// 0 1 2 0 0


    return 0;
}
