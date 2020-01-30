#include <iostream>

using namespace std;

int main() {

    int n, total = 0, rena;

    for(int i = 1; i <= 9; i++) {
        cin >> n;
        total += n;
    }

    rena = total % 9;

    switch(rena) {

    case 1:
        cout << "Dasher" << endl;
        break;
    case 2:
        cout << "Dancer" << endl;
        break;
    case 3:
        cout << "Prancer" << endl;
        break;
    case 4:
        cout << "Vixen" << endl;
        break;
    case 5:
        cout << "Comet" << endl;
        break;
    case 6:
        cout << "Cupid" << endl;
        break;
    case 7:
        cout << "Donner" << endl;
        break;
    case 8:
        cout << "Blitzen" << endl;
        break;
    case 0:
        cout << "Rudolph" << endl;
        break;
    }

    return 0;
}
