#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int tam = frase.length();
    char c_frase[tam + 1];
    strcpy(c_frase, frase.c_str());

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << c_frase[i];
    }
    cout << endl;

    return 0;
}
