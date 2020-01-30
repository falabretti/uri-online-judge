#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string n;

    cin >> n;

    int tam = n.size();
    char char_n[tam];
    strcpy(char_n, n.c_str());

    tam--;

    for(int i = tam; i >= 0; i--) {
        cout << char_n[i];
    }
    cout << endl;

    return 0;
}
