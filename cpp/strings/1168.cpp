#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("1168.in", "r", stdin);
    int n;
    cin >> n;

    while(n--) {
        string entrada;
        cin >> entrada;

        int total = 0;

        for(int i = 0; i < entrada.size(); i++) {
            if(entrada[i] == '0' or entrada[i] == '6' or entrada[i] == '9') {
                total += 6;
            }
            if(entrada[i] == '1') {
                total += 2;
            }
            if(entrada[i] == '2' or entrada[i] == '3' or entrada[i] == '5') {
                total += 5;
            }
            if(entrada[i] == '4') {
                total += 4;
            }
            if(entrada[i] == '7') {
                total += 3;
            }
            if(entrada[i] == '8') {
                total += 7;
            }
        }

        cout << total << " leds" << endl;
    }

    return 0;
}
