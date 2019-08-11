#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int entrada [4];

    for(int i = 0; i < 4; i++) {
        cin >> entrada[i];
    }

    sort(entrada, entrada + 4);

    if(entrada[0] + entrada[1] > entrada[2] or
            entrada[0] + entrada[1] > entrada[3] or
            entrada[0] + entrada[2] > entrada[3] or
            entrada[1] + entrada[2] > entrada[3]) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }


    return 0;
}
