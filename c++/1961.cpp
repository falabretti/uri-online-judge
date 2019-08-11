#include <iostream>

using namespace std;

int main() {

    int pulo, qnt, canos, pos = 0, atual;

    cin >> pulo >> qnt;

    for(int i = 1; i <= qnt; i++) {
        cin >> canos;
        if(i == 1) {
            atual = canos;
            pos++;
        } else {
            if(atual <= canos) {
                if(pulo >= canos - atual) {
                    pos++;
                    atual = canos;
                } else {
                    break;
                }
            }
            if(atual > canos) {
                if(pulo >= atual - canos) {
                    pos++;
                    atual = canos;
                } else {
                    break;
                }
            }
        }
    }

    if(pos == qnt) {
        cout << "YOU WIN" << endl;
    } else {
        cout << "GAME OVER" << endl;
    }

    return 0;
}
