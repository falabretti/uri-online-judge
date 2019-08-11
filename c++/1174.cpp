#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a[100];
    cout << fixed << setprecision(1);

    for(int i = 0; i <= 99; i++) {
        cin >> a[i];
    }

    for(int i = 0; i <= 99; i++) {
        if(a[i] <= 10) {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }

    return 0;
}
