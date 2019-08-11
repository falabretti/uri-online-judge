#include <iostream>

using namespace std;

int main() {

   int n1, i, n2, in, out;
   cin >> n1;
   in = 0;
   out = 0;

   for(i = 1; i <= n1; i ++) {
    cin >> n2;
    if ((n2 >= 10) && (n2 <= 20)) {
        in = in + 1;
    }
    else {
        out = out + 1;
    }
   }
   cout << in << " in" << endl;
   cout << out << " out" << endl;

   return 0;
}
