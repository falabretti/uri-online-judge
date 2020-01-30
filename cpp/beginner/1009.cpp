#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   string nome;
   double salario, vendas;
   cout << fixed << setprecision(2);

   cin >> nome >> salario >> vendas;

   cout << "TOTAL = R$ " << salario + vendas * 0.15 << endl;

   return 0;
}
