#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    string pergunta;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin.ignore();
        getline(cin, pergunta);
        cout << "I am Toorg!" << endl;
    }

    return 0;
}
