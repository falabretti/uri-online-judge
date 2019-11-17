#include <bits/stdc++.h>

using namespace std;

int main() {

    string comp;

    map<char, double> notes {
        {'W', 1.0},
        {'H', 1.0 / 2},
        {'Q', 1.0 / 4},
        {'E', 1.0 / 8},
        {'S', 1.0 / 16},
        {'T', 1.0 / 32},
        {'X', 1.0 / 64}
    };

    while(cin >> comp) {
        if(comp == "*") break;
        
        int total = 0;
        double time = 0;

        for(char note : comp) {
            if(note == '/') {
                if(time == 1) total++;
                time = 0;
                continue;
            }

            time += notes.at(note);
        }

        cout << total << endl;
    }

    return 0;
}