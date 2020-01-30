#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main () {

    char nome[10] = "x = 35";

    for(int i = 1; i <= 39; i++) {
        cout << "-";
    }
    cout << endl;

    cout << "|";
    cout << nome;
    cout << setw(38 - strlen(nome)) << "|" << endl;

    cout << "|";
    cout << setw(38) << "|" << endl;

    cout << left << setw(16) << "|";
    cout << nome;
    cout << right << setw(23 - strlen(nome)) << "|" << endl;;

    cout << "|";
    cout << setw(38) << "|" << endl;

    cout << "|";
    cout << right << setw(37) << nome << "|" << endl;

    for(int j = 1; j <= 39; j++) {
        cout << "-";
    }
    cout << endl;

    return 0;
}
