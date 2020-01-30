#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

   double a, b, c, pi;

   cin >> a >> b >> c;
   pi = 3.14159;

   cout << fixed << setprecision(3);

   cout << "TRIANGULO: " << (a * c) / 2 << endl;
   cout << "CIRCULO: " << pi * pow(c, 2) << endl;
   cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
   cout << "QUADRADO: " << pow(b, 2) << endl;
   cout << "RETANGULO: " << a * b << endl;


   return 0;
}
