#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   int i, n, soma;
   soma = 0;
   cout << fixed << setprecision(2);

   for(i = 0;; i++){
    cin >> n;
    if(n < 0) {
        break;
    }
    soma += n;
   }

   cout << soma / double(i) << endl;

   return 0;
}
