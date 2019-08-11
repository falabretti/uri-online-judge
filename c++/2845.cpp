#include <iostream>

using namespace std;

int main() {

    int n, id, maior = 0;

    cin >> n;

    while(n--) {
        cin >> id;
        if(id > maior) {
            maior = id;
        }
    }

    cout << maior + 1 << endl;

    return 0;
}
