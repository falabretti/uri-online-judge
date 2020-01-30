#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1768.in", "r", stdin);
    int n;

    //bool teste = false;

    while(cin >> n) {

        //if(teste) {
        //    cout << endl;
        //}

        int tam = 1;

        while(tam <= n) {
            int esp = (n - tam) / 2;

            for(int i = 1; i <= esp; i++) {
                cout << " ";
            }

            for(int i = 1; i <= tam; i++) {
                cout << "*";
            }
            tam += 2;

            //for(int i = 1; i <= esp; i++) {
            //    cout << " ";
           // }

            cout << endl;
        }

        tam = 1;

        while(tam <= 3) {
            int esp = (n - tam) / 2;

            for(int i = 1; i <= esp; i++) {
                cout << " ";
            }

            for(int i = 1; i <= tam; i++) {
                cout << "*";
            }
            tam += 2;

           // for(int i = 1; i <= esp; i++) {
            //    cout << " ";
            //}

            cout << endl;
        }
        //teste = true;
        cout << endl;
    }

    return 0;
}


