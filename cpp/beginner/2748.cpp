#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    for(int i = 1; i <= 39; i++) {
        cout << "-";
    }
    cout << endl;

    cout << left << setw(9) << "|";
    cout << left << setw(29) << "Roberto";
    cout << "|" << endl;

    cout << "|";
    cout << right << setw(38) << "|" << endl;

    cout << left << setw(9) << "|";
    cout << left << setw(29) << "5786";
    cout << "|" << endl;

    cout << "|";
    cout << right << setw(38) << "|" << endl;

    cout << left << setw(9) << "|";
    cout << left << setw(29) << "UNIFEI";
    cout << "|" << endl;

    for(int j = 1; j <= 39; j++) {
        cout << "-";
    }
    cout << endl;


    return 0;
}
