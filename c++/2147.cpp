#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int n;
    string entrada;

    cin >> n;

    while(n--) {
        cin >> entrada;
        cout << entrada.size() * 0.01 << endl;
    }

    return 0;
}
