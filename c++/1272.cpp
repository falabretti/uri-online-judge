#include <iostream>
#include <cstdio>

using namespace std;

bool se_letra(char ptr) {

    if(ptr >= 65 and ptr <= 90 or ptr >= 97 and ptr <= 122) {
        return true;
    } else {
        return false;
    }
}

int main() {

    //freopen("1272.in", "r", stdin);
    int n;
    cin >> n;
    cin.get();

    while(n--) {
        string entrada;
        getline(cin, entrada);

        int tam = entrada.size();

        for(int i = 0; i < tam; i++) {
            if(se_letra(entrada[i])) {
                if(i == 0) {
                    cout << entrada[i];
                } else {
                    if(entrada[i-1] == ' ') {
                        cout << entrada[i];
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}

