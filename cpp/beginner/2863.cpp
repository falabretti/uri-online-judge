#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int n;
    double t, saida = 100;

    while(scanf("%d", &n) != EOF) {

        while(n--) {
            cin >> t;
            if(t < saida) {
                saida = t;
            }
        }
        cout << saida << endl;
        saida = 100;
    }

    return 0;
}
