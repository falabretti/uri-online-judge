#include <iostream>

using namespace std;

int main() {

    int c, n;

    cin >> c;

    while(c--) {
        cin >> n;

        if(n <= 8000) {
            cout << "Inseto!" << endl;
        }
        if(n > 8000) {
            cout << "Mais de 8000!" << endl;
        }
    }

    return 0;
}
