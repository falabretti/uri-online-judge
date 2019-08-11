#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main() {

    //freopen("2712.in", "r", stdin);

    int testes;
    cin >> testes;

    map<char, string> dias = {
        {'1', "MONDAY"},
        {'2', "MONDAY"},
        {'3', "TUESDAY"},
        {'4', "TUESDAY"},
        {'5', "WEDNESDAY"},
        {'6', "WEDNESDAY"},
        {'7', "THURSDAY"},
        {'8', "THURSDAY"},
        {'9', "FRIDAY"},
        {'0', "FRIDAY"},
    };

    while(testes--) {

        string placa;
        cin >> placa;

        bool teste_placa = true;


        if(placa.size() != 8 or placa[3] != '-'){
            teste_placa = false;
        } else {

            for(int i = 0; i < 3; i++) {
                if(not(isupper(placa[i]))) {
                    teste_placa = false;
                    break;
                }
            }

            for(int i = 4; i < 8; i++) {
                if(not(isdigit(placa[i]))) {
                    teste_placa = false;
                    break;
                }
            }
        }

        if(teste_placa) {
            cout << dias[placa[7]] << endl;
        } else {
            cout << "FAILURE" << endl;
        }
    }

    return 0;
}
