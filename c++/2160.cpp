#include <iostream>

using namespace std;

int main() {

    string entrada;

    getline(cin, entrada);

    int tam = entrada.size();

    if(tam <= 80) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
