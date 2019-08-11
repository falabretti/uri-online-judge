#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1213.in", "r", stdin);
    long long int n;

    while(cin >> n) {

        long long int cont = 2, teste = 11, i = 100;;

        while(teste % n != 0) {
            teste += i;
            i = i * 10;
            cont++;
            cout << cont << endl;
        }

        cout << cont << endl;
    }

    return 0;
}
