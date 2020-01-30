#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if(b >= 3 and b <= 96) {
        if(b > a) {
            cout << "crescente" << endl;
        }
        if(b < a) {
            cout << "minguante" << endl;
        }
    }
    if(b < 3) {
        cout << "nova" << endl;
    }
    if(b > 96) {
        cout << "cheia" << endl;
    }

    return 0;
}
