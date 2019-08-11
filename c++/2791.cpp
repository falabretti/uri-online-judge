#include <iostream>

using namespace std;

int main () {

    int local, n;

    for(int i = 1; i <= 4; i++) {
        cin >> n;
        if(n == 1) {
            local = i;
        }
    }

    cout << local << endl;

    return 0;
}
