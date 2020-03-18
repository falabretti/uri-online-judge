#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n and n) {
        while (n--) {
            char note = '*';
            bool valid = true;

            for (int i = 0; i < 5; i++) {
                int square;
                cin >> square;

                if (square <= 127) {
                    if (valid and note == '*')
                        note = i + 65;
                    else
                        valid = false;
                }
            }

            cout << (valid ? note : '*') << endl;
        }
    }

    return 0;
}