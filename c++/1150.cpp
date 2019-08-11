#include <iostream>

using namespace std;

int main() {

   int i, x, z, s;
   s = 0;

   cin >> x;

   z = x;

   while(z <= x) {
    cin >> z;
   }

   for(i = 0; s <= z; i++){
    s += x;
    x++;
   }

   cout << i << endl;

   return 0;
}
