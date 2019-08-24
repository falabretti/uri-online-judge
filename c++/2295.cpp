#include <iostream>

using namespace std;

int main() {

    double valor_a, valor_g, consumo_a, consumo_g;

    cin >> valor_a >> valor_g >> consumo_a >> consumo_g;

    double indice_a = consumo_a / valor_a;
    double indice_g = consumo_g / valor_g;

    if(indice_a > indice_g) cout << "A" << endl;
    else cout << "G" << endl;

    return 0;
}
