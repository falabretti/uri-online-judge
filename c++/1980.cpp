#include <iostream>
#include <cstdio>

using namespace std;

long long int fat(int n) {
    if(n == 0) return 1;
    return n * fat(n - 1);
}

int main() {

    //freopen("entrada.in", "r", stdin);
    string entrada;

    while(cin >> entrada) {
        if(entrada == "0") break;

        int tam = entrada.size();

        long long int total = fat(tam);

        cout << total << endl;
    }

    return 0;
}

