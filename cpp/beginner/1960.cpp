#include <iostream>

using namespace std;

int main() {

    int n;
    int i, v, x, l, c, d;
    bool teste;

    cin >> n;

    d = n / 500;
    n = n % 500;
    c = n / 100;
    n = n % 100;
    l = n / 50;
    n = n % 50;
    x = n / 10;
    n = n % 10;
    v = n / 5;
    n = n % 5;
    i = n;

    if(c == 4) {
        cout << "CM";
        teste = true;
    } else {
        while(d--) {
            cout << 'D';
        }
    }

    if(teste) {
        if(x == 4) {
            cout << "XC";
            teste = true;
        } else {
            while(c--) {
                cout << 'C';
            }
        }
    }



    return 0;
}
