#include <iostream>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    unsigned int num1, num2;

    while(cin >> num1 >> num2) {

        unsigned long long int resultado = num1 ^ num2;
        cout << resultado << endl;
    }

    return 0;
}
