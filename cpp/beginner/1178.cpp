#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   cout << fixed << setprecision(4);
   double x, n[100];
   cin >> x;

   for(int i = 0; i <= 99; i++) {
    n[i] = x;
    x = x / 2.0;
   }

   for(int i = 0; i <= 99; i++) {
    cout << "N[" << i << "] = " << n[i] << endl;
   }

   return 0;
}
