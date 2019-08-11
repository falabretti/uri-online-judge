#include <iostream>

using namespace std;

int main() {

   int n, m;

   for(i = 0;;i++) {
    cin >> n;
    if(n == 0) {
        break;
    }
    m[n][n];
    for(int l = 0; l <= n; l++) {
        for(int c = 0; c <= n; c++) {
            if(l == c){
                    m[l][c] = l;
            }
            else {
                m[l][c] = 1;
            }
        }
    }
   }

   return 0;
}
