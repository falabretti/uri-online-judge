#include <iostream>

using namespace std;

int main() {

    int s, t, f, c;

    cin >> s >> t >> f;

    c = s + t + f;

    if(c < 24 and c >= 0 ){
            cout << c << endl;
    }
    else if(c == 24) {
        cout << 0 << endl;
    }
    else if(c > 24) {
        cout << c - 24 << endl;
    }
    else if(c < 0) {
        cout << 24 + c << endl;
    }

    return 0;
}
