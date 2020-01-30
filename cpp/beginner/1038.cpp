#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2);

    switch (a)
    {
    case 1:
        cout << "Total: R$ " << 4.0 * b << endl;
        break;
    case 2:
        cout << "Total: R$ " << 4.5 * b << endl;
        break;
    case 3:
        cout << "Total: R$ " << 5.0 * b << endl;
        break;
    case 4:
        cout << "Total: R$ " << 2.0 * b << endl;
        break;
    case 5:
        cout << "Total: R$ " << 1.5 * b << endl;
        break;
    }
    return 0;
}
