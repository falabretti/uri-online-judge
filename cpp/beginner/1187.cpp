#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

   ///freopen("1187.in", "r", stdin);
   cout << fixed << setprecision(1);
   double soma, total, m[12][12];
   soma = 0;
   total = 0;
   string o;

   cin >> o;

   for(int i = 0; i <= 11; i++) {
    for(int j = 0; j <= 11; j++) {
        cin >> m[i][j];
    }
   }

   for(int p = 0; p <= 11; p++) {
    for(int l = 0; l <= 11; l++) {
        if(l > p and l < (11 - p)) {
            soma += m [p][l];
            total ++;
        }
    }
   }

   if(o == "S") {
    cout << soma << endl;
   }
   if(o == "M") {
    cout << soma / total << endl;
   }

   return 0;
}
