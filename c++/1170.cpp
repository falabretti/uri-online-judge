#include <iostream>

using namespace std;

int main() {

    int n;
    double comida;

    cin >> n;

    while(n--) {
        cin >> comida;
        int i = 0;

        while(comida > 1) {
            comida = comida / 2;
            i++;
        }
        cout << i << " dias" << endl;
    }

    return 0;
}
