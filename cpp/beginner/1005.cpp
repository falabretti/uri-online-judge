#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   double a, b, MEDIA;

   cin >> a >> b;

   cout << fixed << setprecision(5);

   MEDIA = (a * 3.5 + b * 7.5) / 11;

   cout << "MEDIA = " << MEDIA << endl;


   return 0;

}
