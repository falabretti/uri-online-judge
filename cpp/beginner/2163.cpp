#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("2163.in", "r", stdin);
    int l, c, l_saida = 0, c_saida = 0;

    cin >> l >> c;

    int galaxia[l][c];

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            cin >> galaxia[i][j];
        }
    }

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if(galaxia[i][j] == 42) {
                if(galaxia[i][j-1] == 7 and galaxia[i][j+1] == 7) {
                    if(galaxia[i-1][j-1] == 7 and galaxia[i-1][j] == 7 and galaxia[i-1][j+1] == 7) {
                        if(galaxia[i+1][j-1] == 7 and galaxia[i+1][j] == 7 and galaxia[i+1][j+1] == 7) {
                            l_saida = i + 1;
                            c_saida = j + 1;
                        }
                    }
                }
            }
        }
    }

    cout << l_saida << " " << c_saida << endl;

    return 0;
}
