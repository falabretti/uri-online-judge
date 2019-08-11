#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   double raio;
   cout << fixed << setprecision(3);

   cin >> raio;

   cout << "VOLUME = " << (4/3.0) * 3.14159 * pow(raio, 3) << endl;

   return 0;
}
