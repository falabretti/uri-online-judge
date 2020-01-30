#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("1305.in", "r", stdin);
    double num, corte;

    while(cin >> num >> corte) {

        int num_int = int(num);
        double num_dec = num - num_int;

        if(num_dec > corte) {
            num_int++;
        }

        cout << num_int << endl;
    }

    return 0;
}

