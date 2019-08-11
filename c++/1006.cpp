#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   double a, b, c, MEDIA;
   cout << fixed << setprecision(1);

   cin >> a >> b >> c;

   MEDIA = (a * 2 + b * 3 + c * 5) / 10;

   cout << "MEDIA = " << MEDIA << endl;



   return 0;

}
