#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int album, compradas, total = 0;

    cin >> album >> compradas;

    int figuras[compradas];

    for(int i = 0; i < compradas; i++) {
        cin >> figuras[i];
    }

    sort(figuras, figuras + compradas);

    for(int j = 0; j < compradas; j++) {
        if(j == 0) {
            total++;
        } else {
            if(figuras[j - 1] != figuras[j]) {
                total++;
            }
        }
    }

    cout << album - total << endl;


    return 0;
}
