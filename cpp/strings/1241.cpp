#include <iostream>
#include <cstdio>

using namespace std;


int main() {

    //freopen("1241.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        string p1, p2;
        cin >> p1 >> p2;

        int tam1 = p1.size();
        int tam2 = p2.size();

        if(tam2 > tam1) {
            cout << "nao encaixa" << endl;
        }
        else if(p1 == p2) {
            cout << "encaixa" << endl;
        } else {
            bool encaixa = true;

            for(int i = 0; i < tam2; i++) {
                if(p1[tam1 - tam2 + i] != p2[i]) {
                    encaixa = false;
                    break;
                }
            }
            if(encaixa) {
                cout << "encaixa" << endl;
            } else {
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0;
}
