#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   int n, h;
   double s, st;
   cout << fixed << setprecision(2);

   cin >> n >> h >> s;

   st = h * s;

   cout << "NUMBER = " << n << endl;
   cout << "SALARY = U$ " << st << endl;


   return 0;
}
