#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1789.in", "r", stdin);

    int n, l, saida;
    saida = 0;

    while(cin >> n) {

        if(n == NULL) {
            break;
        }

        for(int i = 1; i <= n; i++) {

            cin >> l;

            if(l < 10 and saida <= 1) {
                saida = 1;
            }
            if(l >= 10 and l < 20 and saida <= 2) {
                saida = 2;
            }
            if(l >= 20 and saida <= 3) {
                saida = 3;
            }

        }

        cout << saida << endl;
        saida = 0;
    }


    return 0;
}
