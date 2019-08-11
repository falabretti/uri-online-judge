#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    ///freopen ("entrada.in","r", stdin);
    int i, n, pa, pb, t;
    double ca, cb;
    t = 0;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> pa >> pb >> ca >> cb;
        while(pa <= pb and t <= 100) {
            pa += pa * (ca / 100.0);
            pb += pb * (cb / 100.0);
            t++;
        }
        if(t > 100) {
            cout << "Mais de 1 seculo." << endl;

        } else {
            cout << t << " anos." <<endl;
        }
        t = 0;
    }

    return 0;
}

