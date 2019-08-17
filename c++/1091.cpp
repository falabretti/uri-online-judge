#include <iostream>

using namespace std;

int main() {

    int consultas;

    while(cin >> consultas) {
        if(consultas == 0) break;

        int x_centro, y_centro;
        cin >> x_centro >> y_centro;

        while(consultas--) {
            int x, y;
            cin >> x >> y;

            string pos;

            if(x == x_centro or y == y_centro) pos = "divisa";
            else if(x > x_centro and y > y_centro) pos = "NE";
            else if(x > x_centro and y < y_centro) pos = "SE";
            else if(x < x_centro and y > y_centro) pos = "NO";
            else if(x < x_centro and y < y_centro) pos = "SO";

            cout << pos << endl;
        }
    }

    return 0;
}
