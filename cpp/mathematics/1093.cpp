#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

bool fim(double a, double b, double c, double d) {

    if(a != 0) return false;
    if(b != 0) return false;
    if(c != 0) return false;
    if(d != 0) return false;

    return true;
}

int main() {

    //freopen("entrada.in", "r", stdin);
    double ev1, ev2, ataque, dano;
    cout << fixed << setprecision(1);

    while(cin >> ev1 >> ev2 >> ataque >> dano) {
        if(fim(ev1, ev2, ataque, dano)) break;

        double n1 = ceil(ev1 / dano);
        double n2 = ceil(ev2 / dano);

        double prob;

        if(ataque == 3) {
            prob = n1 / (n1 + n2);
        }
        else {
            double aux = ((6 - ataque) / ataque);

            double num = 1 - pow(aux, n1);
            double den = 1 - pow(aux, n1 + n2);

            prob = num / den;
        }


        prob *= 100;
        cout << prob << endl;
    }


    return 0;
}
