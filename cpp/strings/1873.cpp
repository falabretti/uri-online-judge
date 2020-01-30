#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("1873.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        string sheldon, raj;
        cin >> raj;
        cin >> sheldon;
        //cout << 25 - n << " ";

        if(sheldon == "tesoura" and raj == "papel") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "papel" and raj == "tesoura") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "papel" and raj == "pedra") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "pedra" and raj == "papel") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "pedra" and raj == "lagarto") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "lagarto" and raj == "pedra") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "lagarto" and raj == "spock") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "spock" and raj == "lagarto") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "spock" and raj == "tesoura") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "tesoura" and raj == "spock") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "tesoura" and raj == "lagarto") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "lagarto" and raj == "tesoura") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "lagarto" and raj == "papel") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "papel" and raj == "lagarto") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "papel" and raj == "spock") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "spock" and raj == "papel") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "spock" and raj == "pedra") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "pedra" and raj == "spock") {
            cout << "rajesh" << endl;
        }
        if(sheldon == "pedra" and raj == "tesoura") {
            cout << "sheldon" << endl;
        }
        if(sheldon == "tesoura" and raj == "pedra") {
            cout << "rajesh" << endl;
        }
        if(sheldon == raj) {
            cout << "empate" << endl;

        }
    }

    return 0;
}
