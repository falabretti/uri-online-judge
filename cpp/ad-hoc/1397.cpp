#include <iostream>

using namespace std;

int main() {

    int testes;

    while(cin >> testes) {
        if(testes == 0) break;

        int pontos_a = 0;
        int pontos_b = 0;

        while(testes--) {
            int a, b;

            cin >> a >> b;

            if(a > b) pontos_a++;
            if(b > a) pontos_b++;
        }

        cout << pontos_a << " " << pontos_b << endl;
    }

    return 0;
}
