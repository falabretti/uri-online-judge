#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   double a, b, c, raizdelta, r1, r2;
   cin >> a >> b >> c;
   cout << fixed << setprecision(5);

   raizdelta = sqrt(pow(b, 2) - (4 * a * c));

   if(a != 0 && raizdelta > 0) {

    r1 = (- b + raizdelta) / (2 * a);
    r2 = (- b - raizdelta) / (2 * a);

    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
   }

   else {

    cout << "Impossivel calcular" << endl;
   }


   return 0;
}
