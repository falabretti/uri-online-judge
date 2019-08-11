#include <iostream>

using namespace std;

int main() {

    int a = 0;
    int b = 1;
    int c;

    int fib[40];

    for(int i = 0; i < 40; i++) {
        c = a + b;
        fib[i] = c;

        a = b;
        b = c;
    }

    int n;

    while(cin >> n) {
        if(n == 0) break;

        cout << fib[n - 1] << endl;
    }

    return 0;
}
