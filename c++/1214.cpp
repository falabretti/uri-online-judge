#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, tam;

    cin >> n;

    while(n--) {
        cin >> tam;

        int medias[tam], total = 0;

        for(int i = 0; i < tam; i++) {
            cin >> medias[i];
            total += medias[i];
        }
        double media = total / double(tam);

        int porcento = 0;

        for(int i = 0; i < tam; i++) {
            if(medias[i] > media) {
                porcento++;
            }
        }
        double saida = porcento * 100.0 / tam;

        cout << fixed << setprecision(3);

        cout << saida << "%\n";
    }

    return 0;
}
