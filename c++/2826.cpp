#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string entrada[2];

    cin >> entrada[0];
    cin >> entrada[1];

    sort(entrada, entrada+2);

    cout << entrada[0] << endl;
    cout << entrada[1] << endl;

    return 0;
}
