#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    //freopen("entrada.in", "r", stdin);

    double a, b, c;
    cout << fixed << setprecision(4);

    while(cin >> a >> b >> c) {

        double p = ( a + b + c ) / 2;
        double area_triangulo = sqrt((p * (p - a) * (p - b) * (p - c)));

        double raio_yellow = a * b * c / 4 / area_triangulo;
        double area_yellow = M_PI * pow(raio_yellow, 2);

        double raio_red = area_triangulo / p;
        double area_red = M_PI * pow(raio_red, 2);

        double sun = area_yellow - area_triangulo;
        double violet = area_triangulo - area_red;
        double roses = area_red;

        cout << sun << " " << violet << " " << roses << endl;
    }

    return 0;
}
