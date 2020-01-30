#include <iostream>

using namespace std;

int main() {

    int n, pos = -1, primeiro = 0;

    cin >> n;

    int motor[n];

    for(int i = 0; i < n; i++) {
        cin >> motor[i];
        if(primeiro < 1) {
            if(motor[i] < motor[i - 1] and i != 0) {
                pos = i;
                primeiro++;
            }
        }
    }

    cout << pos + 1 << endl;

    return 0;
}
