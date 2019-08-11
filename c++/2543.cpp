#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    ///freopen("2543.in", "r", stdin);

    int n, id, idTeste, jogo, total = 0;

    while(scanf("%d %d\n", &n, &id) != EOF) {

        while(n--) {
            cin >> idTeste >> jogo;
            if(idTeste == id) {
                if(jogo == 0) {
                    total++;
                }
            }
        }
        cout << total << endl;
        total = 0;
    }

    return 0;
}
