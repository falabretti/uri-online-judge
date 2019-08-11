#include <iostream>

using namespace std;

int main() {

   int a, b;
   cin >> a >> b;

   if (a < b) {
    cout << "O JOGO DUROU " << b - a << " HORAS(S)" << endl;
   }
   else if (a > b) {
    cout << "O JOGO DUROU " << (b + 12) - (a - 12) << " HORAS(S)" << endl;
   }
   else if (a == b) {
    cout << "O JOGO DUROU 24 HORA(S)" << endl;;
   }
   return 0;
}
