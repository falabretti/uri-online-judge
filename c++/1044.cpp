#include <iostream>

using namespace std;

int main() {

   int a, b;

   cin >> a >> b;

   if ((b % a) == 0 && b > a) {
    cout << "Sao Multiplos" << endl;
   }
   else if ((a % b) == 0 && b < a) {
    cout << "Sao Multiplos" << endl;
   }
   else {
    cout << "Nao sao Multiplos" << endl;
   }
   return 0;
}
