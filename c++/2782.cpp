#include <iostream>

using namespace std;

int main() {

    int n, contador = 1;

    cin >> n;

    int entrada[n];

    for(int i = 0; i < n; i++) {
        cin >> entrada[i];

        if(i > 1) {
            if(!(entrada[i-1] - entrada[i-2] == entrada[i] - entrada[i-1])) {
                contador++;
            }
        }
    }

    cout << contador << endl;

    return 0;
}
