#include <iostream>

using namespace std;

int main() {

    int t, b, atk_01, def_01, lev_01, atk_02, def_02, lev_02, golpe_01, golpe_02;

    cin >> t;

    while(t--) {

        cin >> b;
        cin >> atk_01 >> def_01 >> lev_01;
        cin >> atk_02 >> def_02 >> lev_02;

        golpe_01 = (atk_01 + def_01) / 2;
        golpe_02 = (atk_02 + def_02) / 2;

        if(lev_01 % 2 == 0) {
            golpe_01 += b;
        }
        if(lev_02 % 2 == 0) {
            golpe_02 += b;
        }

        if(golpe_01 > golpe_02) {
            cout << "Dabriel" << endl;
        }
        if(golpe_01 < golpe_02) {
            cout << "Guarte" << endl;
        }
        if(golpe_01 == golpe_02) {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
