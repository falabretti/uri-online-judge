#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1253.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {

        string entrada;
        int deslocamento;

        cin >> entrada;
        cin >> deslocamento;

        int tam = entrada.size();

        for(int i = 0; i < tam; i++) {

            entrada[i] -= deslocamento;

            if(entrada[i] < 65) {
                entrada[i] += 26;
            }

        }

        cout << entrada << endl;

    }


    return 0;
}
