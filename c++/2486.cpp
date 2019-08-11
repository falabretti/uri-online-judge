#include <iostream>

using namespace std;

int main() {

    int qnt, un, total = 0;
    string alimento;

    while(cin >> qnt) {
        if(qnt == 0) {
            break;
        }

        while(qnt--) {
            cin >> un;
            getline(cin, alimento);
            if(alimento == " suco de laranja") {
                total += 120 * un;
            }
            if(alimento == " morango fresco") {
                total += 85 * un;
            }
            if(alimento == " mamao") {
                total += 85 * un;
            }
            if(alimento == " goiaba vermelha") {
                total += 70 * un;
            }
            if(alimento == " manga") {
                total += 56 * un;
            }
            if(alimento == " laranja") {
                total += 50 * un;
            }
            if(alimento == " brocolis") {
                total += 34 * un;
            }
        }

        if(total >= 110 and total <= 130) {
            cout << total << " mg" << endl;
        }
        if(total > 130) {
            cout << "Menos " << total - 130 << " mg" << endl;
        }
        if(total < 110) {
            cout << "Mais " << 110 - total << " mg" << endl;
        }
        total = 0;
    }

    return 0;
}
