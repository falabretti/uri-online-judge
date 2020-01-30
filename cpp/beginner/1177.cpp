#include <iostream>

using namespace std;

int main() {

    int t, n[1000];
    cin >> t;

    for(int i = 0; i <= 999;) {
        for(int j = 0; j < t; j++) {
            n[i] = j;
            if(i < 1000) {
                cout << "N[" << i << "] = " << n[i] << endl;
            }
            i++;
        }
    }

    return 0;
}
