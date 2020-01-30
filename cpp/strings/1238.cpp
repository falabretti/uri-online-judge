#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1238.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {

        string p1, p2;
        int tam1, tam2, menor;
        bool teste;

        cin >> p1 >> p2;

        tam1 = p1.size();
        tam2 = p2.size();

        if(tam1 < tam2) {
            menor = tam1;
        } else if(tam1 > tam2) {
            menor = tam2;
        } else {
            menor = tam1;
            teste = true;
        }

        for(int i = 0; i < menor; i++) {
            cout << p1[i];
            cout << p2[i];
        }

        if(tam1 > menor) {
            for(int i = menor; i < tam1; i++) {
                cout << p1[i];
            }
        }
        if(tam2 > menor) {
            for(int i = menor; i < tam2; i++) {
                cout << p2[i];
            }
        }
        cout << endl;

    }

    return 0;
}
