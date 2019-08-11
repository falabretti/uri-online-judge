#include <iostream>

using namespace std;

int main() {

    int n;
    string vilao;

    cin >> n;

    while(n--) {
        cin >> vilao;
        if(vilao != "BATMAIN") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
