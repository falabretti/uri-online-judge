#include <iostream>

using namespace std;

int main() {

    int t, opt[5], total = 0;

    cin >> t;

    for(int i = 0; i < 5; i++) {
        cin >> opt[i];
        if(opt[i] == t) {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}
