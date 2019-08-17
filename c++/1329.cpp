#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    int jogos;

    while(cin >> jogos) {
        if(jogos == 0) break;

        int total_mary = 0;
        int total_john = 0;

        while(jogos--) {

            int partida;
            cin >> partida;

            if(partida == 0) total_mary++;
            if(partida == 1) total_john++;
        }

        printf("Mary won %d times and John won %d times\n", total_mary, total_john);
    }

    return 0;
}
