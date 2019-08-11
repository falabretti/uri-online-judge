#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //freopen("2520.in", "r", stdin);
    int l, c;

    while(cin >> l >> c) {

        int cidade[l][c];
        int pos_treinador[2], pos_pokemon[2];
        int distancia = 0;

        for(int i = 0; i < l; i++) {
            for(int j = 0; j < c; j++) {
                cin >> cidade[i][j];
                if(cidade[i][j] == 1) {
                    pos_treinador[0] = i;
                    pos_treinador[1] = j;
                }
                if(cidade[i][j] == 2) {
                    pos_pokemon[0] = i;
                    pos_pokemon[1] = j;
                }
            }
        }

        if(pos_treinador[0] > pos_pokemon[0]) {
            distancia += pos_treinador[0] - pos_pokemon[0];
        } else {
            distancia += pos_pokemon[0] - pos_treinador[0];
        }

        if(pos_treinador[1] > pos_pokemon[1]) {
            distancia += pos_treinador[1] - pos_pokemon[1];
        } else {
            distancia += pos_pokemon[1] - pos_treinador[1];
        }

        cout << distancia << endl;
    }

    return 0;
}
