#include <iostream>

using namespace std;

int main() {

    int n[20];

    for(int i = 0; i <= 19; i++) {
        cin >> n[i];
    }
    for(int i = 0; i <= 9; i++) {
        swap(n[i], n[19-i]);
    }
    for(int i = 0; i <= 19; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}
