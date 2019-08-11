#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double s;
    cin >> s;
    cout << fixed << setprecision(2);

    if (s <= 400)
    {
        cout << "Novo salario: " << s * 1.15 << endl;
        cout << "Reajuste ganho: " << s * 0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (s > 400 && s <= 800)
    {
        cout << "Novo salario: " << s * 1.12 << endl;
        cout << "Reajuste ganho: " << s * 0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (s > 800 && s <= 1200)
    {
        cout << "Novo salario: " << s * 1.10 << endl;
        cout << "Reajuste ganho: " << s * 0.10 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (s > 1200 && s <= 2000)
    {
        cout << "Novo salario: " << s * 1.07 << endl;
        cout << "Reajuste ganho: " << s * 0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (s > 2000)
    {
        cout << "Novo salario: " << s * 1.04 << endl;
        cout << "Reajuste ganho: " << s * 0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }


    return 0;
}
