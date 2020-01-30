#include <iostream>

using namespace std;

int main() {

    int valor = 97;

    for(char letra = 'a'; letra <= 'z'; letra++) {
        cout << valor << " e " << letra << endl;
        valor++;
    }

    return 0;
}
