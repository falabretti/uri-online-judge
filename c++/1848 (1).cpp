#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main() {

    int gritos = 0, num = 0;
    string entrada;

    while(gritos < 3) {

        getline(cin, entrada, '\n');

        if(entrada.length() == 3) {

            char c_entrada [4];
            strcpy(c_entrada, entrada.c_str());

            for(int i = 0; i <= 2; i++) {
                if(c_entrada[i] == '*') {
                    if(i == 0) {
                        num += 4;
                    }
                    if(i != 0) {
                        num += 4 / (i * 2);
                    }
                }
            }

        }
        else if(entrada == "caw caw") {
                cout << num << endl;
                num = 0;
                gritos++;
            }
    }

    return 0;
}
