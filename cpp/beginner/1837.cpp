#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, q, r;

    cin >> a >> b;

    q = a / b;
    r = a % b;

    while((0 <= r and r < abs(b)) == false) {
        if(q < 0){
            q--;
        }
        if(q > 0) {
            q++;
        }

        r = a - (b * q);

        ///q = (a - r) / b;
    }

    cout << q << " " << r << endl;

    return 0;
}
