#include <iostream>

using namespace std;

int main() {

   int i, n, f, c;

   cin >> n;
   c = n - 1;

   while(c >= 1){
    f = n * c;
    n = f;
    c--;
   }

   cout << f << endl;

   return 0;
}
