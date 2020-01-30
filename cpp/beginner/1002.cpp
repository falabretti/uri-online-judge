#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

   double raio, area;
   cin >> raio;
   cout << fixed << setprecision(4);

   area = 3.14159 * pow(raio, 2);

   cout << "A=" << area << endl;

   return 0;
}
