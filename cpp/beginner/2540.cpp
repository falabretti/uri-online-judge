#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    ///freopen("2540.in", "r", stdin);

    int n, opt;
    double sim = 0, necessario;

    while(scanf("%d", &n) != EOF) {

        for(int i = 1; i <= n; i++) {
            cin >> opt;
            if(opt == 1) {
                sim++;
            }
        }

        necessario = n * 2.0 / 3.0;

        if(sim >= necessario) {
           cout << "impeachment" << endl;
        } else {
            cout << "acusacao arquivada" << endl;
        }

        sim = 0;
    }

    return 0;
}
