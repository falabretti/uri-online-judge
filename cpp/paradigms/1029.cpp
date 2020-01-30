#include <iostream>
#include <cstdio>

using namespace std;

int total = 0;

int fib(int n) {
    total++;

    if(n == 0 or n == 1) return n;

    return fib(n - 1) + fib(n - 2);
}

int main() {

    //freopen("entrada.in", "r", stdin);
    int testes;
    cin >> testes;

    while(testes--) {
        int num;
        cin >> num;

        printf("fib(%d) = %d calls = %d\n", num, total - 1, fib(num));
        total = 0;
    }

    return 0;
}
