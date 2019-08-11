#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1198.in", "r", stdin);
    long long int hashmat, oponente;

    while(cin >> hashmat >> oponente) {

        if(hashmat > oponente) {
            cout << hashmat - oponente << endl;
        } else {
            cout << oponente - hashmat << endl;
        }
    }

    return 0;
}
