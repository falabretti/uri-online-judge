#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    double n;

    while(cin >> n) {

        int h = 0, m = 0, s = 0;

        if(n >= 0 and n < 90 or n == 360) {
            cout << "Bom Dia!!" << endl;
            if(n == 0 or n == 360) {
                cout << "06:00:00" << endl;
            } else {
                h = 6;
                m = n * 4;
                printf("%02d:%02d:%02d\n", h, m, s);
            }
        }
        if(n >= 90 and n < 180) {
            cout << "Boa Tarde!!" << endl;
            h = 12;
            n -= 90;
            m = n * 4;
            printf("%02d:%02d:%02d\n", h, m, s);

        }
        if(n >= 180 and n < 270) {
            cout << "Boa Noite!!" << endl;
            h = 18;
            n -= 180;
            m = n * 4;
            printf("%02d:%02d:%02d\n", h, m, s);
        }
        if(n >= 270 and n < 360) {
            cout << "De Madrugada!!" << endl;
            n -= 270;
            m = n * 4;
            printf("%02d:%02d:%02d\n", h, m, s);
        }
    }

    return 0;
}
