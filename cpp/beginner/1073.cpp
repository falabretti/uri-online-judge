#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

   int n, i;
   cin >> n;
   cout << fixed << setprecision(0);

   for (i = 1; i <= n; i++)
   if (i % 2 == 0) {
    cout << i << "^2 = " << pow(i, 2) << endl;
   }

   return 0;
}
