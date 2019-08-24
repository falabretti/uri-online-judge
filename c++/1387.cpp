#include <iostream>

using namespace std;

int main() {

    int left, right;

    while(cin >> left >> right) {
        if(left == 0 and right == 0) break;

        int total = left + right;

        cout << total << endl;
    }

    return 0;
}
