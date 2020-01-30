#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   double s = 0;
   cout << fixed << setprecision(2);

   for(int i = 1; i <= 100; i ++) {
    s += 1.0 / i;
   }
   cout << s << endl;

   return 0;
}
