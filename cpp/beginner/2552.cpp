#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);
    int l, c;

    while(cin >> l >> c) {
        int table[l + 2][c + 2];

        for(int i = 0; i < l + 2; i++) {
            for(int j = 0; j < c + 2; j++) {
                table[i][j] = 0;
            }
        }

        for(int i = 1; i <= l; i++) {
            for(int j = 1; j <= c; j++) {
                cin >> table[i][j];
                if(table[i][j] == 1) table[i][j] = 9;
            }
        }

        for(int i = 1; i <= l; i++) {
            for(int j = 1; j <= c; j++) {
                int total = 0;

                if(table[i][j] != 9) {
                    if(table[i-1][j] == 9) total ++;
                    if(table[i][j-1] == 9) total ++;
                    if(table[i][j+1] == 9) total ++;
                    if(table[i+1][j] == 9) total ++;

                    table[i][j] = total;
                }
            }
        }

        for(int i = 1; i <= l; i++) {
            for(int j = 1; j <= c; j++) {
                cout << table[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}
