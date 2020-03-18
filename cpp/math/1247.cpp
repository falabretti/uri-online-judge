#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("1247.in", "r", stdin);
    int d, v_fugitivo, v_guarda;

    while(cin >> d >> v_fugitivo >> v_guarda) {

            int d_fugitivo = d, d_guarda = 0;

        while(d_fugitivo < 12) {
                d_fugitivo += v_fugitivo;
                d_guarda += v_guarda;
        }
        //cout << d_fugitivo << endl;
        //cout << d_guarda << endl;

        if(v_guarda == 12 and v_guarda > v_fugitivo) {
            cout << 'S' << endl;
        }
        else {
            if(d_fugitivo >= d_guarda) {
                cout << 'N' << endl;
            } else {
                cout << 'S' << endl;
            }
        }
    }

    return 0;
}
