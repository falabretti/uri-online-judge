#include <iostream>

using namespace std;

int main() {

    string entrada, nome3, nome7, nome9;

    for(int i = 1; i <= 10; i++) {
        cin >> entrada;
        if(i == 3) {
            nome3 = entrada;
        }
        if(i == 7) {
            nome7 = entrada;
        }
        if(i == 9) {
            nome9 = entrada;
        }
    }

    cout << nome3 << endl;
    cout << nome7 << endl;
    cout << nome9 << endl;

    return 0;
}
