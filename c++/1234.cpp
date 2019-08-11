#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    //freopen("1234.in", "r", stdin);
    string entrada;

    while(getline(cin, entrada)) {

        bool upper = true;
        int tam = entrada.size();

        for(int i = 0; i < tam; i++) {
            if(isalpha(entrada[i])) {
                if(upper) {
                    entrada[i] = toupper(entrada[i]);
                    upper = false;
                } else {
                    entrada[i] = tolower(entrada[i]);
                    upper = true;
                }
            }
        }
        cout << entrada << endl;
    }

    return 0;
}

