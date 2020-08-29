#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("1161.in", "r", stdin);
    long long int m, n;

    while(cin >> m >> n) {

        int aux_m = m - 1, aux_n = n - 1;

        if(m == 0 or m == 1) {
            m = 1;
        } else {
            while(aux_m != 1) {
                m = m * aux_m;
                aux_m--;
            }
        }
        if(n == 0 or n == 1) {
            n = 1;
        } else {

            while(aux_n != 1) {
                n = n * aux_n;
                aux_n--;
            }
        }

        cout << m + n << endl;
    }

    return 0;
}
