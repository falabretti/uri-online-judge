#include <iostream>

using namespace std;

int main () {

    double total;
    int real, cent;
    cin >> total;
    real = total;
    cent = ((total - real) + 0.001) * 100;

    cout << "NOTAS:" << endl;
    cout << real / 100 << " nota(s) de R$ 100.00" << endl;
    real = real % 100;
    cout << real / 50 << " nota(s) de R$ 50.00" << endl;
    real = real % 50;
    cout << real / 20 << " nota(s) de R$ 20.00" << endl;
    real = real % 20;
    cout << real / 10 << " nota(s) de R$ 10.00" << endl;
    real = real % 10;
    cout << real / 5 << " nota(s) de R$ 5.00" << endl;
    real = real % 5;
    cout << real / 2 << " nota(s) de R$ 2.00" << endl;
    real = real % 2;
    cout << "MOEDAS:" <<endl;
    cout << real << " moeda(s) de R$ 1.00" << endl;
    cout << cent / 50 << " moeda(s) de R$ 0.50" << endl;
    cent = cent % 50;
    cout << cent / 25 << " moeda(s) de R$ 0.25" << endl;
    cent = cent % 25;
    cout << cent / 10 << " moeda(s) de R$ 0.10" << endl;
    cent = cent % 10;
    cout << cent / 5 << " moeda(s) de R$ 0.05" << endl;
    cent = cent % 5;
    cout << cent << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
