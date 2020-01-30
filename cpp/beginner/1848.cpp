#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    ///freopen("1848.in", "r", stdin);

    int gritos = 0;
    int num = 0;
    string entrada;
    while(gritos < 3) {

        cin >> entrada;
        cout << entrada << endl;
        if(entrada == "--*") {
            num += 1;
        }
        if(entrada == "-*-") {
            num += 2;
        }
        if(entrada == "*--") {
            num += 4;
        }
        if(entrada == "caw caw") {

            if(gritos == 3) {
                break;
            }
            cout << num << endl;
            num = 0;
            gritos++;
        }
    }


    return 0;
}
