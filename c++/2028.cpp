#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("2028.in", "r", stdin);
    int n, caso = 1;

    while(scanf("%d", &n) != EOF) {

        int total = 0;
        int aux = n;

        while(aux != 0) {
            total += aux;
            aux--;
        }

        if(total + 1 == 1) {
            printf("Caso %d: %d numero\n", caso, total + 1);
        } else {
            printf("Caso %d: %d numeros\n", caso, total + 1);
        }
        caso++;

        while(aux <= n) {
            if(aux == 0) {
                cout << aux;
                if(n == 0) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
            for(int i = 1; i <= aux; i++) {
                cout << aux;
                if(aux == n and aux == i) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
            aux++;
        }
        cout << endl;
    }

    return 0;
}
