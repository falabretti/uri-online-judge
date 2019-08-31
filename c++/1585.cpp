#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--) {
        int x, y;
        cin >> x >> y;

        int area = x * y / 2;

        cout << area << " cm2" << endl;
    }

    return 0;
}
