#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int testes;
    cin >> testes;

    for(int i = 1; i <= testes; i++) {
        int n;
        cin >> n;

        int jogadores[n];

        for(int j = 0; j < n; j++) {
            cin >> jogadores[j];
        }

        printf("Case %d: %d\n", i, jogadores[n / 2]);
    }

    return 0;
}
