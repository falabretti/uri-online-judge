#include <iostream>

using namespace std;

int main() {

    string entrada;

    getline(cin, entrada);

    if(entrada.size() <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }

    return 0;
}
