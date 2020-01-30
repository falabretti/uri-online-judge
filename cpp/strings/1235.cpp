#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1235.in", "r", stdin);
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string entrada;

        getline(cin, entrada);
        int tam = entrada.size();
        int metade = tam / 2 - 1;

        for(int i = metade; i >= 0; i--) {
            cout << entrada[i];
        }
        for(int i = tam - 1; i > metade; i--) {
            cout << entrada[i];
        }
        cout << endl;
    }

    return 0;
}
