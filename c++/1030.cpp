#include <iostream>

using namespace std;

int josephus(int n, int k) {
    if(n == 1) return 1;

    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {

    int testes;
    cin >> testes;

    for(int i = 0; i < testes;i++) {
        int n, k;

        cin >> n >> k;

        int resultado = josephus(n, k);

        cout << "Case " << i + 1 << ": " << resultado << endl;
    }

    return 0;
}
