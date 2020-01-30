#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   int km;
   double gas;
   cout << fixed << setprecision(3);

   cin >> km >> gas;

   cout << km / gas << " km/l" << endl;




   return 0;

}
