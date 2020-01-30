#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1332.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        string entrada;
        string one = "one", two = "two";
        cin >> entrada;

        int tam = entrada.size();
        int cont1 = 0;
        int cont2 = 0;

        if(tam == 5) {
            cout << 3 << endl;
        } else {
            for(int i = 0; i < 3; i++) {
                if(entrada[i] == one[i]) {
                    cont1++;
                }
                if(entrada[i] == two[i]) {
                    cont2++;
                }
            }

            if(cont1 > cont2) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
