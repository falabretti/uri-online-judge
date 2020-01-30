#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int quantidade, lampada;
    char mensagem[26];

    while(scanf("%s", &mensagem) != EOF) {
        cin >> quantidade;
        while(quantidade--) {
            cin >> lampada;
            cout << mensagem[lampada - 1];
        }
        cout << endl;
    }

    return 0;
}
