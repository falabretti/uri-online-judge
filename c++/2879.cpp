#include <iostream>

using namespace std;

int main() {

    int n, p, c = 0;

    cin >> n;

    while(n--) {
        cin >> p;
        if(p >= 2) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
