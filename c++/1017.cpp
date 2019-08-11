#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   int h, v;
   double consumo;
   cout << fixed << setprecision(3);

   cin >> h >> v;
   consumo = h * v / 12.0;

   cout << consumo << endl;


   return 0;
}
