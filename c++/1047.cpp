#include <iostream>

using namespace std;

int main() {

   int a1, a2, b1, b2, a, b, c;
   cin >> a1 >> a2 >> b1 >> b2;
   a = (a1 * 60) + a2;
   b = (b1 * 60) + b2;

   if (a < b) {
        c = b - a;
    cout << "O JOGO DUROU " << c / 60 << " HORA(S) E " << c % 60 << " MINUTO(S)" << endl;
   }
   else if (a > b) {
    c = (b + 720) - (a - 720);
    cout << "O JOGO DUROU " << c / 60 << " HORA(S) E " << c % 60 << " MINUTO(S)" << endl;
   }
   else if (a == b) {
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTOS(S)" << endl;
   }
   return 0;
}
