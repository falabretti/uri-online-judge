#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //;freopen("2143.in", "r", stdin);

    int m, t;

    while(cin >> t) {
        if(t == 0) {
            break;
        }

        for(int i = 1; i <= t; i++) {

            cin >> m;

            if(m >= 3 and m <= 10000) {
                if(m % 2 == 0) {
                    cout << m * 2 - 2 << endl;
                }
                if(m % 2 != 0) {
                    cout << m * 2 - 1 << endl;
                }
            }
        }
    }

    return 0;
}
