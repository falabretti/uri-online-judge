#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   double a, b, c;
   cout << fixed << setprecision(1);

   cin >> a >> b >> c;

   if ((abs(b - c) < a && a < (b + c))
       || (abs(a - c) < b && b < (a + c))
       || (abs(a - b) < c && c < (a + b))) {
    cout << "Perimetro = " << a + b + c << endl;
   }
   else {
    cout << "Area = " << ((a + b) * c) / 2 << endl;
   }
   return 0;
}
