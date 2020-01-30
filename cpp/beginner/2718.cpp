#include <iostream>

using namespace std;

int main() {

    int testes;
    cin >> testes;

    while(testes--) {

        int entrada;
        cin >> entrada;

        int anterior = 0;
        int seq_max = 0;
        int seq = 0;

        while(entrada > 0) {
            int bit = entrada % 2;
            entrada /= 2;
            cout << bit;

            if(bit == 1) {
                seq++;
            } else {
                if(seq >= seq_max) {
                    seq_max = seq;
                }
                seq = 0;
            }
        }

        cout << endl;
        cout << seq_max << endl;




    }

    return 0;
}
