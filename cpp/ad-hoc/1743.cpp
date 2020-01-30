#include <iostream>

using namespace std;

int main() {

    int jack_1[5], jack_2[5];

    for(int i = 0; i < 5; i ++) {
        cin >> jack_1[i];
    }
    for(int i = 0; i < 5; i ++) {
        cin >> jack_2[i];
    }

    bool compativel = true;

    for(int i = 0; i < 5; i ++) {
        if(jack_1[i] == jack_2[i]) compativel = false;
    }

    if(compativel) cout << "Y" << endl;
    else cout << "N" << endl;

    return 0;
}
