#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   double n, cent;
   cin >> n;

   cout << "NOTAS:" << endl;
   cout << int(n) / 100 << " nota(s) de R$ 100.00" << endl;
   cout << int(n) % 100 / 50 << " nota(s) de R$ 50.00" << endl;
   cout << (int(n) % 100) % 50 / 20 << " nota(s) de R$ 20.00" << endl;
   cout << ((int(n) % 100) % 50) % 20 / 10 << " nota(s) de R$ 10.00" << endl;
   cout << (((int(n) % 100) % 50) % 20) % 10 / 5 << " nota(s) de R$ 5.00" << endl;
   cout << ((((int(n) % 100) % 50) % 20) % 10) % 5 / 2 << " nota(s) de R$ 2.00" << endl;
   cout << "MOEDAS:" << endl;
   cout << (((((int(n) % 100) % 50) % 20) % 10) % 5) % 2 << " moeda(s) de R$ 1.00" << endl;
   cent = int(((n - (int)n) * 100));
   cout << int(cent) % 100 / 50 << " moeda(s) de R$ 0.50" << endl;
   cout << (int(cent) % 100) % 50 / 25 << " moeda(s) de R$ 0.25" << endl;
   cout << ((int(cent) % 100) % 50) % 25 / 10 << " moeda(s) de R$ 0.10" << endl;
   cout << (((int(cent) % 100) % 50) % 25) % 10 / 5 << " moeda(s) de R$ 0.05" << endl;
   cout << ((((int(cent) % 100) % 50) % 20) % 10) % 5 << " moeda(s) de R$ 0.01" << endl;

   return 0;
}
