#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    for(int i = 1; i <= 39; i++) {
        cout << "-";
    }
    cout << endl;
    for(int j = 1; j <= 5; j++) {
        cout << "|";
        cout << setw(38) << "|" << endl;
    }
    for(int k = 1; k <= 39; k++) {
        cout << "-";
    }
    cout << endl;

    return 0;
}
