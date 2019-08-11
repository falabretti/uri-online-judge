#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    ///freopen("2727.in", "r", stdin);
    int n, contagem = 0, esp = 0, total;
    string letra;
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    while(scanf("%d\n", &n) != EOF) {

        while(n--) {
            getline(cin, letra);

            int tam = letra.size();
            char letraArray[tam];
            strcpy(letraArray, letra.c_str());

            for(int i = 0; i < tam; i++) {
                if(esp == 0) {
                    if(letraArray[i] == '.') {
                        contagem++;
                    }
                }
                if(letraArray[i] == ' ') {
                    esp++;
                }
            }

            cout << alfabeto[(contagem + esp * 3) - 1] << endl;
            contagem = 0;
            esp = 0;
        }
    }

    return 0;
}
